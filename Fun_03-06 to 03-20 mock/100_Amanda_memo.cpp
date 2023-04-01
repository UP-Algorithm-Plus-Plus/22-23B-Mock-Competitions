/*
*OnlineJudge
*100 - The 3n + 1 problem
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int i, j;
    int memo[1000000] = {0};
    while (cin >> i >> j) {
        cout << i << " " << j << " ";

        if (j < i)
            swap(i, j);

        int maxcycle = 0;
        for (int N = i; N <= j; N++) {
            int cycle = 1;
            int n = N;
            while (n != 1) {
                if (n%2)
                    n = 3*n + 1;
                else
                    n = n/2;
                
                if ((n < 1000000) && (memo[n] != 0)) {
                    cycle += memo[n];
                    break;
                }

                cycle++;
            }

            if (N < 1000000)
                memo[N] = cycle;
                
            maxcycle = max(maxcycle, cycle);
        }

        cout << maxcycle << endl;
    }
    return 0;
}