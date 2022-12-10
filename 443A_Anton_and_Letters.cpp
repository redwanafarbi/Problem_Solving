#include<bits/stdc++.h>
using namespace std ;

int main()
{
    char set_of_letters[1001] ;
    char a ;

    int count = 0 ;
    int length = 0;

    for(int i = 0 ; i<1001 ; i++)
    {
        cin >> a ;

        set_of_letters[i] = a ;
        length = length + 1 ;

        if(set_of_letters[i] == '}')
        {
            break ;
        }
    }

    for(int i = 0 ; i<length ; i++)
    {
        if(set_of_letters[i] >= 'a' && set_of_letters[i] <= 'z')
        {
            count = count + 1 ;
            char p = set_of_letters[i] ;

            for(int j = i ; j<length ; j++)
            {
                if(p == set_of_letters[j])
                {
                    set_of_letters[j] = '0' ;
                }
            }
        }
    }

    cout << count << endl ;
    return 0 ;
}