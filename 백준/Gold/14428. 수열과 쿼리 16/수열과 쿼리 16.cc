#include <bits/stdc++.h>
using namespace std;

#define out_of_range pair<int, int> {-1, -1}

vector<int> arr;
vector<pair<int, int>> SegmentTree; // value, index

void Make_SegmentTree(int Node, int Start, int End) {
	if (Start == End) SegmentTree[Node] = { arr[Start], Start };
	else {
		Make_SegmentTree(Node * 2, Start, (Start + End) / 2);
		Make_SegmentTree(Node * 2 + 1, (Start + End) / 2 + 1, End);
		SegmentTree[Node] = min(SegmentTree[Node * 2], SegmentTree[Node * 2 + 1]);
	}
}

void Update_SegmentTree(int Node, int Start, int End, int Index, int Value) {
	if (Index < Start || Index > End) return;
	if (Start == End) {
		arr[Index] = Value;
		SegmentTree[Node] = { Value, Index };
		return;
	}

	Update_SegmentTree(Node * 2, Start, (Start + End) / 2, Index, Value);
	Update_SegmentTree(Node * 2 + 1, (Start + End) / 2 + 1, End, Index, Value);
	SegmentTree[Node] = min(SegmentTree[Node * 2], SegmentTree[Node * 2 + 1]);
}

pair<int, int> SearchMin(int Node, int Start, int End, int Left, int Right) 
{
	if (Left > End || Right < Start) return out_of_range;
	if (Left <= Start && End <= Right) return SegmentTree[Node];

	int Mid = (Start + End) / 2;
	pair<int, int> Left_Result = SearchMin(Node * 2, Start, Mid, Left, Right);
	pair<int, int> Right_Result = SearchMin(Node * 2 + 1, Mid + 1, End, Left, Right);

	if (Left_Result == out_of_range) return Right_Result;
	else if (Right_Result == out_of_range) return Left_Result;
	else return min(Left_Result, Right_Result);
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;

	arr.resize(N + 1, 0);
	for (int i = 1; i < N + 1; i++) {
		cin >> arr[i];
	}
	
	// Make
	int Tree_Height = (int)ceil(log2(N));
	int Tree_Size = (1 << (Tree_Height + 1));
	SegmentTree.resize(Tree_Size);
	Make_SegmentTree(1, 1, N);

	// Query
	int M;
	cin >> M;

	int a, b, c;
	while (M--) {
		cin >> a >> b >> c;
		
		if (a == 1) Update_SegmentTree(1, 1, N, b, c);			
		else if (a == 2) cout << SearchMin(1, 1, N, b, c).second << '\n';
	}

	return 0;
}