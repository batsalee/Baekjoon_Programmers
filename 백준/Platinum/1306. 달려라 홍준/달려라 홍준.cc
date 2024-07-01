#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
vector<int> SegmentTree;

void Make_SegmentTree(int Node, int Start, int End) {
	if (Start == End) SegmentTree[Node] = arr[Start];
	else {
		Make_SegmentTree(Node * 2, Start, (Start + End) / 2);
		Make_SegmentTree(Node * 2 + 1, (Start + End) / 2 + 1, End);
		SegmentTree[Node] = max(SegmentTree[Node * 2], SegmentTree[Node * 2 + 1]);
	}
}

int SearchMax(int Node, int Start, int End, int Left, int Right) {
	if (Left > End || Right < Start) return 0;
	if (Left <= Start && End <= Right) return SegmentTree[Node];

	int Left_Result = SearchMax(Node * 2, Start, (Start + End) / 2, Left, Right);
	int Right_Result = SearchMax(Node * 2 + 1, (Start + End) / 2 + 1, End, Left, Right);

	return max(Left_Result, Right_Result);
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	arr.resize(N + 1);
	for (int i = 1; i < N + 1; i++) {
		cin >> arr[i];
	}

	int Tree_Height = (int)ceil(log2(N));
	int Tree_Size = (1 << (Tree_Height + 1));
	SegmentTree.resize(Tree_Size);
	Make_SegmentTree(1, 1, N);

	for (int i = M; i <= N - M + 1; i++) {
		cout << SearchMax(1, 1, N, i - (M - 1), i + (M - 1)) << ' ';
	}

    return 0;
}