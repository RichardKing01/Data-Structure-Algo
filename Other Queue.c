//Question 2
#include <stdio.h>
#include <stdlib.h>
int Front = -1;
int max;
int Array[100];
int Rear = -1;
int i;


void Display(int* p){
	i = Front;
	printf("Current Queue: ");
	while(i <= Rear){
		printf("%d\t", p[i]);
		i +=1;
	}
	printf("\n");
}

void Dequeue(int *p){
	if(Front == -1){
		printf("Underflow");
		exit(0);
	}else {
	
	
	i = Front;
	
	
	printf("Deleting!\n");
	int n;
	n = p[Front];
	Front = Front + 1;
	i = Front;
	printf("%d", n);
	
	}
}

void Enqueue(int *p){
	
		if (Rear == max -1){
			printf("You have reached max of Queue\nEnd...");
			exit(0);
		} else{

		Rear += 1;
		int n;
		printf("ENter the value: ");
		scanf("%d", &n);
		Array[Rear] = n;
		printf("\n");
			}
	
	Display(p);
}

void Overflow(){
	if (Rear == max -1){
		printf("Overflow\n");
	
	} else {
		printf("Not Overflow\n");
	}


}

void Underflow(){
	if ((Rear == -1 ) || (Front == -1)){
		printf("Underflow\n");
	
	} else {
		printf("Not Underflow\n");
	}
 
}

void getFront(int *p){
	Underflow();
	printf("%d", p[Front]);
}

void isEmpty(){
	Underflow();
}


void main(){
	printf("Enter the Size of Queue: ");
	scanf("%d", &max);
	int*p = Array;
	Front += 1;
	isEmpty();
	Enqueue(p);
	Enqueue(p);
	Enqueue(p);
	Display(p);
	Dequeue(p);
	getFront(p);
}



