#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<int> arr;
    arr.resize(n);
    int max = INT_MIN;
    map<int, int>hm;
    for(int j=0; j<n; j++)
    {

        int tem;
        hm[tem]++;
    }
    int ans=1;
    int totalAssigned = 0;
    for (auto e:hm)
    {
        int noofreq = e.second;
        int noofboxes = ans*e.first - totalAssigned;
        if(noofreq> noofboxes)
        {
            ans+= ceil(((noofreq-noofboxes)/(float)e.first));
        }
        totalAssigned += e.second;
    }
     cout<<ans<<endl;
}
return 0;
}
