#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
vector<long long> SegmentTree;

void Make_SegmentTree(int Node, int Start, int End) {
	if (Start == End) SegmentTree[Node] = arr[Start];
	else {
		Make_SegmentTree(Node * 2, Start, (Start + End) / 2);
		Make_SegmentTree(Node * 2 + 1, (Start + End) / 2 + 1, End);
		SegmentTree[Node] = SegmentTree[Node * 2] + SegmentTree[Node * 2 + 1];
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
	SegmentTree[Node] = SegmentTree[Node * 2] + SegmentTree[Node * 2 + 1];
}

long long Sum(int Node, int Start, int End, int Left, int Right)
{
	if (Left > End || Right < Start) return 0;
	if (Left <= Start && End <= Right) return SegmentTree[Node];

	long long Left_Result = Sum(Node * 2, Start, (Start + End) / 2, Left, Right);
	long long Right_Result = Sum(Node * 2 + 1, (Start + End) / 2 + 1, End, Left, Right);
	return Left_Result + Right_Result;
}


int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, Q;
	cin >> N >> Q;

	// Input
	arr.resize(N + 1);
	for (int i = 1; i < N + 1; i++) {
		cin >> arr[i];
	}

	// Make
	int Tree_Height = (int)ceil(log2(N));
	int Tree_Size = (1 << (Tree_Height + 1));
	SegmentTree.resize(Tree_Size);
	Make_SegmentTree(1, 1, N);

	// Query
	int x, y, a, b;
	while (Q--) {
		cin >> x >> y >> a >> b;
		if (x > y) swap(x, y);

		cout << Sum(1, 1, N, x, y) << '\n'; // x ~ y의 구간합 출력
		Update_SegmentTree(1, 1, N, a, b); // arr[a] = b로 업데이트
	}

	return 0;
}