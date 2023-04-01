/*
*OnlineJudge
*12646 - Zero or One
*Code by: Amanda Lim
*/

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int A, B, C;
    while (cin >> A >> B >> C) {
        if ((A == B) && (B == C))
            cout << "*" << endl;
        if ((A != B) && (B == C))
            cout << "A" << endl;
        if ((A != B) && (A == C))
            cout << "B" << endl;
        if ((A != C) && (B == A))
            cout << "C" << endl;
    }
    return 0;
}