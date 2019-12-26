#include <string.h>
#include "phone.h"


int contactCmpr(Contact* A, Contact* B)
	{
	    if(strcmp(A->Name, B->Name)>0){
		return 1;
	    }
	    else {
		return 0;
	    }
	
	}

int contactSwap(Contact* A, Contact* B)
	{
	    char tempName[10];
	    char tempNumber[13];
	    strcpy(tempName, (*A).Name);
	    strcpy(tempNumber, (*A).PhoneNumber);
	    strcpy((*A).Name, (*B).Name);
	    strcpy((*A).PhoneNumber, (*B).PhoneNumber);
	    strcpy((*B).Name, tempName);
	    strcpy((*B).PhoneNumber, tempNumber);
	
	    return 1;
	}

void sortList(Contact* head){
	Contact* A = head;
	sortPhoneBook(A,  contactCmpr, contactSwap);
	sortPhoneBook(A,  contactCmpr, contactSwap);
	printf("After sorting\n");
	printList(A);
}

void sort()
	{
		printf("Sort fuction is called\n");
		printf("Before sorting\n");
		printList(list);
		sortList(list);
		
	}


