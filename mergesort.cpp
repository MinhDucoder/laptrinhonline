#include<bits/stdc++.h>
 using namespace std;

 void merge_sort (int a[] , int  b[] ,int  n ,int m)
{
    int i , j ;
    while ( i < n && j < m)
    {
        if ( a[i] < b[j])
        {
            cout << " b" << i+1;
            i++;
        }
        else 
        {
            cout << " c" << j+1;
            j++;
        }
    }
    while ( i < n) 
    {
         cout << " b" << i+1;
            i++;
    }
    while ( j < m)
    {
        cout << " c" << j+1;
            j++;
    }  
}
 int main()
 {
    int i , j , n , m; cin >> n >> m;
    int a[n] , b[m];
    for(int &x : a) cin >> x; for ( int &x : b) cin >> x;
    int dem = 0 ;
    sort( a ,a + n);
    sort ( b , b + m);
    while ( i < n && j < m)
    {
        if ( a[i] > b[j])
        {
            dem++;
            i++;
            j++;
        }
        else 
        {
            i++;
        }
    }
    cout << dem;
 }