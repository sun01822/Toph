#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int T, n;
    cin >> T;
    for(int i=1; i<=T; i++)
    {
        cin >> n;
        printf("Case %d: %lld\n", i, (ull)n*n);
    }
    
    return 0;
}