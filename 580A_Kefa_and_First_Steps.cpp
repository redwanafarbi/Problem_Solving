#include<bits/stdc++.h>
using namespace std ;

int main()
{
    long long int n , m ;
    cin >> n ;

    long long int arr[n] ;
    int answer = 0 ;
    int count = 0 ;


    for(long long int i = 0 ; i < n ; i++ )
    {
        cin >> m ;
        arr[i] = m ;
    }

    for(long long int i = 0 ; i < n ; i++ )
    {
        long long int j ;
        count = 1 ;
        
        for( j = i ; j < n-1 ; j++)
        {
            if(arr[j+1] >= arr[j])
            {
                count = count + 1 ;
            }

            else
            {
                break ;
            }
        }
        
        if(count > answer)
        {
            answer = count ;
        }

        i = j  ;

    }

    cout << answer << endl ;
}