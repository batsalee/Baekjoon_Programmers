#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
vector<long long> SegmentTree;

void Make_SegmentTree(int Node, int Start, int End) 
{
	if (Start == End) SegmentTree[Node] = arr[Start];
	else {
		Make_SegmentTree(Node * 2, Start, (Start + End) / 2);
		Make_SegmentTree(Node * 2 + 1, (Start + End) / 2 + 1, End);
		SegmentTree[Node] = (SegmentTree[Node * 2] * SegmentTree[Node * 2 + 1]) % 1000000007;
	}
}

void Update_SegmentTree(int Node, int Start, int End, int Index, int Value) {
	if (Index < Start || Index > End) return;
	if (Start == End) {
		arr[Index] = Value;
		SegmentTree[Node] = Value;
		return;
	}

	Update_SegmentTree(Node * 2, Start, (Start + End) / 2, Index, Value);
	Update_SegmentTree(Node * 2 + 1, (Start + End) / 2 + 1, End, Index, Value);
	SegmentTree[Node] = (SegmentTree[Node * 2] * SegmentTree[Node * 2 + 1]) % 1000000007;
}

long long Multiple(int Node, int Start, int End, int Left, int Right) {
	if (Left > End || Right < Start) return 1;
	if (Left <= Start && End <= Right) return SegmentTree[Node];

	int Mid = (Start + End) / 2;
	long long Left_Result = Multiple(Node * 2, Start, Mid, Left, Right);
	long long Right_Result = Multiple(Node * 2 + 1, Mid + 1, End, Left, Right);
	return (Left_Result * Right_Result) % 1000000007;
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, M, K;
	cin >> N >> M >> K;

	// 입력받고
	arr.resize(N + 1, 0);
	for (int i = 1; i < N + 1; i++) {
		cin >> arr[i];
	}

	// 세그먼트트리 만들고
	int Tree_Height = (int)ceil(log2(N));
	int Tree_Size = (1 << (Tree_Height + 1));
	SegmentTree.resize(Tree_Size);
	Make_SegmentTree(1, 1, N);

	// 요청받고
	int a, b, c;
	for (int i = 0; i < M + K; i++) {
		cin >> a >> b >> c;

		if (a == 1) {
			// b번째수를 c로 변경
			Update_SegmentTree(1, 1, N, b, c);
		}
		else if (a == 2) {
			// b부터 c까지의 곱을 출력
			cout << Multiple(1, 1, N, b, c) << '\n';
		}
	}

	return 0;
}