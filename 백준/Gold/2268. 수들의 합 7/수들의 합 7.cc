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

void Modify(int Node, int Start, int End, int Index, int Value) {
	if (Index < Start || Index > End) return;
	if (Start == End) {
		arr[Index] = Value;
		SegmentTree[Node] = Value;
		return;
	}

	Modify(Node * 2, Start, (Start + End) / 2, Index, Value);
	Modify(Node * 2 + 1, (Start + End) / 2 + 1, End, Index, Value);
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

	int N, M;
	cin >> N >> M;

	arr.resize(N + 1, 0);

	// Make
	int Tree_Height = (int)ceil(log2(N));
	int Tree_Size = (1 << (Tree_Height + 1));
	SegmentTree.resize(Tree_Size);
	Make_SegmentTree(1, 1, N);

	// Query
	int input, a, b;
	while (M--) {
		cin >> input >> a >> b;
		
		if (input == 0) { // sum
			if (a > b) swap(a, b);
			cout << Sum(1, 1, N, a, b) << '\n';
		}
		else if (input == 1) { // Modify 
			Modify(1, 1, N, a, b);
		}		
	}

	return 0;
}