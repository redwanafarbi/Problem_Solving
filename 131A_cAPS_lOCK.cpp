#include<bits/stdc++.h>
using namespace std ;

int main ()
{
    string a ;
    cin >> a ;
    
    int count = 0 ;
    int first_letter = 0 ;
    int length = a.length() ;

    for(int i = 0 ; i<length ; i++)
    {
        if(i == 0)
        {
            if(a[i] >= 'a' && a[i] <= 'z')
            {
                first_letter = first_letter + 1 ;
            }
            else 
            {
                count = count + 1 ;
            }
        }
        else
        {
            if(a[i] >= 'A' && a[i] <= 'Z')
            {
                count = count + 1 ;
            }
        }
    }

    // cout << "count = " << count << endl ;
    // cout << "First_letter = " << first_letter << endl ;

    if(first_letter == 1 && count == length-1)
    {
        for(int i = 0 ; i<length ; i++)
        {
            if(i == 0)
            {
                if(a[i] >= 'a' || a[i] <= 'z')
                {
                    a[i] = a[i] + 'A' - 'a' ;
                }
            }
            else 
            {
                if(a[i] >= 'A' || a[i] <= 'Z')
                {
                    a[i] = a[i] + 'a' - 'A' ;
                }
            }
        }
        
        cout << a << endl ;
    }

    else if (count == length)
    {
        for(int i = 0 ; i<length ; i++)
        {
            a[i] = a[i] + 'a' - 'A' ;
        }
        cout << a << endl ;
    }

    else 
    {
        cout << a << endl ;
    }
}