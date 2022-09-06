#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Y;

    cin >> Y;

    
    if(Y % 4 == 0)
    {
        if(Y % 100 == 0)
        {
            if(Y % 400 == 0)
            {
                cout << "Yes" << endl;
            }

            else
                cout << "No" << endl;
        }

        else
            cout << "Yes" << endl;
    }

    else
        cout << "No" << endl;

    return 0;
}