#include<bits/stdc++.h>
using namespace std;

int main()
{
   int N, CPUL, MEML;

   bool wa=0, mle=0, cle=0;

   int Di, CPUi, MEMi;

   bool flag = 1;

   cin >> N >> CPUL >> MEML;

   for(int i=0; i<N; i++)
   {
       cin >> Di >> CPUi >> MEMi;
       if(CPUi > CPUL && flag)
       {
           cle = 1;
           flag = 0;
       }

       else if(MEMi > MEML && flag)
       {
           mle = 1;
           flag = 0;
       }

       else if(Di > 0 && flag)
       {
           wa = 1;
           flag = 0;
       }
   }

   if(cle)
    cout << "CLE" << endl;
   else if(mle)
    cout << "MLE" << endl;
   else if(wa)
    cout << "WA" << endl;
   else 
    cout << "AC" << endl;
        

    return 0;
}