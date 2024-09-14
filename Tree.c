#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int j, i, k;
struct node{
	struct node *Left;
	int data;
	struct node *Right;
	struct node *Parent;
	};


struct node* Create(int i){
	struct node *New = (struct node*)malloc(sizeof(struct node));
	New->data = i;
	New->Left = NULL;
	New->Right = NULL;
	New->Parent = NULL;
	
	return New;
}

void  Preorder(struct node* P){
	if (P != NULL) {
        printf("%d\t", P->data);
        Preorder(P->Left);
        Preorder(P->Right);
	}
}

void  Postorder(struct node* P){
	if (P != NULL) {
        Postorder(P->Left);
        Postorder(P->Right);
        printf("%d\t", P->data);
	}
}

void  Inorder(struct node* P){
	if (P != NULL) {
        Inorder(P->Left);
        printf("%d\t", P->data);
        Inorder(P->Right);
	}
}

void main(){
	printf("Enter the number of integers: ");
	int n;
	scanf("%d", &n);
	
	struct node *Root = (struct node*)malloc(sizeof(struct node));
	printf("Enter the Value of Root: ");
	scanf("%d", &Root->data);
	Root->Parent = NULL;
	
	struct node *L, *R;

	int count = 1;
	int jump, k;
	struct node* current;
	current = Root;

	printf("Do you want to add more items to the tree? [Yes - 1 | No - 2]: ");
	scanf("%d", &j);
	
	while ((j != 1) && (j != 2)){
		printf(" Invalid Input. Do you want to add more items to the tree? [Yes - 1 | No - 2]: ");
		scanf("%d", &j);
	}
	
	if (j == 2){
		exit(0);
	}
	
	while(j == 1){
		printf("Actions: [Left - 1 | Right - 2 | Move to Left - 3 | Move to Right = 4 | Move Back - 5 | Exit = 0]: ");
		scanf("%d", &i);
		
		while((i != 0 ) && (count != n)){
			if (i == 1){
				printf("Enter the Value of Node: ");
				scanf("%d", &k);
				
				while(k > current->data){
					printf(" Value of Intended node greater than it's parent. Error.\n");
					printf("Enter the Value of Node: ");
					scanf("%d", &k);
				}
				
				L = Create(k);
				L->Parent = current;
				current->Left = L;
				count++;
				
				printf("Actions: [Left - 1 | Right - 2 | Move to Left - 3 | Move to Right = 4 | Move Back - 5 | Exit = 0]: ");
				scanf("%d", &i);
			
			}	else if (i == 2){
				printf("Enter the Value of Node: ");
				scanf("%d", &k);
				
				while(k < current->data){
					printf(" Value of Intended node lesser than it's parent. Error.\n");
					printf("Enter the Value of Node: ");
					scanf("%d", &k);
				}
				
				
				R = Create(k);
				R->Parent = current;
				current->Right = R;
				count++;
				
				printf("Actions: [Left - 1 | Right - 2 | Move to Left - 3 | Move to Right = 4 | Move Back - 5 | Exit = 0]: ");
				scanf("%d", &i);
			
			}	else if (i == 3){
				current = current->Left;
				printf("Current Node Value: %d\n", current->data);
				printf("Actions: [Left - 1 | Right - 2 | Move to Left - 3 | Move to Right = 4 | Move Back - 5 | Exit = 0]: ");
				scanf("%d", &i);
			
			}	else if (i == 4){
				current = current->Right;
				printf("Current Node Value: %d\n", current->data);
				printf("Actions: [Left - 1 | Right - 2 | Move to Left - 3 | Move to Right = 4 | Move Back - 5 | Exit = 0]: ");
				scanf("%d", &i);
			
			}	else if (i == 5){
					current = current->Parent;
					printf("Current Node Value: %d\n", current->data);
					printf("Actions: [Left - 1 | Right - 2 | Move to Left - 3 | Move to Right = 4 | Move Back - 5 | Exit = 0]: ");
					scanf("%d", &i);
			
			} else {
				printf("Invalid Input?? \n");
				printf("Current Node Value: %d\n", current->data);
				printf("Actions: [Left - 1 | Right - 2 | Move to Left - 3 | Move to Right = 4 | Move Back - 5 | Exit = 0]: ");
				scanf("%d", &i);
			}		
		}

		if(count == n + 1){
			printf("Max no. of nodes.");
			j = 0;
		}	
				
		if(i == 0 ){
			j = 0;
		}	
	}
printf("Preorder: ");	
Preorder(Root);	
printf("\nInorder: ");
Inorder(Root);
printf("\nPostorder: ");
Postorder(Root);
}



