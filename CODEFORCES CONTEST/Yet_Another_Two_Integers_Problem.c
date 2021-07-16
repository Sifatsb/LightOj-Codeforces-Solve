#include<stdio.h>
#include<math.h>
int main()
{
    long long int a, b, t;
    scanf("%lld",&t);

    while(t--)
    {
        long long int count = 0;
        scanf("%lld %lld",&a, &b);

        if(a == b) printf("0\n");

        else if(a > b)
        {
            a = a-b;
            count = a / 10;
            if(a % 10 != 0) printf("%lld\n",count+1);
            else printf("%lld\n",count);
        }
        else
        {
            b = b-a;
            count = b / 10;
            if(b % 10 != 0) printf("%lld\n",count+1);
            else printf("%lld\n",count);
        }
    }

    return 0;
}
