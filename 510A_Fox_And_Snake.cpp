#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int row , column ;
    cin >> row >> column ;

    char arr[row][column] ;

    for (int i = 0 ; i < row ; i=i+1)
    {
        for(int j = 0 ; j<column ; j++)
        {
           arr[i][j] = '.' ;
        }
    }

    for ( int i = 1 , c = 1 ; i < row ; i = i+2 , c++ )
    {
        if((c%2) != 0)
        {
            arr[i][column-1] = '#' ;           
        }
        else if ((c%2) == 0)
        {
            arr[i][0] = '#' ;
        }
    }

    for (int i = 0 ; i < row ; i=i+2)
    {
        for(int j = 0 ; j<column ; j++)
        {
            arr[i][j] = '#' ;
        }
    }
    
    cout << "Snake pattern " << endl ;
    for (int i = 0 ; i < row ; i=i+1)
    {
        for(int j = 0 ; j<column ; j++)
        {
           cout << arr[i][j] ;
        }
        cout << endl ;
    }
}