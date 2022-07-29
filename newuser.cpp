
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,a,b;

        cin>>x,y;

    a=y-x;
    b=a/8;
        if(b!=0)
        {
            cout<<b+1<<endl;
        }
        else
            {
            cout<<b<<endl;

    }

    }
    return 0;
}
