#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {

    int n;
    cin >> n;
    int count = 0;
    int prev = 0;
    int max = -1;

    while(n != 0) {
        int temp = n % 2;

        if( temp == 1 && prev == 1 && count > max) {
            count++;
            max = count;
        }

        prev = temp;

        n /= 2;
    }

    cout << ( count + 1 );

    return 0;
}
