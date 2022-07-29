#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
        {
         int n,d,e;
         cin>>n;  //number of problem
         d=0;

         for(int i=0; i<n; i++)
         {
             cin>>e;
             if(e>=1000)
                 d++;
         }
          cout<<d<<endl;
        }
    return 0;
}
