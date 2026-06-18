#include <bits/stdc++.h>
using namespace std;

int n, total;
vector<int> arr;
vector<int> lastPos;     
vector<set<int>> usedGaps;
vector<int> cnt;

bool backtrack(int pos) {
    if (pos > total) {
        for (int x = 1; x <= n; x++)
            if (cnt[x] != 4) return false;
        return true;
    }

    vector<int> candidates;
    for (int x = 1; x <= n; x++) {
        if (cnt[x] >= 4) continue;
        if (lastPos[x] == 0) {
            candidates.push_back(x);
        } else {
            int gap = pos - lastPos[x];
            if (usedGaps[x].find(gap) == usedGaps[x].end()) {
                candidates.push_back(x);
            }
        }
    }

    sort(candidates.begin(), candidates.end(), [](int a, int b) {
        if (cnt[a] != cnt[b]) return cnt[a] > cnt[b];
        return a < b;
    });

    for (int x : candidates) {
        int prevLast = lastPos[x];
        int addedGap = -1;
        if (prevLast != 0) {
            addedGap = pos - prevLast;
            usedGaps[x].insert(addedGap);
        }
        lastPos[x] = pos;
        cnt[x]++;
        arr[pos] = x;

        if (backtrack(pos + 1)) return true;

        arr[pos] = 0;
        cnt[x]--;
        lastPos[x] = prevLast;
        if (addedGap != -1) usedGaps[x].erase(addedGap);
    }
    return false;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        total = 4 * n;
        arr.assign(total + 1, 0);
        lastPos.assign(n + 1, 0);
        usedGaps.assign(n + 1, set<int>());
        cnt.assign(n + 1, 0);

        backtrack(1);

        for (int i = 1; i <= total; i++) printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
