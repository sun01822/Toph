#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int p, x=0, y=0;
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    for(int i=0; i<s1.length(); i++)
    {
        if(isdigit(s1[i]))
        {
            p = s1[i] - 48;
            x+=p;
        }
    }    

    for(int i=0; i<s2.length(); i++)
    {
        if(isdigit(s2[i]))
        {
            p = s2[i] - '0';
            y+=p;
        }
    }

    int a = x + y;
    int b = x * y;
    int c = abs(x - y);

    int ma = max(a, max(b,c));
    int mi = min(a, min(b,c));

    if((a==ma||a==mi) && (b==ma||b==mi))
        printf("\"%d\"\n",c);
    else if((b==ma||b==mi) && (c==ma||c==mi))
        printf("\"%d\"\n",a);
    else    
        printf("\"%d\"\n",b);
     
    return 0;
}