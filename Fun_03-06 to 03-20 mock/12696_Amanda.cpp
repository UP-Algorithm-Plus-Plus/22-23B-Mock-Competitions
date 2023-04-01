/*
*OnlineJudge
*12696 - Cabin Baggage
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int T;
    cin >> T;

    int ans = 0;
    for (int t = 0; t < T; t++) {
        float length, width, depth, weight;
        cin >> length >> width >> depth >> weight;
        
        bool valid = false;
        if ((length <= 56) && (width <= 45) && (depth <= 25))
            valid = true;
        if (length + width + depth <= 125)
            valid = true;
        if (weight > 7)
            valid = false;
        
        cout << valid << endl;

        if (valid)
            ans++;
    }
    cout << ans << endl;
    return 0;
}