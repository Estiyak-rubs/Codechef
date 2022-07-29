#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int take=n/5;
        if (n%5==0)
        {
            take--;
        }
    int rest=k/5;
        if(k%5==0)
        {
           rest--;
        }
     cout<<take-rest<<endl;
    }
    return 0;
}
