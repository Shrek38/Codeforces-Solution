#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;

        vector<int> cntT(26, 0), cntS(26, 0);
        for (char c : t) cntT[c - 'a']++;
        for (char c : s) cntS[c - 'a']++;

        bool ok = true;
        for (int i = 0; i < 26; ++i) {
            if (cntS[i] > cntT[i]) {
                ok = false;
                break;
            }
        }

        if (!ok) {
            cout << "Impossible\n";
            continue;
        }

        vector<int> cntR(26, 0);
        for (int i = 0; i < 26; ++i) {
            cntR[i] = cntT[i] - cntS[i];
        }

        string ans;
        ans.reserve(t.size());
        int pos = 0; 
        int nS = (int)s.size();

        while (true) {
            int remR = 0;
            for (int x : cntR) remR += x;
            if (remR == 0 && pos >= nS) break;

            int idxR = -1;
            for (int i = 0; i < 26; ++i) {
                if (cntR[i] > 0) {
                    idxR = i;
                    break;
                }
            }

            char cR = (idxR == -1 ? '{' : char('a' + idxR)); 
            char cS = (pos < nS ? s[pos] : '{');

            if (cS == '{' || (cR != '{' && cR < cS)) {
                // Take from R
                ans.push_back(cR);
                cntR[idxR]--;
            } else {
                // Take from S
                ans.push_back(cS);
                pos++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
