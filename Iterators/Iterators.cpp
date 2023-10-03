#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v1;

    v1.push_back(10);
    v1.emplace_back(7);
    v1.push_back(21);

    vector<int> v2;

    v2.push_back(10);
    v2.emplace_back(7);
    v2.push_back(21);


    vector<int>::iterator it1 = v1.begin();
    vector<int>::iterator it2 = v1.end();

    sort(v1.begin(), v1.end());

    next_permutation(v2.begin(), v2.end());

    return 0;
}