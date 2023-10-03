#include <bits/stdc++.h>

using namespace std;

int main() {
    int age;

    cin >> age;

    if (age < 18) {
        cout << "You are a child";
    } else if (age >= 18 && age <= 60) {
        cout << "You are an adult";
    } else {
        cout << "You are old";
    }

    return 0;
}