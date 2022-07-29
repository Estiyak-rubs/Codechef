#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int m=6;

            if(n%6==0)
            {
                n=n/6;
                n=n*x;
                cout<<n<<endl;
            }
            else
            {
                 n= n/6;
                n=(n+1)*x;
                cout<<n<<endl;
            }


    }
    return 0;
}

