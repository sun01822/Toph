#include<bits/stdc++.h>
using namespace std;

int main()
{
    int X, Y, result=0;

    cin >> X >> Y;

    if(Y % X == 0)
    {
        cout << result << endl;
    }

    else
    {
        result = (((Y / X) + 1) * X) - Y;
        cout << result << endl;
    }

    return 0;
}
