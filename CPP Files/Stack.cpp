#include <iostream>
using namespace std;

const int Max_Size = 10;

class Stack{
	private: 
		int top; 
		int Array[Max_Size];
		
	public: 
		Stack():top(-1){};
		
		void push(int i){
			if(top == Max_Size -1){
				cout << "OverFlow" << endl;
				exit(0);
			
			} else if (top == -1){
				top = 0;
		
			} else {
				top += 1;
			}
		
			Array[top] = i;	
		}
		
		void pop(){
			if(top == -1){
				cout << "Underflow" << endl;
				exit(0);
			
			} else {
				cout << "Popped out Element: " << Array[top] << endl;
				top -= 1;
			}
			cout<<endl;
		}
		
		void Display(){
			int i;
			for(i = 0; i <= top; i++){
				cout << Array[i] << "\t";
			}
			cout<<endl;
			cout<<endl;
		}
};

int main(){
	Stack Q;
	Q.push(1);
	Q.push(2);
	Q.push(3);
	Q.push(4);
	Q.Display();
	Q.pop();
	Q.Display();
}
