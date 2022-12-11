#include<bits/stdc++.h>
using namespace std ;

int main ()
{
    int test , alice , bob ;
    int a , b ;
    int j = 0;

    int alice_maximum[51];
    int bob_maximum[51];

    cin >> test ;

    for(int i = 0 ; i<test ; i++)
    {
        cin >> alice ;
        int alice_cards[alice] ;

        for(int p = 0 ; p<alice ; p++)
        {
            cin >> a;
            alice_cards[p] = a ;
        }

        cin >> bob ;
        int bob_cards[bob];
        
        for(int q = 0 ; q<bob ; q++)
        {
            cin >> b;
            bob_cards[q] = b ;
        }

        //Sort alice cards
        sort(alice_cards, alice_cards + alice) ;
        int alice_max = alice_cards[alice-1];
        alice_maximum[j] = alice_max ;

        //Sort bobs cards
        sort(bob_cards, bob_cards + bob) ;
        int bob_max = bob_cards[bob-1];
        bob_maximum[j] = bob_max ;

        j = j + 1 ;
    }

    for(int i = 0 ; i<j ;i++)
    {
        if(alice_maximum[i] == bob_maximum[i])
        {
            cout << "Alice" << endl;
            cout << "Bob" << endl ;
        }

        else if(alice_maximum[i] > bob_maximum[i])
        {
            cout << "Alice" << endl;
            cout << "Alice" << endl;
        }

        else
        {
            cout << "Bob" << endl ;
            cout << "Bob" << endl ;
        }
    }
    
}