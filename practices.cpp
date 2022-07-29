#include<iostream>
using namespace std;
int main()
{
    int p1,p2,p3,p4,q,r1,r2,r3,r4;
    cin>>p1>>p2>>p3>>p4;

    {
    if(p1>=10)
    {
            r1=1; }
            else{r1=0;}

 if(p2>=10)
{
     r2=1;
}
else{r2=0;}

if(p3>=10)
{
    r3=1;
}
else{r3=0;}
if(p4>=10)
{
    r4=1;
}
else{r4=0;}

        cout<<r1+r2+r3+r4<<endl;
    }

return 0;
}
