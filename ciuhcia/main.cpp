#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int stacja=0;
    for(int i=0; i<n; i+=20){
        stacja=i;
    }
    if(n-stacja < (stacja+20)-n){
        cout << n-stacja;
    }else{
        cout << (stacja+20)-n;
    }
    return 0;
}
