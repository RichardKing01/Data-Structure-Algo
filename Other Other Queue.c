//Question 3
#include <stdio.h>
#include <stdlib.h>

int Front = -1;
int Max = 10;
int Queue[10];
int Rear = -1;
int i;

void Menu(){
	printf("Pizza - 1 | Burger - 2 | Milkshake - 3 | Soda Pop - 4 | Fish & Chips - 5 | Singaporean Hakka - 6\n");
}

void Place_Order(){
	if((Rear == Max - 1) && (Front == 0)){
		printf("Max. Number of Orders have been placed; Please wait.");
		exit(0);
		
	}	else if ((Rear == Max - 1) && (Front != 0)){
			Rear = 0;
	
	}	else if ((Rear == -1) && (Front == -1)){
			Rear = 0;
			Front = 0;
	
	} else {
		Rear++;
	}
	if (Rear > Max){
		Rear = 0;
	}
	Menu();
	printf("Enter the Numerical Code of your Order: ");
	int a;
	scanf("%d", &a);
	Queue[Rear] = a;
	printf("\n");
}

void Order_Done(){
	if (Front == -1){
		printf("No orders present to Complete!");
		exit(0);
	}
	
	printf("Order Code (#%d) has been complete", Queue[Front]);
	
	if (Front == Rear){
		Front = Rear -1;
	
	} else if (Front == Max - 1){
		Front = 0;
	
	} else {
		Front = Front + 1;
	}
	
	printf("\n");
}

void Display(){
	int i;
	printf("Current Orders: ");
	if (Rear < Front){
		for(i = Front; i <= Max-1; i++){
			printf("%d\t", Queue[i]);
		}
		
		for(i = 0; i <= Rear; i++){
			printf("%d\t", Queue[i]);
		}
	
	} else {
		for(i = Front; i <= Rear; i++){
			printf("%d\t", Queue[i]);
		}
	}
	
	printf("\n");
	
}

void main(){
	Menu();
	Place_Order();
	Place_Order();
	Place_Order();
	Display();
	Order_Done();
	Display();
	
}
