#include <bits/stdc++.h>

using namespace std;

void passByValue(int num) {
    cout << num << endl;
    num += 10;
    cout << num << endl;
    num += 10;    
    cout << num << endl;
}

void passByReference(int &num) {
    cout << num << endl;
    num += 10;
    cout << num << endl;
    num += 10;    
    cout << num << endl;
}


int main() {
    int n = 10;

    passByValue(n);

    cout << n << endl;

    passByReference(n);

    cout << n << endl;

    return 0;
}
