#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n;
    if(n == 1)
    {
        cin >> b;
        if(b == 15) cout << "DOWN";
        else if(b == 0) cout << "UP";
        else cout << "UNKNOWN";
    }
    else{
        for(int i = 1; i <= n - 2; i++)
        cin >> a;
        cin >> a >> b;
        if(b == 15) cout << "DOWN";
        else if(b == 0) cout << "UP";
        else if(a > b)
            cout << "DOWN";
        else
            cout << "UP";
    }
    cout << endl;
}
