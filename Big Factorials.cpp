#include<bits/stdc++.h>
using namespace std;

long long factorial(int n)
{
    if(n==0)
    {
        return 1;
    }

    else
    {
        return n * factorial(n-1);
    }
}

int main()
{
    int N, flag=0;
    cin >> N;

    if(N >= 20)
    {
        cout << "0" << endl;
    }

    else
    {
        long long n = factorial(N);
    
        n%=10000;

        cout << n << endl;

    }
   
    return 0;
}