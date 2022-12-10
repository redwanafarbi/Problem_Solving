#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n ;
    cin >> n ;

    int count = 0 ;
    int arr[n] ;

    long long int a ;

    for(int i = 0 ; i<n ; i++)
    {
        cin >> a ;
        arr[i] = a ;
    }

    int p = sizeof(arr)/sizeof(arr[0]);
    sort(arr , arr + p) ;

    for(int i = 0 ; i< n-1 ; i++)
    {
        int temp = arr[n-1] ;
        count = count + (temp - arr[i]) ;
    }

    cout << count << endl ;
    return 0 ;
}