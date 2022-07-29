#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
        while(t--)
        {
            int  n, k,m;  // n=candi k=number of pocket m=hold
            cin>>n>>k>>m;
            k=k*m;
        int a=n/k;
            if(n%k==0)
            {
                cout<<a<<endl;
            }
            else
            {
                cout<<a+1<<endl;
            }
        }
        return 0;
}

