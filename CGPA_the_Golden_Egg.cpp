#include <bits/stdc++.h>
using namespace std;

#define ll long long

int count, d;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int C;
        cin >> C;
        int count = 0;
        double m, n, grade, sum = 0, credit = 0;
        for (int i = 0; i < C; i++)
        {

            cin >> m >> n;
            if (m >= 80 && m <= 100)
            {
                grade = 4.00;
                sum += (grade * n);
                credit += n;
            }

            else if (m >= 75 && m < 80)
            {
                grade = 3.75;
                sum += (grade * n);
                credit += n;
            }

            else if (m >= 70 && m < 75)
            {
                grade = 3.50;
                sum += (grade * n);
                credit += n;
            }

            else if (m >= 65 && m < 70)
            {
                grade = 3.25;
                sum += (grade * n);
                credit += n;
            }

            else if (m >= 60 && m < 65)
            {
                grade = 3.00;
                sum += (grade * n);
                credit += n;
            }

            else if (m >= 55 && m < 60)
            {
                grade = 2.75;
                sum += (grade * n);
                credit += n;
            }

            else if (m >= 50 && m < 55)
            {
                grade = 2.50;
                sum += (grade * n);
                credit += n;
            }

            else if (m >= 45 && m < 50)
            {
                grade = 2.25;
                sum += (grade * n);
                credit += n;
            }

            else if (m >= 40 && m < 45)
            {
                grade = 2.00;
                sum += (grade * n);
                credit += n;
            }

            else if (m < 40)
            {
                grade = 0.00;
                sum += (grade * n);
                credit += n;
                count++;
            }
        }
        if(count > 0)
        {
            if(count==1)
                printf("Case %d: Sorry, you have failed in %d course!\n", ++d, count);
            else
                printf("Case %d: Sorry, you have failed in %d courses!\n", ++d, count);
        }
           
        else
        {
            double result = sum / credit;
            printf("Case %d: %.2lf\n", ++d, result);
        }
    }
    return 0;
}