#include<iostream>
using namespace std;
int main()
{
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x%2==0 && y%2==0)
        {
            cout<<"0"<<endl;
        }
        else if(x%2!=0 && y%2!=0)
        {
            cout<<x+y-1<<endl;
        }
        else if(x>y)
        {
            cout<<y<<endl;
        }
        else
        {
            cout<<x<<endl;
        }
    }
    return 0;
}
