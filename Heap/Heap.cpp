#include <bits/stdc++.h>

using namespace std;

int main() {
    priority_queue<int> maxHeap;

    maxHeap.push(4);
    maxHeap.push(3);
    maxHeap.push(7);

    maxHeap.top();

    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(2);
    minHeap.push(6);
    minHeap.push(4);

    minHeap.top();

    return 0;
}