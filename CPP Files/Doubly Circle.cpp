#include <iostream>
using namespace std;

class Node{
	public:
	int data;
	Node *next;
	Node *prev;
	
	Node(int data){
		this->data = data;
		next = NULL;
		prev = NULL;
	}
};

class List{
	public:
	Node *head, *tail;
	List(){
		head = NULL;
		tail = head;
	}
	void insert_node(int data){
		Node *node = new Node(data);
		
		if (head == NULL){
			head = node;
			head->prev = NULL;
			tail = head;
			tail->next = head;
		
		} else {
			tail->next = node;
			node->prev = tail;
			tail = node;
			tail->next = head;
		}
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
        node = node->next;
    } while (node != p->head);
    cout << endl;
}


void Insert(List *p){
	Node *node = p->head;
	
	Print(p);
	
	cout<<"\n";
	
	int x, y;
	
	cout <<"Enter the value of the new node: ";
	cin >> x;
	cout<<"\n";
	cout <<"Enter the value of node after which new node has to be inserted: ";
	cin >> y;
	cout<<"\n";
	Node *pretemp = new Node(x);
	
	node = p->head;
	while(node->data != y){
		node = node->next;
	}
	pretemp->next = node->next;
	pretemp->prev= node;
	node->next = pretemp; 
};

void Delete(List *p){
	Node *node = p->head;
	Node *pretemp;
	
	Print(p);
	
	cout<<"\n";
	
	int y;
	
	cout <<"Enter the value of node to be deleted: ";
	cin >> y;
	cout<<"\n";
	
	node = p->head;
	pretemp = node;
	while(node->data != y){
		pretemp = node;
		node = node->next;
	}
	pretemp->next = node->next;	
	node->next->prev = pretemp;
};


int main(){
	int n, i, x;
	cout << "Enter the total number of nodes in List: ";
	cin >> n;
	
	List *list = new List;
	
	for(i = 1; i <=n ; i++){
		cout << "Enter Data of Element #" << i << ": ";
		cin >> x;
		list->insert_node(x);
	};

	Insert(list);
	Print(list);	
	Delete(list);
	Print(list);
	
return 0;
}
