//Selection Sort
#include <stdio.h>
#include <stdlib.h>
int Front = -1;
int max;
int Array[100];
int Rear = -1;
int i, j, k, x;



void main(){
	Front = 0;	
	Rear = 0;
	j = 0;
	int val, l = 0;
	
	printf("Do you want to add a number? [Press 0 to Add ~ Any Numerical to end]: ");
	scanf("%d", &j);
	while(j == 0){
	
		printf("Enter the value of Array #%d: ", Rear+1);
		scanf("%d", &Array[Rear]);
		Rear++;
		
		
		printf("Do you wish to continue? [Press 0 to continue ~ Any Numerical to end]: ");
		scanf("%d", &j);
		printf("\n");
	}
	Rear = Rear - 1;
	
	int point;
	point = Front;
	
	while(point != Rear+ 1){
		printf("%d\t", Array[point]);
		point = point + 1;
	}
	printf("\n");
	
	for(l = Front; l <= Rear; l++){
		i = l;
		val = Array[l];
		k = l;
		do {
			if (val > Array[k]){
				val = Array[k];
				i = k;
			}
			k++;
		} while(k != Rear + 1);
		
		if (Array[l] > val){
			x = Array[l];
			Array[l] = val;
			Array[i] = x;
		}
		
		point = Front;
		printf("Pass#%d: ", l+1);
		while(point != Rear + 1){
			printf("%d\t", Array[point]);
			point = point + 1;
		}
		printf("\n");
			
	}
	
	printf("Sorted list is: ");
	
	for(l = Front; l <= Rear; l++){
		printf("%d\t", Array[l]);
	}
	
	
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
