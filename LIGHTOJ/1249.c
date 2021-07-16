/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[100],str2[100],str1[100];
    int l,w,h,x,test,i,temp2,temp,temp1,total;

    cin>>test;

    for(i=1; i<=test; i++)
    {
        cin>>x;

        int ma=0,mi=900000;

        while(x--)
        {
            scanf("%s",ch);

            cin>>l>>w>>h;

            total=l*w*h;

            if(total>ma)
            {
                ma=total;
                strcpy(str1,ch);
            }
            if(total<mi)
            {
                mi=total;
                strcpy(str2,ch);
            }

        }
        if(ma==mi)
        {
            printf("Case %d: no thief\n",i);
        }
        else
        {
            printf("Case %d: %s took chocolate from %s\n",i,str1,str2);
        }
    }
}
*/

#include <stdio.h>
#include <string.h>

int main ()
{
    int i, j, tc, a, b, c, n,l, total, max, min;
    char str[21], s1[21],s2[21];
    scanf (" %d", &tc);

    for (i = 1; i <= tc; i++)
    {
        scanf("%d",&n);
        scanf ("%s %d %d %d",str, &a, &b, &c);
        max = min = a * b * c;
        strcpy (s1,str);
        strcpy (s2, str);

        for (j = 1; j < n; j++)
        {
            scanf ("%s %d %d %d",str, &a, &b, &c);
            total = a * b * c;
            if (total > max)
            {
                strcpy (s1, str);
                max = total;
            }
            else if (total < min)
            {
                strcpy (s2, str);
                min = total;
            }
        }
        if (max == min) printf ("Case %d: no thief\n", i);
        else printf ("Case %d: %s took chocolate from %s\n", i, s1, s2);
    }
    return 0;
}
