#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int n, num;
    cin >> n;
    for(int i=0; i<3; i++)
    {
        cin >> num;
        if(n-num>=10)
        {
            cout << "Yes :-D" << '\n';
            return 0;
        }
    }
    cout << "No :-(" << '\n';
    return 0;
}