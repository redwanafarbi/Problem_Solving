#include<bits/stdc++.h>
using namespace std ;

int main ()
{
    string word ;
    cin >> word ;

    int length = word.length() ;
    int j ;
    
    string HELLO = "hello" ;

    if(length == 5)
    {
        for(int i = 0 ; i < length ; i++)
        {
            if(word[i] != HELLO[i])
            {
                cout << "NO" << endl ;
                return 0 ;
            }
        }
        
        cout << "YES" << endl ;
        return 0 ;
    }

    else 
    {
        j = 0 ;
        for(int i = 0 ; i < length ; i++)
        {
            if(word[i] == HELLO[j]) 
            {
                j = j + 1 ;
            }
        }
    }

    if(j == 5)
    {
        cout << "YES" << endl ;
    }

    else
    {
        cout << "NO" << endl ;
    }
}