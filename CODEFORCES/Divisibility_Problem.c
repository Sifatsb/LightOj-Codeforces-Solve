#include<stdio.h>
int main()
{
    int a, b, tc, i;
    scanf("%d",&tc);

    while(tc--)
    {
        scanf("%d %d",&a, &b);
        if(a % b == 0) printf("0\n");
        else
        {
            int rem = a/b;
            rem++;
            printf("%d\n",b*rem-a);
        }
    }

    return 0;
}
