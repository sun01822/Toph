#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int A[10] = {2,5,3,6,2,7,9,3,2,1};
    int Size = sizeof(A) / sizeof(int);
    sort(A, A+Size);
    printf("Sorted array is:\n");
    for(int i=0; i<Size; i++)
    {
        printf("%d\n", A[i]);
    }
    return 0;
}