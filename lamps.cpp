#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
        while(t--)
        {
            int  n, k,x,y,a;  // n=lamp k=number of pocket x= red price y= blue price
            cin>>n>>k>>x>>y;


            if(x>y)
            {
                int b=k*x;
                n=(n-k)*y;
                a=n+b;
                cout<<a<<endl;
            }
            else
            {
                 a=x*n;
                cout<<a<<endl;

            }
        }
        return 0;
}


