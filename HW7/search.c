#include <string.h>
#include "phone.h"

void printArray(void *arr, int size)
	{
	    int i;
	    void *vp;
	    vp= arr;
	    for(i=0; i<size; i++)
	    {
	        printf("Addr vp:%p\t", (Contact*)vp+i);
	        printf("name:%s\t phone:%s\n", ((Contact*)vp+i)->Name, ((Contact*)vp+i)->PhoneNumber);
	    }
	    printf("\n");
	}

void print()
	{
	    printf("Print all contants in the PhoneBook\n");
	    Contact A[size];
	    for(int i = 0; i < size; i++){
		A[i] = PhoneBook[i];	
	    }
		printArray(A, size);
	}
	

void searchByName(){
	char name[10];
	int oops = 0;
	printf(">> Enter a name to search: ");
	scanf("%s", name);
	for(int i = 0; i < size; i++){
		if (!strcmp(name, PhoneBook[i].Name)){
			printf("%s\t%s\n\n", PhoneBook[i].Name, PhoneBook[i].PhoneNumber);
			oops = 1;		
		}
	}
	if(oops == 0){
		printf("Oops! %s is not in the PhoneBook.\n\n", name);
	}	
} 	
		
