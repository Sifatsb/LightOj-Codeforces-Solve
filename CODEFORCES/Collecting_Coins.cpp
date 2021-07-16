#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b, c, n, k;
        cin >> a >> b >> c >> n;
        int s[3];
        s[0] = a;
        s[1] = b;
        s[2] = c;
        sort(s, s+3);
        a = s[0];
        b = s[1];
        c = s[2];
        n -= c-a;
        n -= c-b;
        if(n>=0 && n%3==0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
