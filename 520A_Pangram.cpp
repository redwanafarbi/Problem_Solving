#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n ;
    cin >> n ;

    char word[n] ;
    int count = 0 ;
    
    for (int i = 0 ; i<n ; i++)
    {
        cin >> word[i] ;
    }

    char small[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char capital[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'} ;

    if(n < 26)
    {
        cout << "NO" << endl ;
        return 0 ;
    }
    else
    {
        for(int i = 0 ; i<n ; i++)
        {
            for(int j = 0 ; j<26 ; j++)
            {
                if(word[i] == small[j] || word[i] == capital[j])
                {
                    small[j] = '0' ;
                    capital[j] = '0';
                    count = count + 1 ;
                }
            }
        }
        
        if(count == 26)
        {
            cout << "YES" << endl ;
        }

        else
        {
            cout << "NO" << endl ;
        }
    }

}