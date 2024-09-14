//Bucket Sort
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int Front = -1;
float max, l;
float Array[100];
float Array_B[100];
int Rear = -1;
int i,x, k;

void Mover(float g, int i){
	float k;
	int j;
	
	if(i > Rear){
		return;
	}
			
	if(Array_B[i] == -1.0){
		Array_B[i] = g;
	
	} else {
		if (Array_B[i] > g){
			k = Array_B[i];
			Array_B[i] = g;
			Mover(k, i+1);
		}
		else{
			Mover(g, i+1);
		}
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
		scanf("%f", &Array[Rear]);
		Rear++;
		
		
		printf("Do you wish to continue? [Press 0 to continue ~ Any Numerical to end]: ");
		scanf("%d", &j);
		printf("\n");
		
	}
	Rear = Rear -1;

	
	for(i = 0; i <= Rear; i++){
		Array_B[i] = -1;
	}
	
	int point = Front;
	int point2 = Rear;
	while(point != Rear + 1){
		printf("%f\t", Array[point]);
		point = point + 1;
	}
	point = Front;
	printf("\n");
	
	int n = Rear + 1;
	float g;
	
	for(i = 0; i <= Rear; i++){
		l = Array[i];
		g = l*n;
		k = (int)floor(g);
		Mover(l, k);
	}
	
	
	 point = Front;
	 point2 = Rear;
	while(point != Rear + 1){
		printf("%f\t", Array_B[point]);
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
	
	
	if (j == 0){
		printf("\nIntermediate result is: %f", Array_B[i]);
	
	} else {
		max = Array[i] + Array[j];
		max = max/2;
		printf("\nIntermediate result is: %.2f", max);
	}
}
