#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
vector<pair<int, int>> SegmentTree; // odd, even

void Make_SegmentTree(int Node, int Start, int End) {
    if (Start == End) SegmentTree[Node] = ((arr[Start] & 1) ? make_pair(1, 0) : make_pair(0, 1));
    else {
        Make_SegmentTree(Node * 2, Start, (Start + End) / 2);
        Make_SegmentTree(Node * 2 + 1, (Start + End) / 2 + 1, End);
        SegmentTree[Node].first = SegmentTree[Node * 2].first + SegmentTree[Node * 2 + 1].first;
        SegmentTree[Node].second = SegmentTree[Node * 2].second + SegmentTree[Node * 2 + 1].second;
	}
}

void Update_SegmentTree(int Node, int Start, int End, int Index, int Value) {
    if (Index < Start || Index > End) return;
    if (Start == End) {        
		arr[Index] = Value;
        SegmentTree[Node] = ((arr[Index] & 1) ? make_pair(1, 0) : make_pair(0, 1));
        return;
    }

    Update_SegmentTree(Node * 2, Start, (Start + End) / 2, Index, Value);
    Update_SegmentTree(Node * 2 + 1, (Start + End) / 2 + 1, End, Index, Value);
    SegmentTree[Node].first = SegmentTree[Node * 2].first + SegmentTree[Node * 2 + 1].first;
    SegmentTree[Node].second = SegmentTree[Node * 2].second + SegmentTree[Node * 2 + 1].second;
}

pair<int, int> Count(int Node, int Start, int End, int Left, int Right) {
    if (Left > End || Right < Start) return { 0, 0 };
    if (Left <= Start && End <= Right) return SegmentTree[Node];

    pair<int, int> Left_Result = Count(Node * 2, Start, (Start + End) / 2, Left, Right);
    pair<int, int> Right_Result = Count(Node * 2 + 1, (Start + End) / 2 + 1, End, Left, Right);

    return { Left_Result.first + Right_Result.first, Left_Result.second + Right_Result.second };
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    int N;
    cin >> N;
    
    arr.resize(N + 1);
    for (int i = 1; i < N + 1; i++) {
        cin >> arr[i];
    }

    int Tree_Height = (int)ceil(log2(N));
    int Tree_Size = (1 << (Tree_Height + 1));
    SegmentTree.resize(Tree_Size);
    Make_SegmentTree(1, 1, N);

    int M;
    cin >> M;

    int a, b, c;
    while (M--) {
        cin >> a >> b >> c;

        if (a == 1) Update_SegmentTree(1, 1, N, b, c);
        else if (a == 2) cout << Count(1, 1, N, b, c).second << '\n';
        else if (a == 3) cout << Count(1, 1, N, b, c).first << '\n';
    }

    return 0;
}