#include <bits/stdc++.h>

using namespace std;

int main() {    
    deque<int> dq;

    dq.push_back(1);
    dq.push_back(2);

    dq.push_front(3);
    dq.push_front(4);

    dq.pop_back();

    dq.pop_front();

    dq.back();
    dq.front();

    return 0;
}