#include <string.h>
#include <stdio.h>
#include "phone.h"
#include <stddef.h>

void printList(Contact* head)
	{
	    
	    Contact* curr = head;
	    while(curr != NULL)
	    {	
		if(curr != NULL) {
	        	printf("Addr p:%p\t", curr);
	        	printf("name:%s\t phone:%s\n", curr->Name, curr->PhoneNumber);
			curr = curr->next;
		}
		else {
			break;
		}
		
	    }
	    printf("\n");
	}

void print()
	{
	    printf("Print all contants in the PhoneBook\n");
	    printList(list);
	}

void searchList(Contact* head, char* name)
	{
	    Contact* curr = head;
	    while(curr != NULL)
	    {	
		if(curr != NULL) {
	        	if (!strcmp(name, curr->Name)){
				printf("%s\t%s\n\n", curr->Name, curr->PhoneNumber);
				return;		
			}
			curr = curr->next;
		}
		else {
			break;
		}
		
	    }
	    	printf("Oops! %s is not in the PhoneBook.\n\n", name);
	}

void searchByName(){
	char name[10];
	printf(">> Enter a name to search: ");
	scanf("%s", name);
	searchList(list, name);	
} 	
		
