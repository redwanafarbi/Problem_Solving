#include<bits/stdc++.h>
using namespace std ;

int First_home(int a, int b, int c);
int Second_home(int a, int b, int c);
int Third_home(int a, int b, int c);
void check(int a , int b , int c);

int main ()
{
    int a , b , c ;
    cin >> a >> b >> c ;

    int a_distance = First_home(a,b,c);
    //cout << a_distance << endl ;

    int b_distance = Second_home(a,b,c);
    //cout << b_distance << endl ;

    int c_distance = Third_home(a,b,c);
    //cout << c_distance << endl ;

    check (a_distance , b_distance , c_distance);

}

void check (int a , int b , int c)
{
    if(a<b && a<c)
    {
        cout << a << endl ;
    }

    else if (b<a && b<c)
    {
        cout << b << endl ;
    }

    else 
    {
        cout << c << endl ;
    }
}

int First_home(int a, int b, int c)
{
    int min_distance1 = 0 ;
    if (a>b) 
    {
        min_distance1 = min_distance1 + ( a - b);
    }
    else if (a<b)
    {
        min_distance1 = min_distance1 + ( b - a);
    }

    if (a>c)
    {
        min_distance1 = min_distance1 + ( a - c);
    }
    else if (a<c)
    {
        min_distance1 = min_distance1 + ( c - a);
    }
    return min_distance1 ;
}

int Second_home(int a, int b, int c)
{
    int min_distance2 = 0 ;
    if (a>b) 
    {
        min_distance2 = min_distance2 + ( a - b);
    }
    else if (a<b)
    {
        min_distance2 = min_distance2 + ( b - a);
    }
    
    if (b>c)
    {
        min_distance2 = min_distance2 + ( b - c);
    }
    else if (b<c)
    {
        min_distance2 = min_distance2 + ( c - b);
    }
    return min_distance2 ;
}

int Third_home(int a, int b, int c)
{
    int min_distance3 = 0 ;
    if (c>b) 
    {
        min_distance3 = min_distance3 + (c-b);
    }
    else if (c<b)
    {
        min_distance3 = min_distance3 + (b-c);
    }
    
    if (c>a)
    {
        min_distance3 = min_distance3 + (c-a);
    }
    else if (c<a)
    {
        min_distance3 = min_distance3 + (a-c);
    }
    return min_distance3 ;
}