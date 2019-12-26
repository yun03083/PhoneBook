#include <stdio.h>
#include "phone.h"
#include <stddef.h>

void registerPhoneData();
void print();
// print() invokes printArray()
void printArray(void *arr, int size);
void searchByName();
void deleteByName();
void sort();
Contact* Push(Contact* head, char* name, char* number);


// array of function pointers.
void (* pFuncs[5])()={registerPhoneData, print, searchByName, deleteByName,sort};

// function pointer declaration
typedef int (*cmp)(Contact*, Contact*);
typedef int (*swap)(Contact*, Contact*);

// Sorting PhoneBook using bubble sort
// 3rd parameter cmp cfn: a pointer to function
// 4th parameter swap sfn: a pointer to function
void sortPhoneBook(Contact* A, cmp cfn, swap sfn);

// Functions for sortPhoneBook
// Should implement these two fuction
int contactCmpr(const void*, int, int);
int contactSwap(void*, int, int);

static int count_service = 0;	// Total number of service requests




int main(int argc, char **argv)
{
	Contact record;
	FILE *fp;
	
	if(argc != 2)
	{
		fprintf(stderr, "Usage: %s filename\n", argv[0]);
		return 1;
	}
	if( (fp = fopen(argv[1], "rb")) == NULL)
	{
		return 2;
	}

	while (fread(&record, sizeof(Contact),1,fp) > 0)
	{		
			char name[10];
			char number[13];
			strcpy(name, record.Name);
			strcpy(number, record.PhoneNumber);
			list = Push(list, name, number);

	}

	int service;		// a variable for storing user's request
	do
	{
        printf("============ Telephone Book Management ============");
        printf("\n <<<1. Register\t 2. Print All \t 3. Search by ID \t 4. Delete \t 5. Sort \t 6. Exit >>>\n");
        printf(" Please enter your service number (1-6)> ");
		scanf("%d", &service);
		if ( service > 0 && service <= 5 )
		{
			pFuncs[service-1]();
		}
		else if( service ==0 || service > 6)
		{
			printf("You choose a wrong service number\n");
		}
	} while (service != 6);	// if Exit is not entered, the loop continues
	
	fp = fopen(argv[1],"wb");
	while (list != NULL) {
		if(list != NULL) {
			fwrite(list,sizeof(Contact),1,fp);
			if(list->next != NULL){
				list = list->next;
			}
			else {
				break;
			}
		}
	}
	fclose(fp);
	return 0;
}


void sortPhoneBook(Contact* curr, cmp cfn, swap sfn)
{  
    Contact* head = curr;
    while (curr != NULL) {
	if(curr->next != NULL) {
		if (cfn(curr, curr->next)) {
			sfn(curr, curr->next);
		}
		if (curr != NULL){
			curr = curr->next;
		}
	}
	else {
		return;
	}
    }

}


