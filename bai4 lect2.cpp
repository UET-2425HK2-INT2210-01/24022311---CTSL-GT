#include <iostream>
#include <queue>
using namespace std;

void processQueue(int n) {
    queue<int> q;
    string operation;

    for (int i = 0; i < n; i++) {
        cin >> operation;
        if (operation == "enqueue") {
            int x;
            cin >> x;
            q.push(x);
        } else if (operation == "dequeue") {
            if (!q.empty()) {
                q.pop();
            }
        }
    }

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
}

int main() {
    int n;
    cin >> n;
    processQueue(n);
    return 0;
}
