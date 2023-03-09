/*
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    string a;
    cin >> a;
    string b;
    cin >> b;
    int n = a.length();
    int m = a.length();

    char tab[n + 1];
    char tab2[m + 1];

    strcpy(tab, a.c_str());
    strcpy(tab2, b.c_str());

    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(tab[i] == tab2[j]){
                    tab[i]-=32;
            }
        }
        cout << tab[i];
    }
    return 0;
}
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;
const int MAXN = 1e6 + 7;
const int P = 199;
const int MOD = 1e9 + 7;
int pow_P[MAXN];
int H[MAXN];
int get_hash(int l, int r, int n) {
    ++l;
    ++r;
    int res = (H[r] - H[l - 1] + MOD) % MOD;
    return ((ll)res * pow_P[n - l + 1]) % MOD;
}
int main(){

    string text;
    cin >> text;
    string pattern;
    cin >> pattern;
    int n = text.size();
    int m = pattern.size();
    pow_P[0] = 1;
    for (int i = 1; i <= n; ++i)
        pow_P[i] = ((ll)pow_P[i - 1] * P) % MOD;
    int patternH = 0;
    for (int i = 0; i < m; ++i)
        patternH = ((ll)patternH + (ll)pow_P[i] * pattern[i]) % MOD;
    patternH = ((ll)patternH * pow_P[n]) % MOD;
    H[0] = 0;
    for (int i = 0; i < n; ++i)
        H[i + 1] = ((ll)H[i] + (ll)pow_P[i] * text[i]) % MOD;
    string ans = text;
    for (int i = m - 1; i < n; ++i) {
        if (get_hash(i - m + 1, i, n) == patternH) {
            for (int j = 0; j < m; ++j) {
                if (ans[i - j] <= 'Z') break;
            ans[i - j] -= 32;  // 'a' - 'A'
                }
            }
        }
    cout << ans << '\n';
    return 0;
}
