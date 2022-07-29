
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,a,b,e,f,i,j;

        cin>>x>>y;

    b=(y)*4;
   a=(x+y)*2;

    i=1500-(a+b);
e= x*2;
f=(x+y)*4;

j= 1500-(e+f);
if(i>j){
    cout<<i<<endl;
}
else{
    cout<<j<<endl;
}

    }
    return 0;
}

