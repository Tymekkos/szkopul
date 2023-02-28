#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double r;
    cin >> r;
    cout << setprecision( 3 ) << fixed << M_PI*pow(r, 2) << endl << 2*M_PI*r ;
    return 0;
}
