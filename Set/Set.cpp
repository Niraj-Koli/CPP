#include <bits/stdc++.h>

using namespace std;

int main() {
    set<int> set;

    set.insert(1);
    set.insert(2);
    set.insert(3);
    set.insert(1);

    set.size();

    set.find(1);
    set.erase(2);

    set.count(4);

    set.lower_bound(2);
    set.upper_bound(2);

    multiset<int> ms;

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    unordered_set<int> st;

    return 0;
}