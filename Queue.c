//Question 1
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

void Delete(int *p){
	if(Front == -1){
		printf("Underflow");
		exit(0);
	}else {
	
	
	i = Front;
	Display(p);
	
	printf("Deleting!\n");
	
	Front = Front + 1;
	i = Front;
	
	Display(p);
	}
}

void Insert(int *p){
		if (Rear == max - 1){
			printf("You have reached max of Queue\nEnd...");
			exit;
		} else{
		
		Rear += 1;
		int n;
		printf("Enter the value: ");
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

void main(){
	printf("Enter the Size of Queue: ");
	scanf("%d", &max);
	int*p = Array;
	Front += 1;
	Overflow();
	Underflow();
	Insert(p);
	Insert(p);
	Delete(p);
	Display(p);
}



