#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long A, B;

    int flag = 0, p, q;

    cin >> A >> B;

   while(A > 0 || B > 0)
   {
       p = A % 10;
       q = B % 10;

       if(p + q >= 10)
       {
           flag = 1;
           cout << "Yes" << endl;
           break;
       }
       A /= 10;
       B /= 10;
   } 

   if(flag == 0)
   {
       cout << "No" << endl;
   }

    return 0;
}