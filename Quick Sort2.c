//Quick Sort
#include <stdio.h>
#include <stdlib.h>
int Front = -1;
float max;
int Array[100];
int Rear = -1;
int i,x;

void Quick(int X, int Y){
	int Pivot = X + 1;
	int k, temp, temp2, i = X, j = Y;
	
	if (X >= Y){
		return;
	}
	
	else {
		while(i <= y && Array[i] )
	}
	
	Quick(X, Pivot-1);
	Quick(Pivot+1, Y);
	
		if ((Array[Pivot] < Array[Pivot -1]) && (Pivot - 1 >= X)){
			temp2 = Array[Pivot];
			Array[Pivot] = Array[Pivot -1];
			Array[Pivot - 1] = temp2;
			Pivot = Pivot - 1;
	
	} 	else if ((Array[Pivot] > Array[Pivot + 1]) && (Pivot + 1 <= Y )) {
			temp2 = Array[Pivot];
			Array[Pivot] = Array[Pivot + 1];
			Array[Pivot + 1] = temp2;
			Pivot = Pivot + 1;
	}

}
void main(){
	Front = 0;	
	Rear = 0;
	int j;
	
	printf("Do you wish to continue? [Press 0 to continue ~ Any Numerical to end]: ");
	scanf("%d", &j);
	while(j == 0){
	
		printf("Enter the value of Array #%d: ", Rear+1);
		scanf("%d", &Array[Rear]);
		Rear++;
		
		
		printf("Do you wish to continue? [Press 0 to continue ~ Any Numerical to end]: ");
		scanf("%d", &j);
		printf("\n");
		
	}
	Rear = Rear -1;
	
	
	int point = Front;
	int point2 = Rear;
	while(point != Rear + 1){
		printf("%d\t", Array[point]);
		point = point + 1;
	}
	point = Front;
	printf("\n");
	
	Quick(Front, Rear);
	
	point = Front;
	point2 = Rear;
	while(point != Rear + 1){
		printf("%d\t", Array[point]);
		point = point + 1;
	}
	

}
