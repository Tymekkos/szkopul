#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main ()
{
    int iSecret, iGuess;

    srand (time(NULL));

    iSecret = rand() % 10 + 1;
    cout << iSecret;
    return 0;
}
