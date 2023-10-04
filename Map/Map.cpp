#include <bits/stdc++.h>

using namespace std;

int main() {
    map<int, int> mp;

    mp[2] = 4;
    mp.insert({1, 2});

    mp.find(2);

    mp.size();

    unordered_map<int, pair<int,int>> unmap;

    multimap<pair<int, int>, int> mumap;

    return 0;
}