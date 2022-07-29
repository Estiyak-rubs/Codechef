#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>y>>x;

        if(y*100<x*10)  //x= Cloth y=Disposable
        {
            cout<<"Disposable"<<endl;
        }

    else
    {
        cout<<"Cloth"<<endl;
    }
    }
    return 0;
}
