#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        if(n %4 !=0) cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            int j,p,count=0;
            p=2;
            for(j=0; j<n/2; j++)
            {
                cout << p;
                count+=p;
                p+=2;
                cout << " ";
            }
            p=1;
            for(j=n/2; j<n-1; j++)
            {
                cout << p;
                count-=p;
                p+=2;
                cout << " ";
            }
            cout << count << endl;
        }
    }
}
