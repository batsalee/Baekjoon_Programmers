#include <bits/stdc++.h>
using namespace std;

#define INF 2147483647

vector<int> arr;
vector<int> SegmentTree;

void Make_SegmentTree(int Node, int Start, int End) 
{
	if (Start == End) SegmentTree[Node] = arr[Start];
	else {
		Make_SegmentTree(Node * 2, Start, (Start + End) / 2);
		Make_SegmentTree(Node * 2 + 1, (Start + End) / 2 + 1, End);
		SegmentTree[Node] = min(SegmentTree[Node * 2], SegmentTree[Node * 2 + 1]);
	}
}

int SearchMin(int Node, int Start, int End, int Left, int Right) {
	if (Left > End || Right < Start) return INF;
	if (Left <= Start && End <= Right) return SegmentTree[Node];

	int Left_Result = SearchMin(Node * 2, Start, (Start + End) / 2, Left, Right);
	int Right_Result = SearchMin(Node * 2 + 1, (Start + End) / 2 + 1, End, Left, Right);
	return min(Left_Result, Right_Result);
}

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	// 입력받고
	arr.resize(N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	// 세그먼트트리 만들고
	int Tree_Height = (int)ceil(log2(N));
	int Tree_Size = (1 << (Tree_Height + 1));
	SegmentTree.resize(Tree_Size);
	Make_SegmentTree(1, 0, N - 1);

	// 요청받고
	int a, b;
	while(M--) {
		cin >> a >> b;

		// a에서 b까지 최소값 출력, 인덱스니까 a, b 1씩 빼주기
		cout << SearchMin(1, 0, N - 1, a - 1, b - 1) << '\n';
	}

	return 0;
}