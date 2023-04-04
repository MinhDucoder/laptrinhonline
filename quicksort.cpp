#include<bits/stdc++.h>
using namespace std;

void partition(int a[], int l, int r)
{
    int pivot = a[r] , i = l-1 , j;
    for (int j = l ; j < r ; j++)
    {
        if (a[j] < pivot ) 
        {
            ++i;
            swap (a[j] , a[i]);
        }
    }
    i++;
    swap( a[i],a[r]);
    for (i = 0 , j=r ; i <= r ; i++ , j--)
    {
        if ( i == j) cout <<"[" << a[j] << "]" <<" ";
        else cout << a[j] << " ";
    }
}

int main()
{
    int i ,n ; cin  >> n;
    int a[n];
    for (int &x : a) cin >> x;
    partition(a , 0 , n);

}