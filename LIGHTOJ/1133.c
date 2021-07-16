#include<stdio.h>
int main()
{
    int tc, i, j, ar[1000], ar1[1000], m, n, ad, mul, div, y, z, k, temp, pr, l;
    char c[2];
    scanf("%d",&tc);

    for(i = 1; i <= tc; i++)
    {
        scanf("%d %d",&n, &m);
        ar[100],ar1[100];
        for(j = 0; j < n; j++)
        {
            scanf("%d",&ar[j]);
        }
        for(k = 0; k < m; k++)
        {
            scanf("%s",&c);
            if(c[0] == 'S')
            {
                scanf("%d",&ad);
                for(j = 0; j < n; j++)
                {
                    ar[j]= ar[j] + ad;
                }
            }

            else if(c[0] == 'M')
            {
                scanf("%d",&mul);
                for(j = 0; j < n; j++)
                {
                    ar[j]= ar[j] * mul;
                }
            }

            else  if(c[0] == 'D')
            {
                scanf("%d",&div);
                for(j = 0; j < n; j++)
                {
                    ar[j]= ar[j] / div;
                }
            }

            else if(c[0] == 'R')
            {
                for(j = n-1, l = 0; j >= 0; j--, l++)
                {
                    ar1[l] = ar[j];
                }
                for(j=0; j < n; j++)
                {
                    ar[j] = ar1[j];
                }
            }

            else  if(c[0] == 'P')
            {
                scanf("%d %d",&y, &z);
                temp = ar[y];
                ar[y]= ar[z];
                ar[z]=temp;
            }
        }

        printf("Case %d:\n",i);
        for(pr = 0; pr < n; pr++)
        {
            printf("%d",ar[pr]);
            if(pr == n-1) printf("\n");
            else printf(" ");
        }
    }

    return 0;
}
