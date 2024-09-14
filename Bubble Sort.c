//Bubble Sort
#include <stdio.h>
#include <stdlib.h>
int Front = -1;
int max;
int Array[100];
int Rear = -1;
int i;



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
	
	int point;
	point = Front;
	
	while(point != Rear + 1){
		printf("%d\t", Array[point]);
		point = point + 1;
	}
	printf("\n");
	
	int x;
	for(i = 0; i <= Rear; i++){
		for(j = i; j<= Rear; j++){
			if(Array[i] >= Array[j]){
				x = Array[i];
				Array[i] = Array[j];
				Array[j] = x;
			}
		}
		
		point = Front;
		printf("Pass#%d: ", i+1);
		while(point != Rear + 1){
			printf("%d\t", Array[point]);
			point = point + 1;
		}
		printf("\n");
	}
	
	point = Front;
	
	while(point != Rear + 1){
		printf("%d\t", Array[point]);
		point = point + 1;
	}
	printf("\n");
	
	i = 0;
	j = 0;
	
	if ((Rear+1) %2 == 1){
		i = (Rear + 1)/2;
	
	} else {
		i = (Rear)/2;
		j = i + 1;
	}
	
	
	if (j == 0){
		printf("\nIntermediate result is: %d", Array[i]);
	
	} else {
		max = Array[i] + Array[j];
		max = max/2;
		printf("\nIntermediate result is: %d", max);
	}
}
