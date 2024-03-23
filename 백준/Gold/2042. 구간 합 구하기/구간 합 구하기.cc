#include <bits/stdc++.h>
using namespace std;

vector<long long> nums;
vector<long long> segment_tree;

long long MakeSegmentTree(int node, int start, int end)
{
	if (start == end) return segment_tree[node] = nums[start];

	int mid = (start + end) / 2;
	long long left_result = MakeSegmentTree(node * 2, start, mid);
	long long right_result = MakeSegmentTree(node * 2 + 1, mid + 1, end);
	segment_tree[node] = left_result + right_result;

	return segment_tree[node];
}

void UpdateSegmentTree(int node, int start, int end, int index, long long diff)
{
	if (index < start || index > end) return;
	segment_tree[node] += diff;

	if (start != end) {
		int mid = (start + end) / 2;
		UpdateSegmentTree(node * 2, start, mid, index, diff);
		UpdateSegmentTree(node * 2 + 1, mid + 1, end, index, diff);
	}
}

long long Sum(int node, int start, int end, int left, int right)
{
	if (left > end || right < start) return 0;
	if (left <= start && end <= right) return segment_tree[node];

	int mid = (start + end) / 2;
	long long left_result = Sum(node * 2, start, mid, left, right);
	long long right_result = Sum(node * 2 + 1, mid + 1, end, left, right);
	return left_result + right_result;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, M, K;
	cin >> N >> M >> K;

	nums.resize(N + 1);	
	for (int i = 1; i < N + 1; i++) {
		cin >> nums[i];
	}

	int tree_height = (int)ceil(log2(N));
	int tree_size = (1 << (tree_height + 1));
	segment_tree.resize(tree_size);
	MakeSegmentTree(1, 1, N);

	int a, b;
	long long c;
	for(int i = 0; i < M + K; i++) {
		cin >> a >> b >> c;
		if (a == 1) {			
			UpdateSegmentTree(1, 1, N, b, c - nums[b]);
			nums[b] = c;
		}
		else if (a == 2) {
			cout << Sum(1, 1, N, b, c) << '\n';
		}
	}

	return 0;
}