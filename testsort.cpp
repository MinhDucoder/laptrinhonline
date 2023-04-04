#include<bits/stdc++.h>
using namespace std;

int dautien(int a[],int n,int x)
{
    int right = n-1 , left = 0 , res = -1;
    while ( left <= right )
    {
        int m = (right + left)/2;
        if ( a[m] == x)
        {
            right = m-1;
            res = m+1;
        }
        else if ( a[m] > x) right = m-1;
        else left = m+1;
    }
    return res; 
}

int cuoicung(int a[],int n,int x)
{
    int right = n-1 , left = 0 , res = -1;
    while ( left <= right )
    {
        int m = (right + left)/2;
        if ( a[m] == x)
        {
            left = m+1;
            res = m+1;
        }
        else if ( a[m] > x) right = m-1;
        else left = m+1;
    }
    return res;
}

void partition(int a[],int n)
{
    int left = 0 , right = n-1 , pivot = a[right];
    int j = -1;
    for ( left = 0 ; left < n ; left ++)
    {
        if ( pivot < a[left]) 
        {
            j++;
            swap (a[j] , a[left]);
        }
    }
    j++;
    swap (a[j] , pivot);
    for(int x : a) cout << x << " " ; ;

}

int main()
{
    int m ; cin >> m;
    while ( m-- )
    {
    int i , n , b ; cin >> n >> b;
    int a[n];
    for ( int &x : a) cin >> x;
    cout << dautien(a,n,b) << endl;
    cout << cuoicung(a,n,b) <<endl;
    }
    int n ; cin >> n ;
    int a[n] ;
    for (int &x : a) cin >> x;
    partition(a , n);
}