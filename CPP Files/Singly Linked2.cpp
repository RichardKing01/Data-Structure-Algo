#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* link;

    Node(int data) {
        this->data = data;
        link = NULL;
    }
};

class List {
public:
    Node* head, * tail;
    List() {
        head = NULL;
        tail = head;
    }
    void insert_node(int data) {
        Node* node = new Node(data);

        if (head == NULL) {
            head = node;
            tail = head;

        }
        else {
            tail->link = node;
            tail = node;
        }
         
};

void Print(List* p) {
    Node* node = p->head;
    if (node == NULL) {
        cout << "List is empty." << endl;
        return;
    }
    do {
        cout << node->data << "\t";
        node = node->link;
    } while (node != p->head);
    cout << endl;
}

void Insert(List* p) {
    int x, y;
    cout << "Enter the value of the new node: ";
    cin >> x;
    cout << "\nEnter the value of node after which new node has to be inserted: ";
    cin >> y;

    Node* node = p->head;
    Node* newNode = new Node(x);
    while (node->data != y) {
        node = node->link;
        if (node == p->head) {
            cout << "Node with value " << y << " not found in the list." << endl;
            return;
        }
    }
    newNode->link = node->link;
    node->link = newNode;
}

int main() {
    int n, x;
    cout << "Enter the total number of nodes in List: ";
    cin >> n;

    List* list = new List;

    for (int i = 1; i <= n; i++) {
        cout << "Enter Data of Element #" << i << ": ";
        cin >> x;
        list->insert_node(x);
    }

    cout << "\nList after insertion: " << endl;
    Print(list);

    Insert(list);
    cout << "\nList after Insertion: " << endl;
    Print(list);

    return 0;
}
