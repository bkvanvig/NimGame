#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int tests;
    cin >> tests;
    while (tests > 0){
        int piles;
        cin >> piles;
        int total = 0;
        for (int i = 0; i < piles; i++){
            int dummy;
            cin >> dummy;
            total ^= dummy;
        }
        if (total == 0)
            cout << "Second" << endl;
        else
            cout << "First" << endl;
        tests--;
    }
    return 0;
}
