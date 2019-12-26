#include "phone.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>


void deleteByName(){
	printf(">> Enter a name to delete: ");
	char name[10];
	scanf("%s", name);
	Contact* curr = list;
	Contact* currPrevious = list;
	Contact* currAfter = NULL;
	if (!strcmp(name, curr->Name)){
		list = list->next;
		free(curr);
		printf("%s is deleted...\n",name);
		return;
	}
	if (curr->next == NULL) {
		free(curr);
		return;
	}
	while(curr != NULL){
		if ( curr != NULL){
			if (!strcmp(name, curr->Name)){
				currPrevious->next = currAfter->next;
				free(curr);
				printf("%s is deleted...\n",name);
				return;
			}
			currPrevious = curr;
			curr = curr->next;
			currAfter = curr->next;
		}
		else {
			break;
		}
	}
	printf("Oops! %s is not in the PhoneBook.\n\n", name);
}

