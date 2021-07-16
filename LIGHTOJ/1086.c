#include<stdio.h>
#include<math.h>

bool prime( float num )
{
    for ( int i = 2 ; i <= sqrt( num ) ; i++ )
        if ( !( (int) num % i ) )    return false;
    return true;
}

int main()

{
    int k, n, *list, max = 0;
    cin >> k;
    list = new int [k];
    for ( int i = 0 ; i < k ; i++ )    {
                        cin >> list[i];
                        if ( list[i] > max )    max = list[i];
                    }
    int *primes = new int [max];
    for ( int i = 2, c = 0 ; c < max ; i++ )
        if ( prime( i ) )    {
                        primes[c] = i;
                        c++;
                    }
    for ( int i = 0 ; i < k ; i++ )
        cout << primes[list[i] - 1] << endl;
    return EXIT_SUCCESS;
}
