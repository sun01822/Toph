#include<bits/stdc++.h>
using namespace std;

#define ll long long
int A[10] = {2, 4, 5, 6, 9};
int Size = 5;
void insert();
void delete_item();
void travers();
void search();

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    
    int n;
    while(n!=5)
    {
        printf("Select an option :\n");
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Travers\n");
        printf("4.Search\n");
        printf("5.Exit\n");
        cin >> n;
        switch (n)
        {
        case 1:
            insert();
            break;
        case 2:
            delete_item();
            break;
        case 3:
            travers();
            break;
        case 4:
            search();
            break;
        }
    }
    printf("Successfully Exit\n");
    return 0;
}

void insert()
{
    Size++;
    int pos, val;
    printf("Enter insert position :\n");
    cin >> pos;
    printf("Enter insert value :\n");
    cin >> val;
    for(int i=Size; i>=pos-1; i--)
    {
        A[i+1] = A[i];
    }
    A[pos-1] = val;
}

void delete_item()
{
    int pos;
    printf("Enter delete position :\n");
    cin >> pos;
    for(int i=pos-1; i<Size; i++)
        A[i] = A[i+1];
    Size--;
}

void search()
{   
    int val;
    printf("Enter Searching Value :\n");
    cin >> val;
    for(int i=0; i<Size; i++)
    {
        if(A[i] == val)
            printf("Found at position %d\n", i+1);
    }
}

void travers()
{
    printf("Travers is : ");
    for(int i=0; i<Size; i++)
    {
        if(i==0)
            printf("%d", A[i]);
        else
            printf("   %d", A[i]);    
    }
    printf("\n");
}