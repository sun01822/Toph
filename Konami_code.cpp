#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int count=0;
    string main_s = "UUDDLRLRBA", s;
    getline(cin>>ws, s);
    if(s == main_s)
        cout << '1' << '\n';
    else
    {
        int l1 = s.length();
        int l2 = main_s.length();
        for(int i=0; i<l1-l2+1; i++)
        {
            string new_s;
            new_s = s.substr(i, l2);
            if(new_s == main_s)
                count++;
        }

        cout << count << '\n';
    }
    return 0;
}