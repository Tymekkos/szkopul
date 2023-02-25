#include <iostream>
#include <string>

using namespace std;


int licz(int i){
    int len = 1;

    if (i > 0) {
        for (len = 0; i > 0; len++) {
            i = i / 10;
        }
    }
    return len;
}

int main()
{
    int n;
    cin >> n;
    int najw=0;
    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        if(a.length()>najw){
            najw=a.length();
        }
    }
    cout << najw;
    return 0;
}
