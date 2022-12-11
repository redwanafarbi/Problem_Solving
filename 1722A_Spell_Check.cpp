#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ,n ;    
    string s ;
    cin >> t ;

    string name = "Timur" ;
    
    for(int k = 0 ; k<t ; k++)
    {
        cin >> n ;
        cin >> s ;

        int count = 0;

        if(n != 5)
        {
            cout << "NO" << endl ;
        }

        else 
        {
            for(int i = 0 ; i < 5 ; i++ )
            {
                int temp = name[i];

                for(int j = 0; j<n ; j++)
                {
                    if(temp == s[j])
                    {
                        count = count + 1;
                        s[j] = '0' ;
                        break ;
                    }
                }
            }

            if(count == 5)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl ;
            }
        }
    }
}