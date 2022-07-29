#include<iostream>
using namespace std;
int main()
{
    int test,x,y;
    cin>>test;
    while(test--)
    {
        cin>>x>>y;  //x given time y finisher time
        int e;

        e=((x*107)/100);
        if(e>=y)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    } return 0;
}
