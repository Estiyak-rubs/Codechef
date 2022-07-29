#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q1=0,q2=0;
        string s;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>s;
            if(s== "START38")
            {
                q1++;
            }
            else if (s=="LTIME108")
            {
                q2++;
            }
        }
        cout<<q1<<" "<<q2<<endl;
    }
    return 0;
}
