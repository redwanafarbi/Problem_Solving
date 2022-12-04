#include<bits/stdc++.h>
using namespace std ;

int main()
{
  //  cout << "Total number of levels = " ;
    int n ;
    cin >> n ;
    
    int arr[210] ;
    int count = 0 ;
    
   // cout << "Total number of levels passed by X = " ;
    int p ;
    cin >> p ;

  //  cout << "Number of levels passed by X = " ;
    for(int i = 0 ; i < p ; i++ )
    {
        int a ;
        cin >> a ;
        arr[i] = a ;
    }

   // cout << "Total number of levels passed by Y = " ;
    int q ;
    cin >> q ;

   // cout << "Number of levels passed by Y = " ;
    for(int i = p ; i < p+q ; i++ )
    {
        int a ;
        cin >> a ;
        arr[i] = a ;
    }

    for(int i = 1 ; i <= n ; i++ )
    {
        for(int j = 0 ; j < p+q ; j++ )
        {
            if(arr[j] == i)
            {
                count = count + 1 ;
                break ;
            }
        }
    }

    if (count == n )
    {
        cout << "I become the guy." << endl ;
    }
    else 
    {
        cout << "Oh, my keyboard!" << endl ;
    }

}

