#include <bits/stdc++.h>

using namespace std;

int main() {
    pair<int, int> p1 = {10, 7};

    cout << p1.first << " " << p1.second << endl;

    pair<int, pair<int, int>> p2 = {1, {2, 3}};

    cout << p2.first << " " << p2.second.second << " " << p2.second.first << endl;

    pair<int, int> arr[] = {{1, 2}, {5, 6}, {6, 3}};

    cout << arr[1].second << endl;

    return 0;
}