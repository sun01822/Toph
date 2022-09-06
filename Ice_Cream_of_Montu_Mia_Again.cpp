#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool binary_search(int a[], int n, int size)
{
    int low = 0, high = size, mid;
    while(low<=high)
    {
        mid = (high + low) / 2;
        if(a[mid] == n)
            return true;
        else if(a[mid] > n)
        {
            high = mid-1;
        }

        else
            low = mid+1;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int n, m, a1[101], a2[101];
    int count=0;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a1[i];
    cin >> m;
    for(int i=0; i<m; i++)
        cin >> a2[i];
    
    sort(a1, a1+m);
    
    for(int i=0; i<m; i++)
    {
        bool yes = binary_search(a1, a2[i], n-1);
        if(yes)
            count=1;
    }
    if(count)
        cout << count << '\n';
    else
        cout << count << '\n';
    return 0;
}