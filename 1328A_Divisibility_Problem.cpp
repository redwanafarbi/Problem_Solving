#include<bits/stdc++.h>
using namespace std ;

int main()
{
    long long int t, a, b ;
    cin >> t ;

    for(long long int i = 0 ; i<t ; i++)
    {
        cin >> a >> b ;

        if((a % b) == 0)
        {
            cout << "0" << endl ;
        }

        else
        {
            cout << b - (a%b) << endl ;
        }
    }

}