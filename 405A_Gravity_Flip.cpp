#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n ;
    cin >> n ;

    int arr[n] ;
    int m ;

    for(int i = 0 ; i < n ; i++)
    {
        cin >> m ;
        arr[i] = m ;
    }

    int p = sizeof(arr) / sizeof(arr[0]);
    sort(arr , arr + p);

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " " ;
    }

    cout << endl ;

}