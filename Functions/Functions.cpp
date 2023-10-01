#include <bits/stdc++.h>

using namespace std;

void printName() {
    cout << "Kaizer" << endl;
}

void printName(string name, int age) {
    cout << name << ": " << age << endl;
}

int sum(int n1, int n2) {
    return n1 + n2;
}

int main() {
    printName();

    printName("Nero", 21);

    cout << sum(10, 7);

    return 0;
}