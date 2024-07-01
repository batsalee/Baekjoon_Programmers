#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
vector<long long> SegmentTree;

void Add_SegmentTree(int Node, int Start, int End, int Index, int Value) {
	if (Index < Start || Index > End) return;
	if (Start == End) {
		arr[Index] += Value;
		SegmentTree[Node] += Value;
		return;
	}

	Add_SegmentTree(Node * 2, Start, (Start + End) / 2, Index, Value);
	Add_SegmentTree(Node * 2 + 1, (Start + End) / 2 + 1, End, Index, Value);
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
	arr.resize(N + 1, 0);
	
	int Tree_Height = (int)ceil(log2(N));
	int Tree_Size = (1 << (Tree_Height + 1));
	SegmentTree.resize(Tree_Size, 0);

	int a, b, c;
	while (Q--) {
		cin >> a >> b >> c;
		
		if (a == 1) Add_SegmentTree(1, 1, N, b, c);			
		else if (a == 2) cout << Sum(1, 1, N, b, c) << '\n';
	}

	return 0;
}