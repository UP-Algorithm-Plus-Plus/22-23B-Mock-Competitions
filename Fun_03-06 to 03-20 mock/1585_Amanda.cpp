/*
*OnlineJudge
*1585 - Score
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        string score;
        cin >> score;

        int increment = 1;
        int ans = 0;
        for (int i = 0; i < (int) score.size(); i++) {
            if (score[i] == 'O') {
                ans += increment;
                increment++;
            } else
                increment = 1;
        }
        
        cout << ans << endl;
    }
    return 0;
}