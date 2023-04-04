#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int i,nums,target;
    cout<<"nums = ";cin>>nums;
    cout<<", target = ";cin>>target;
    cout<<endl;
    for(i=0;i<nums;i++) 
    {
        int x;cin>>x;
        v.push_back(x);
    }
    int a,b;
    for(i=0;i<nums;i++)
    {
        for(int j=i;j<nums;j++)
        {
            if(v[i]+v[j]==target) 
            {
                a=i;
                b=j;
            }
        }
    }
    cout<<"["<<a<<","<<b<<"]";
}