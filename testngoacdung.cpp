#include<bits/stdc++.h>
using namespace std;

void sol()
{
    string s; cin >>s;
    int i;
    stack<char> a;
    for (i=1 ; i<=s.size() ; i++)
    {
        if ( s[i] == '{') a.push(s[i]);
        else if ( s[i] == '}')
        {
            if ( a.top() == 0)
            {
                cout <<"Sai";
                return;
            }
            else if(a.top() == ']' || a.top() == ')' || a.top() == '}' || a.top() == '{') a.pop();
            else if ( a.top() == '(' || a.top() == '[')
            {
                cout << "Sai";
                return;
            }
        }
        else if (s[i] == '[')
        {
            if ( a.size() == 0)
            {
                cout << "Sai";
                return;
            }
            else if (a.top() == ']' || a.top() == '('  ) a.pop();
            else if (a.top() == '{' || a.top() == '}' || a.top() == '(') 
            {
                cout << "Sai";
                return;
            }
        }
        else if (s[i] == '(') a.push(s[i]);
        else if (s[i] == ')')
        {
            if (a.size() == 0)
            {
                cout << "Sai";
                return;
            }
            else if (a.top() == '(' || a.top() == ')') a.pop();
            else 
            {
                cout << "Sai";
                return;
            }
        }
    }
    if (!a.empty())
    {
        cout << "Sai";
        return;
    }
    cout << "Dung";
}



void kiemtra(int o[],int n)
{
    stack<int> a;
    for(int i=0 ; i < n ; i++) a.push(o[i]);
    int b[n];
    b[n] = -1;
    while (!a.empty())
    {
        int tmp = a.top();
        while(tmp )
        {
            a.pop();
            int b = a.top();

        }
    }
}

int main()
{
    int i,n; cin >> n;
    int a[n];
    for(auto &x : a) cin >> x;
    kiemtra(a,n);
}