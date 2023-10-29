#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct numberList{
	int number;
	struct numberList *next;
};

struct students{
	char name[40];
	int age;
	int studentNum;
	struct students *next;
};

struct randNumList{
	int num;
	struct randNumList *next;
};

struct numberList *addFront(struct numberList *head, int x){
	struct numberList *temp = (struct numberList *)malloc(sizeof(struct head));
	temp->data = x;
	temp->	next = head;
	head = temp;
	return head;	
}

struct numberList *addLast(struct numberList *head, int x){
	struct numberList *temp = (struct numberList *)malloc(sizeof(struct head));
	temp->data = x;
	temp->	next = NULL;
	if (head == NULL){
		head = temp;
	}
	else{
		struct numberList *last = head;
		while(last->next != NULL){
			last = last->next;
		}
		last->next = temp;
	}
	return head;
}

void oddsFrontEvensEnd(struct numberList *head){
	int x;
	printf("Please enter a positive number\n");
	scanf("%d", &x);
	
	while (x != -1){
		if(x % 2 == 0){
			addLast(head,x);
			printf("Please enter a positive number\nIf you want to finish enter -1\n");
			scanf("%d", &x);
		}
		else{
			addFront(head,x);
			printf("Please enter a positive number\nIf you want to finish enter -1\n");
			scanf("%d", &x);
		}
	}
}

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


void organizedNums(struct randNumList *head){
	srand(time(NULL));
	int randNum, i, array[100];
	for (i=0; i<100; i++){
		randNum = rand() %1000 + 1;
		addLast(head, randNum);
	}
	struct randNumList *temp;
	temp= head;
	while(temp != NULL){
		i=0;
		array[0] = temp->num;
		head = temp->next;
		i++;
	}	
	bubbleSort(array, 100);
	
	printf("Organized List: \n");
    for (i = 0; i < 100; i++) {
        printf("%d -> ", arr[i]);
    }
}

void studentsInfo(struct students *head){
	int counter;
	counter=1;
	struct students *temp;
	temp = head;
	if (temp == NULL){
		printf("Student list is empty\n");
	}
	else{
		while(temp != NULL){
			printf("%d- %s %d %d \n", counter, temp->name, temp->age, temp->studentNum);
			counter++;
		}
	}	
}


void searchStudent(struct students *head, char key[40]){
	if (head == NULL){
		printf("List is empty");
	}
	else{
		struct students *temp;
		temp = head;
		if(head->name == key){
			printf("There is such a student");
		}
		else{
			while(temp->next != NULL && temp->next != key){
				temp = temp->next;
			}
			if (temp->next == NULL){
				printf("There isn't such a student");
			}
			else{
				printf("There is such a student");
			}
		}
	}
}

struct students *del(struct students *head, char key[40]){
	if (head == NULL) {
		return head;
	}
	else{
		struct students *temp;
		temp = head;
		if(head->name == key){
			head == head->next;
			free(temp;)
		}
		else{
			while(temp->next != NULL && temp->next != key){
				temp = temp->next;
			}
			if (temp->next == NULL){
				return head;
			}
			struct students *deleted;
			deleted = temp->next;
			free(deleted);
		}
		return head;
	}
}

void printLongestName(struct students *head){
	char tempName[40];
	if (head == NULL){
		printf("The list is empty");
	}
	else{
		struct students *temp;
		temp = head;
		strcpy(tempName, temp->name);
	}
	while(temp->next != NULL){
		if(strlen(tempName) < strlen(temp->next->name)){
			strcpy(tempName, temp->next->name);
		}
		temp = temp->next;
	}
	printf("The longest name in the list : %s \nLenght : %zu", tempName,strlen(tempName));
}


int main(){
	int x;
	printf("Please enter which funtion do you want to use\n");
	printf("1- Question one\n2- Question two\n3- Question three\n4-Question four\n5Quetion five\n6- Question six\n ");
	scanf("5", &x);
	switch(x){
		case 1 :
		case 2 :
		case 3 :
		case 4 :
		case 5 :
		case 6 :	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
