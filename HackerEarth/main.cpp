/**
  * Shiv Pratap Singh
  *
  **/

#include <bits/stdc++.h>
#include <ctime>

using namespace std;

int main() {

    int start_s=clock();

    int testCases = 0;
    cin >> testCases;

    for(;testCases-- > 0;) {
        int X;
        cin >> X;

        int count = 0;

        for(int i = 1; i < X; i++) {
            if( (i ^ X) == (i & X) )
                count++;
        }

        cout << count << endl;
    }

    int stop_s=clock();
    cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;


    return 0;
}
