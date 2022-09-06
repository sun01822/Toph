#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int T, A, B, d=1;
    char c;
    cin >> T;
    while(T--)
    {
        cin >> A >> c >> B;
        if(c == '+')
            printf("Case %d: %d\n",d++, A+B);
        else if(c == '-')
             printf("Case %d: %d\n",d++, A-B);
        else if(c == '*')
             printf("Case %d: %d\n",d++, A*B);
    }
    return 0;
}