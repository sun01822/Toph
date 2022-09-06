//

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    bool flag = false;
    cin >> n;
    if (n == 1)
        cout << "I DID NOT DO THE ASSIGNMENT." << '\n';
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                flag = true;
        }
        if (flag)
        {
            for (int i = 1; i <= n; i++)
                cout << "I DID NOT DO THE ASSIGNMENT." << '\n';
        }
        else
            cout << "NO PUNISHMENT" << '\n';
    }
    return 0;
}