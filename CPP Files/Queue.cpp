#include <iostream>
using namespace std;

const int Max_Size = 10;

class Queue{
	private: 
		int front; 
		int rear;
		int Array[Max_Size];
		
	public: 
		Queue():front(-1), rear(-1){};
		
		void push(int i){
			if(rear == Max_Size -1){
				cout << "OverFlow" << endl;
				exit(0);
			
			} else if ((front == -1) && (rear == -1)){
				front = 0;
				rear = 0;
			
			} else {
				rear += 1;
			}
		
			Array[rear] = i;	
		}
		
		void pop(){
			if(front == -1){
				cout << "Underflow" << endl;
				exit(0);
			
			} else {
				cout << "Popped out Element: " << Array[front] << endl;
				front += 1;
			}
			cout<<endl;
		}
		
		void Display(){
			int i;
			for(i = front; i <= rear; i++){
				cout << Array[i] << "\t";
			}
			cout<<endl;
			cout<<endl;
		}
};

int main(){
	Queue Q;
	Q.push(1);
	Q.push(2);
	Q.push(3);
	Q.push(4);
	Q.Display();
	Q.pop();
	Q.Display();
}

