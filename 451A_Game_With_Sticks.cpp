#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n , m ;
    cin >> n >> m ;

    int intersect_point = n*m ;
    int count = 0 ;

    while (intersect_point!= 0)
    {
        n = n - 1 ;
        m = m - 1 ;
        count = count + 1;
        intersect_point = n*m ;
    }

    if((count%2) == 0)
    {
        cout << "Malvika" << endl ;
    }

    else
    {
        cout << "Akshat" << endl ;
    }

}