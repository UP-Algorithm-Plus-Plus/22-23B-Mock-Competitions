/*
*OnlineJudge
*11332 - Summing Digits
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long N;
    while (cin >> N) {
        if (!N)
            break;
        
        while (N/10) {
            int digitsum = 0;
            while (N) {
                digitsum += N%10;
                N /= 10;
            }
            N = digitsum;
        }

        cout << N << endl;
    }
    return 0;
}