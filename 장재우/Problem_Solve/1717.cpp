#include <iostream>

using namespace std;

void union_set(int* arr, int idx1, int idx2);
bool is_same_set(int* arr, int idx1, int idx2);
int find_head(int* arr, int idx);

int problem1717(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;

    cin >> n >> m;

    int* arr = new int[n + 1];
    for (int i = 0; i < n + 1; ++i)
        arr[i] = i;

    for (int cnt = 0; cnt < m; ++cnt) {
        int operation;
        int idx1, idx2;

        cin >> operation;
        cin >> idx1 >> idx2;

        switch (operation) {
        case 0:
            // case : Union
            union_set(arr, idx1, idx2);
            break;

        case 1:
            // case : Is Same Set
            if (is_same_set(arr, idx1, idx2))
                cout << "YES\n";
            else
                cout << "NO\n";
            break;
        }
    }

    return 0;
}

void union_set(int* arr, int idx1, int idx2) {
    if (idx1 == idx2)
        return;

    if (arr[idx1] == arr[idx2])
        return;

    int head_idx1 = find_head(arr, arr[idx1]);
    int head_idx2 = find_head(arr, arr[idx2]);

    if (head_idx1 > head_idx2)
        arr[head_idx1] = head_idx2;
    else
        arr[head_idx2] = head_idx1;
}

bool is_same_set(int* arr, int idx1, int idx2) {
    return (find_head(arr, idx1) == find_head(arr, idx2));
}


int find_head(int* arr, int idx) {
    if (idx == arr[idx]) return idx;
    return arr[idx] = find_head(arr, arr[idx]);
}