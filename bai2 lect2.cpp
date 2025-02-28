#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) { data = x; next = nullptr; }
};

class LinkedList {
private:
    Node* head = nullptr;

public:
    void insert(int p, int x) {
        Node* newnode = new Node(x);
        if (p == 0) {
            newnode->next = head;
            head = newnode;
            return;
        }

        Node* temp = head;
        for (int i = 0; temp && i < p - 1; i++) temp = temp->next;
        if (!temp) return;

        newnode->next = temp->next;
        temp->next = newnode;
    }

    void remove(int p) {
        if (!head) return;
        if (p == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head, *prev = nullptr;
        for (int i = 0; temp && i < p; i++) {
            prev = temp;
            temp = temp->next;
        }
        if (!temp) return;

        prev->next = temp->next;
        delete temp;
    }

    void printList() {
        for (Node* temp = head; temp; temp = temp->next)
            cout << temp->data << " ";
    }
};

int main() {
    int n;
    cin >> n;
    LinkedList list;

    while (n--) {
        string cmd;
        int p, x;
        cin >> cmd >> p;
        if (cmd == "insert") {
            cin >> x;
            list.insert(p, x);
        } else {
            list.remove(p);
        }
    }

    list.printList();
    return 0;
}
