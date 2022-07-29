#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c;
        int arr[]={a,b,c};
        cin>>a>>b>>c;
        int max = arr[0];
        for (int i=0;i<3; i++)
        {
            if(arr[i]>max)

max= arr[i];        }
if(arr[0]== max)
{
cout<<"Alice"<<endl;
    }
    else if(arr[1]==max)
    {
        cout<<"Bob"<<endl;

    }
    else
    {

    }

    return 0;
}
