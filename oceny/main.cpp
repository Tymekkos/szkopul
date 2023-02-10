#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int j=0;
    int d=0;
    int t=0;
    int c=0;
    int p=0;
    int s=0;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(a==1){
            j++;
        }else if(a==1){
            j++;
        } else if(a==2){
            d++;
        }else if(a==3){
            t++;
        }else if(a==4){
            c++;
        }else if(a==5){
            p++;
        }else if(a==6){
            s++;
        }
    }
    cout << j << " " << d << " " << t << " " << c << " " << p << " " << s;
}
