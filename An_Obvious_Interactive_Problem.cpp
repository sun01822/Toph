#include<bits/stdc++.h>
using namespace std;

int main()
{
    int low = 0, high = 1000000, mid;
    string s;

    while(low <= high)
    {
        mid = (low+high)/2;

        cout << mid << endl;
        cin >> s;

        if(s == "Bigger")
        {
            low = mid+1;
        }
        else if(s == "Smaller")
            high = mid-1;
        else
        {
            break;
        }
    }
    return 0;
}