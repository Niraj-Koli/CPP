#include <bits/stdc++.h>

using namespace std;

int main() {
    list<int> ls;

    ls.push_back(1);
    ls.emplace_back(3);

    ls.push_front(6);
    ls.emplace_front(8);

    return 0;
}