#include<stdio.h>

int countDigit(n)
{
    int count = 0;
    while (n != 0) {
        n /= 10;
        ++count;
    }
    return count;
}

int main()
{
    int t, n;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        if(n == 1) printf("1\n");
        else
        {
            int mod;
            mod = n%10;
            int p=(mod-1)*10;
            int digit = countDigit(n);

            if (digit==1){
                printf("%d\n",p+1);
            }
            else if(digit==2){
                printf("%d\n",p+3);
            }
            else if(digit==3){
                printf("%d\n",p+6);
            }
            else {
                printf("%d\n",p+10);
            }
        }
    }

    return 0;
}
