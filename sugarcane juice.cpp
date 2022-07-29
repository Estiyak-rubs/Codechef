#include<iostream>
using namespace std;
int main()
{
    int n,t,a,b,c,d,f;
    cin>>t;
    a=100; b=70;  //b=20+20+30=70
    c=a-b;
    f=50;
    d=(c*f)/100;
    while(t--)
    {
 int e;

    cin>>n;
    e=d*n;
    cout<<e<<endl;

}
return 0;
}
