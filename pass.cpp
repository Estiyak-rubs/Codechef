
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)

{int x,q,p;
cin>>q>>x>>p;
x=x*3-(q-x);
if(x>=p)
    {
        cout<<"PASS"<<endl;
    }
    else
    {
        cout<<"Fail"<<endl;
    }
}
return 0;
}

