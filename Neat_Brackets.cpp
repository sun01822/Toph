#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[100];
    int top=-1, flag=0;
    string s;
    cin >> s;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == '(')
        {
            top++;
            a[top] = '(';
        }

        else if(s[i] == ')')
        {
            if(a[top] == '(')
            {
                top--;
            }

            else
            {
                flag=1;
                break;
            }
        }
    }

    if(flag == 1)
    {
        cout << "No" << endl;
    }

    else
    {
        if(top == -1)
        {
            cout << "Yes" << endl;
        }

        else
            cout << "No" << endl;
    }
    return 0;
}