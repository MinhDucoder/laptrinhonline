#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main()
{
    string n;
    cin>>n;
    for(int i=n.size() + 1;i>=0;i--)
    {
        n+=n[i];
    }
    cout<<n;
}