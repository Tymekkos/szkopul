#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int tab[n];
    for(int i=0; i<n; i++){
        int h;
        int x;
        int suma=0;
        cin >> h;
        cin >> x;
        for(int j=0; j<x; j++){
            int a;
            cin >> a;
            if(a==h){
                suma++;
            }
        }
        tab[i]=suma;
    }
    for(int i=0; i<n; i++){
        cout << tab[i] << endl;
    }
    return 0;
}
