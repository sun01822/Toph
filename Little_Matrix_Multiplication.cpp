#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100][100], b[100][100], c[100][100];

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin >> a[i][j];
        }
    }


    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin >> b[i][j];
        }
    }


    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            c[i][j] = 0;
            for(int k=0; k<2; k++)
            {
                c[i][j]+= a[i][k] * b[k][j];
            }
        }
    }


    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
