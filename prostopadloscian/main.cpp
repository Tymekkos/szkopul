#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int pow= 2*a*b+2*b*c+2*c*a;
    int obj=a*b*c;
    cout << obj << endl << pow;
    return 0;
}
