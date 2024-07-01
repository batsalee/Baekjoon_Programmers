#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
vector<int> SegmentTree;

void Make_SegmentTree(int Node, int Start, int End) {
    if (Start == End) {
        if (arr[Start] > 0) SegmentTree[Node] = 1;
        else if (arr[Start] == 0) SegmentTree[Node] = 0;
        else if (arr[Start] < 0) SegmentTree[Node] = -1;
    }
    else {
        Make_SegmentTree(Node * 2, Start, (Start + End) / 2);
        Make_SegmentTree(Node * 2 + 1, (Start + End) / 2 + 1, End);
        SegmentTree[Node] = SegmentTree[Node * 2] * SegmentTree[Node * 2 + 1];
	}
}

void Update_SegmentTree(int Node, int Start, int End, int Index, int Value) {
    if (Index < Start || Index > End) return;
    if (Start == End) {
        if (Value > 0) Value = 1;
        else if (Value == 0) Value = 0;
		else if (Value < 0) Value = -1;

		arr[Index] = Value;
		SegmentTree[Node] = Value;

        return;
    }

    Update_SegmentTree(Node * 2, Start, (Start + End) / 2, Index, Value);
    Update_SegmentTree(Node * 2 + 1, (Start + End) / 2 + 1, End, Index, Value);
    SegmentTree[Node] = SegmentTree[Node * 2] * SegmentTree[Node * 2 + 1];
}

int Multiple(int Node, int Start, int End, int Left, int Right) {
    if (Left > End || Right < Start) return 1;
    if (Left <= Start && End <= Right) return SegmentTree[Node];

    int Left_Result = Multiple(Node * 2, Start, (Start + End) / 2, Left, Right);
    int Right_Result = Multiple(Node * 2 + 1, (Start + End) / 2 + 1, End, Left, Right);

    return Left_Result * Right_Result;
}

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    int N, K;
    while (cin >> N >> K) {
        arr.resize(N + 1);
        for (int i = 1; i < N + 1; i++) {
            cin >> arr[i];
        }

        int Tree_Height = (int)ceil(log2(N));
        int Tree_Size = (1 << (Tree_Height + 1));
        SegmentTree.resize(Tree_Size);
        Make_SegmentTree(1, 1, N);

        char CP;
        int a, b;
        while (K--) {
            cin >> CP >> a >> b;

            if (CP == 'C') Update_SegmentTree(1, 1, N, a, b);
            else if (CP == 'P') {
                int result = Multiple(1, 1, N, a, b);
                if (result > 0) cout << '+';
                else if (result == 0) cout << '0';
                else if (result < 0) cout << '-';
            }
        }

        cout << '\n';
    }

    return 0;
}