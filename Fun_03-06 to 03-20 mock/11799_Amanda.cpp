/*
*OnlineJudge
*11799 - Horror Dash
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;

        int ans = 0;
        for (int n = 0; n < N; n++) {
            int c; 
            cin >> c;
            ans = max(ans,c);
        }
        
        cout << "Case " << t+1 << ": " << ans << endl;
    }
    return 0;
}