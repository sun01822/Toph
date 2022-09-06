#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool unique[1001] = {0};
    int N[1000], M[1000], n, m;
    int result[1000], p=0;

    cin >> n >> m;

    for(int i=0; i<n; i++)
    {
        cin >> N[i];
        if(unique[N[i]] == 0)
        {
            unique[N[i]] = 1;
            result[p] = N[i];
            p++;
        }
    }

    for(int i=0; i<m; i++)
    {
        cin >> M[i];
        if(unique[M[i]] == 0)
        {
            unique[M[i]] = 1;
            result[p] = M[i];
            p++;
        }
    }


    sort(result, result + p);

    for(int i=0; i<p; i++)
    {
        cout << result[i];
        if(i<p-1)
        {
            cout << " ";
        }
    }

    cout << endl;
    return 0;
}