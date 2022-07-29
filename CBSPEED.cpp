#include<iostream>
using namespace std;
int main()
{
    int t,pa,pb,qa,qb;
    cin>>t;
    while(t--)
    {
        cin>>pa>>pb>>qa>>qb;
        if(pa==qa||pa==qb ||pb==qa ||pb==qb)
        {
            cout<<"TIE"<<endl;
        }
       else if(pa>pb)
        {
            if(pa>qa || pa>qb)
            {
                cout<<"P"<<endl;
            }
              else if(pa==qb || pa==qa)
            {
                cout<<"TIE"<<endl;
            }
            else
            {
                cout<<"Q"<<endl;
            }
        }
        else if (pb>pa)
        {
            if(pa>qa || pa>qb)
            {
                cout<<"P"<<endl;
            }
              else if(pb==qb || pb==qa)
            {
                cout<<"TIE"<<endl;
            }
            else
            {
                cout<<"Q"<<endl;
            }
        }
    else
    {
        cout<<"TIE"<<endl;
    }
    }
//cout<<P<<endl;

//else if (pa<qa || pb<qa ||)
    return 0;

}

