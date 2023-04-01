/*
*OnlineJudge
*11498 - Division of Nlogonia
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int K;
    while (cin >> K) {
        if (!K)
            break;
        
        int N, M;
        cin >> N >> M;

        int X, Y;
        for (int k = 0; k < K; k++) {
            cin >> X >> Y;
            if ((X == N) || (Y == M))
                cout << "divisa" << endl;
            else {
                if (Y > M) {
                    if (X > N)
                        cout << "NE" << endl;
                    else
                        cout << "NO" << endl;
                } else {
                    if (X > N)
                        cout << "SE" << endl;
                    else
                        cout << "SO" << endl;
                }
            }
        }
    }
    return 0;
}