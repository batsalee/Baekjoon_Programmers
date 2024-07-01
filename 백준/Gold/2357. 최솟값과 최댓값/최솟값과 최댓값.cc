#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
vector<pair<int, int>> SegmentTree; // 최소값, 최대값 순으로 보관

void Make_SegmentTree(int Node, int Start, int End) 
{
	if (Start == End) { // 값 하나니까 최소값도 최대값도 본인 값
		SegmentTree[Node].first = arr[Start];
		SegmentTree[Node].second = arr[Start];
	}
	else {
		Make_SegmentTree(Node * 2, Start, (Start + End) / 2);
		Make_SegmentTree(Node * 2 + 1, (Start + End) / 2 + 1, End);
		SegmentTree[Node].first = min(SegmentTree[Node * 2].first, SegmentTree[Node * 2 + 1].first);
		SegmentTree[Node].second = max(SegmentTree[Node * 2].second, SegmentTree[Node * 2 + 1].second);
	}
}

pair<int, int> SearchMinMax(int Node, int Start, int End, int Left, int Right) {
	if (Left > End || Right < Start) return { 0, 0 }; // 값 범위에 0은 못나오니까 예외로 두려고 사용
	if (Left <= Start && End <= Right) return SegmentTree[Node];

	pair<int, int> Left_Result = SearchMinMax(Node * 2, Start, (Start + End) / 2, Left, Right);
	pair<int, int> Right_Result = SearchMinMax(Node * 2 + 1, (Start + End) / 2 + 1, End, Left, Right);

	if (Left_Result == make_pair(0, 0)) return Right_Result;
	else if (Right_Result == make_pair(0, 0)) return Left_Result;
	else return { min(Left_Result.first, Right_Result.first), max(Left_Result.second, Right_Result.second)};
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

		// a에서 b까지 최소값과 최대값 출력, 인덱스니까 a, b 1씩 빼주기
		pair<int, int> result = SearchMinMax(1, 0, N - 1, a - 1, b - 1);
		cout << result.first << ' ' << result.second << '\n';
	}

	return 0;
}