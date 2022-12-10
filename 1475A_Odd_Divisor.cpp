#include<bits/stdc++.h>
using namespace std ;

int main()
{
    long long int n ;
    long long int t ;

    cin >> n ;
    long long int arr[n];

    for(long long int i = 0 ; i < n ; i++)
    {
        cin >> t ;
        arr[i] = t ;
    }

    for(long long int i = 0 ; i < n ; i++)
    {
        if ((arr[i] & (arr[i]-1)) == 0)
        {
            cout << "NO" << endl ;
        }
        else
        {
            cout << "YES" << endl ;
        }
    }
}