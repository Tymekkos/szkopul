#include <iostream>

using namespace std;

int main()
{
    int tab[3];
    for(int i=0; i<3; i++){
        int a;
        cin >> a;
        tab[i] = a;
    }
    for(int i=0; i<3; i++){
        cout << tab[i] << " ";
    }
    cout << endl;
    for(int i=2; i>=0; i--){
        cout << tab[i] << " ";
    }
    return 0;
}
