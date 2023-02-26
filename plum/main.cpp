#include <iostream>

using namespace std;

int countoccurrences(long long int n, int d)
{
    int count = 0;

    while (n > 0) {

        count = (n % 10 == d)
                    ? count + 1
                    : count;
        n = n / 10;
    }

    return count;
}

int main()
{
    int a, b;
    cin >> a >> b;
    for(int i=a; i<=b; i++){
        int d=7;
        if(i%7==0){
            cout << "plum" << endl;
        }else if(countoccurrences(i, d) > 0){
            cout << "plum" << endl;
        }else{
            cout << i << endl;
        }
    }
    return 0;
}
