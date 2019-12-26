#include "phone.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

Contact* Push(Contact* head, char* name, char* number){
	Contact* n = (Contact*) malloc(sizeof(Contact));
	strcpy((*n).Name, name);
	strcpy((*n).PhoneNumber, number);
	n->next = head;
	
	
	return n;
}

void registerPhoneData(){
	char password[11];
	static int wrongPassword = 0; 
	printf("Password:\n");
	while(wrongPassword != 4){
		scanf("%s", password);
		if(!strcmp(password,"qwerty1234")){
			char name[10];
			printf("New User Name: ");
			scanf("%s", name);
			char number[13];
			printf("PhoneNumber: ");
			scanf("%s", number);
			list = Push(list, name, number);
			printf("Registered...\n\n");
			break;
		}
		else {
			wrongPassword++;
			switch(wrongPassword)
			{
				case 1: printf(">>Not Matched !!!\n"); printf("Password\n");break; 
				case 2: printf(">>Not Matched (twice) !!!\n"); printf("Password\n");break; 
				case 3: printf(">>Not Matched (3 times) !!!\n"); printf("Password\n");break; 
			}
		}
	}		
	if(wrongPassword == 4){	
		printf(">>You are not allowed to access PhoneBook.\n");
		wrongPassword = 0;
	}
}	
