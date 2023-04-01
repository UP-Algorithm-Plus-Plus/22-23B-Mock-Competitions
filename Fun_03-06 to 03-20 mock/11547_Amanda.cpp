/*
*OnlineJudge
*11547 - Automatic Answer
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
        
        long long ans = N;
        ans *= 567;
        ans /= 9;
        ans += 7492;
        ans *= 235;
        ans /= 47;
        ans -= 498;

        ans /= 10;
        ans %= 10;

        cout << abs(ans) << endl;
    }
    return 0;
}