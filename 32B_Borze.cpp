#include<bits/stdc++.h>
using namespace std ;

int main()
{
   // cout << "Borze code = " ;
    string borze_code ;
    cin >> borze_code ;
   // cout << endl ;
    
    int length = borze_code.length() ;
    int i = 0 ;

   // cout << "Decoded borze code = " ;
    while (length != 0)
    {
        if(borze_code[i] == '.') 
        {
            cout << "0" ;

            i = i+1 ;
            length = length - 1 ;
        }
        else
        {
            if(borze_code[i] == '-')
            {
                if(borze_code[i+1] == '.')
                {
                    cout << "1" ;
                }
                else if (borze_code[i+1] == '-')
                {
                    cout << "2" ;
                }
            }
            i = i + 2 ;
            length = length - 2 ;
        }
    }
}
