#include<bits/stdc++.h>
using namespace std ;

int main()
{
    long long int s , n ;
   // cout << "Strength of Kirito = " ;
    cin >> s ;
    cout << endl ;

   // cout << "Number of levels = " ;
    cin >> n ;
    cout << endl ;

    long long int dragon_power[100001] ;
    long long int bonus[100001] ;
    long long int Min_index ;
    long long int a ;

    for(long long int i = 0 ; i<n ; i++)
    {
        int x , y ;
        cin >> x >> y ;
        dragon_power[i] = x ;
        bonus[i] = y ;
    }

    for(long long int i = 0 ; i<n ; i++)
    {
        a = dragon_power[0];
        Min_index = 0 ;
        for(long long int j = 0 ; j < n ; j++)
        {
            if(dragon_power[j] <= a && dragon_power[j] >=0)
            {
                Min_index = j ;
                a = dragon_power[j] ;
            }
        }

        if(s <= dragon_power[Min_index])
        {
            cout << "NO" << endl ;
            return 0 ;
        }

        else if (s > dragon_power[Min_index])
        {
            s = s + bonus[Min_index] ; 
            dragon_power[Min_index] = 1000000 ;
        }
    }

    cout << "YES" << endl ;

}