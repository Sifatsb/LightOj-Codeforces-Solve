#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int check(int n, int a)
{
    int k,p=-1;
    for(k=a; k<sqrt(n); k++)
    {
        if(n%k==0)
        {
            p=k;
            break;
        }
    }
    return p;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i;
        cin >> n;
        int flag=0,a=0,b=0,c=0;
        for(i=2; i<sqrt(n); i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0) cout << "NO" << endl;
        else
        {
            int k=check(n,2);
            if(k>=2)
            {
                a=k;
                n=n/a;
            }
            if(a!=0)
            {
                int k=check(n,a+1);
                if(k>=a)
                {
                    b=k;
                    c=n/b;
                }
            }
            if(a>=2 && b>a && c>b)
            {
                cout << "YES" << endl;
                cout << a << " " << b << " " << c << endl;
            }
            else cout << "NO" << endl;
        }
    }
    return 0;
}
