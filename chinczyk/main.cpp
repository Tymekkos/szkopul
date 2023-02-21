#include <iostream>

using namespace std;

int main()
{
    int n;
    int suma=0;
    cin >> n;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(a==6){
            suma++;
        }
    }
    cout << suma;
    return 0;
}
