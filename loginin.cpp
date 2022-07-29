#include<iostream>
using namespace std;
int main()
{
    int i,j,t;
    cin>>t;
    while(t--)
    {
    cout<<"Enter Your Password"<<endl;
    cin>>i>>j;

    if(i==j)
    {
        cout<<"Your Password is currect"<<endl;
    }
    else
    {
        cout<<"Your Password is Wrong"<<endl;
    }
    }
}
