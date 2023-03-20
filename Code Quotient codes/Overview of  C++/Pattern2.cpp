#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int p=1;
   for (int i = 1; i <=n; i++)
   {
      for (int j = 1; j <=i; j++)
      {
         cout<<p<<"";
         if (j!=i)
         {
            cout<<" ";
         }
         p++;
      }
      cout<<endl;
   }
   return 0;
}