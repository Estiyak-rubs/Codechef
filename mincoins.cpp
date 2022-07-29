#include<iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;

        cin>>c;
        b=c%10;
        a=b%5;
        if(b==0)
        {
            cout<<c/10<<endl;
        }
        else if (a==0)
        {
            cout<<(c/10)+(b/5)<<endl;
        }
        else
            cout<<-1<<endl;

    }
return 0;
}
