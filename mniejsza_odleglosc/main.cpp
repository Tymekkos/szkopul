#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if(abs(a) < abs(b)){
        cout << a;
    }else{
        cout << b;
    }
    return 0;
}
