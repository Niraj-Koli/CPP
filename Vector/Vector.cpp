#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v;

    v.push_back(10);
    v.emplace_back(7);
    v.push_back(21);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    v.pop_back();

    v.insert(v.begin(), 2);

    v.erase(v.end() + 1);

    v.size();

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    vector<pair<int, int>> vec;

    vec.push_back({11,25});
    vec.push_back({10,32});

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i].second << endl;
    }

    vector<int> vector(5, 100);

    for (int i = 0; i < vector.size(); i++) {
        cout << vector[i] << endl;
    }

    return 0;
}