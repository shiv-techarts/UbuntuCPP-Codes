/**
  * Shiv Pratap Singh
  * Fortinet Challenge
  *
  **/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    // TODO

    int testCases;
    cin >> testCases;

    while(testCases-- > 0) {
        int N = 0;
        long long P = 0;

        cin >> N >> P;
        vector<int> milk;
        vector<int> apples;

        for(int i = 0; i < N; i++) {
            int temp;
            cin >> temp;
            milk.push_back(temp);
        }

        for(int i = 0; i < N; i++) {
            int temp;
            cin >> temp;
            apples.push_back(temp);
        }

        int totalApples;
        int index = 0;

        for(long long i = 0; i < N; i++) {
            while(P != 0 || index == N) {
                totalApples += apples[index];
                index++;
                P--;
            }

            index++;
        }

        cout << totalApples << endl;
    }

    return 0;
}
