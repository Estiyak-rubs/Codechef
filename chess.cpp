
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,a,b,c;

        cin>>x>>y;

    a=y-x;
    b= (int)a%8;
    c=(int)a/8;
        if(b!=0)
        {
            cout<<c+1<<endl;
        }
        else
            {
            cout<<c<<endl;

    }

    }
    return 0;
}
