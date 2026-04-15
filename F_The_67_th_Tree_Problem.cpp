#include <iostream>

using namespace std;

void solve(bool v) {
    int x, y; cin >> x >> y;
    if (v) x++;
    int n = x + y;
    if (x > y ||(n%2 ==0 && x ==0)) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    
    if (n%2 ==0) {
        for(int i=1; i<2*x; i++) {
            cout << i << " " << i+1 << endl;
        }
        for(int i=2*x+1; i<=n; i++) {
            cout << 1 << " " << i << endl;
        }
    } 
    else {
        for(int i=1; i< 2*x+1; i++) {
            cout << i << " " << i + 1 << endl;
        }
        for(int i =2*x+2; i <= n; i++) {
            cout << 1 << " " << i << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        bool is_t_2 = (t == 2);
        while (t--) {
            solve(is_t_2);
        }
    }
    return 0;
}