#include <stdio.h>
#include <string.h>
long long p[1000005];

long long a, b, c, d, e, f;
long long fn(long long n )
{


    if(p[n]!=-1)
    {
        return p[n];
    }
    else
    {
        p[n] = ( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) );
        return p[n];
    }


}
int main()
{

    long long n, caseno = 0, cases;
    scanf("%lld", &cases);

    while( cases-- )
    {
        memset(p,-1,sizeof(p));
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        p[0]=a;
        p[1]=b;
        p[2]=c;
        p[3]=d;
        p[4]=e;
        p[5]=f;



        printf("Case %lld: %lld\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
