#include <stdlib.h>
#include <stdio.h>
int Front = -1;
int max;
int Arr[100];
int Rear = -1;


Printin(int Array[], int x, int y){
	int i;
	for(i = x; i <= y; i++){
		Array[i-x] = Arr[i]; 
	}
	
}

MergeSort(int X, int Y){
	if ( X>=Y){
		return;
	
	} else {
		
		int mid = ((X+Y)/2);
		MergeSort(X, mid);
		MergeSort(mid+1, Y);
		
		int A = mid - X + 1;
		int B = Y - mid;
		
		int L[A];
		int R[B];
		
		Printin(L,X, mid);
		Printin(R, mid + 1, Y);
		
		int i= 0, j = 0, k=X;
		while((i < A) && (j < B)){
			if(L[i] <= R[j]){
				Arr[k] = L[i];
				i++;

		
			} else{
				Arr[k] = R[j];
				j++;

			}
			k++;
		}
		
		while(i < A){
			Arr[k] = L[i];
			i++;
			k++;
		}
		
		while(j < B){
			Arr[k] = R[j];
			j++;
			k++;
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
		scanf("%d", &Arr[Rear]);
		Rear++;
		
		
		printf("Do you wish to continue? [Press 0 to continue ~ Any Numerical to end]: ");
		scanf("%d", &j);
		printf("\n");
		
	}
	Rear = Rear -1;
	
	int point;
	point = Front;
	
	while(point != Rear + 1){
		printf("%d\t", Arr[point]);
		point = point + 1;
	}
	printf("\n");
	
	
	MergeSort(Front, Rear);
	
	point = Front;
	
	while(point != Rear + 1){
		printf("%d\t", Arr[point]);
		point = point + 1;
	}
	printf("\n");
	
}

