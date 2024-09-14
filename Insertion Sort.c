#include <stdio.h>
#include <stdlib.h>
int Front = -1;
float max;
int Array[100];
int Rear = -1;
int i,x;

void Insertion(int X, int Y){
	int i, j, k, temp;
	
	for(i = X+1; i <= Y; i++){
		temp = Array[i];
		
		for(j = i-1; j >= X && Array[j] > temp; j--){
				Array[j+1] = Array[j];
		}	
		Array[j+1] = temp;
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
	
	//Function
	Insertion(Front, Rear);
	
	point = Front;
	point2 = Rear;
	while(point != Rear + 1){
		printf("%d\t", Array[point]);
		point = point + 1;
	}
	
	
	i = 0;
	j = 0;
	
	if ((Rear+1) %2 == 1){
		i = (Rear + 1)/2;
	
	} else {
		i = (Rear)/2;
		j = i + 1;
	}
}




