#include <iostream>
#include <stack>
#include <string>
using namespace std;

void stack_operations(int n) {
    stack<int> s;
    string operation;

    for (int i = 0; i < n; ++i) {
        cin >> operation;
        if (operation == "push") {
            int x;
            cin >> x;
            s.push(x);
        } else if (operation == "pop" && !s.empty()) {
            s.pop();
        }
    }

    stack<int> reversed;
    while (!s.empty()) {
        reversed.push(s.top());
        s.pop();
    }

    while (!reversed.empty()) {
        cout << reversed.top() << " ";
        reversed.pop();
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    stack_operations(n);
    return 0;
}
