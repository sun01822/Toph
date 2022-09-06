#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int T;
    int a[] = {1, 2, 3, 5, 7, 8, 9};
    cin >> T;
    while(T--)
    {
        unsigned ll N;
        cin >> N;
        int vagsesh = N % 7;
        unsigned ll vagfol = (N - vagsesh)/7;
        unsigned ll result  = (vagfol*9) + (ll)a[vagsesh-1];
        cout << result << '\n';
    }
    return 0;
}