#include<iostream>
using namespace std;
int main()
{
    int test,a,b;
    cin>>test;
    while(test--)
        {
            cin>>a>>b;
            if(a>0 && b>0 && a==b )
            {
                cout<<"yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }

        return 0;
}
