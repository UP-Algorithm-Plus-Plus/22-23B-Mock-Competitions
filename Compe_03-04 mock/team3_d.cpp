#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int adj[101][101];
ll squa[101][11];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, s, t;
    cin >> n >> m >> s >> t;
    for(int i = 0; i <= 100; i++) {
        for(int j = 0; j <= 100; j++) {
            adj[i][j] = 0;
        }
    }
    while(m--) {
        int x, y;
        cin >> x >> y;
        adj[x][y] = adj[y][x] = 1;
    }
    squa[s][0] = 1;
    for(int w = 0; w < t; w++) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(adj[i][j]) squa[j][w+1] += squa[i][w];
            }
        }
    }
    ll ans = 0;
    for(int i = 0; i < n; i++) ans += squa[i][t];
    cout << ans << '\n';
}
