#include <string.h>
#include "phone.h"

void printAll(){
	printf("<< Display all contents in the PhoneBook >>\n");
	for(int i = 0; i < size; i++){
		printf("%s\t\t\t\t%s\n", PhoneBook[i].Name, PhoneBook[i].PhoneNumber);
	}
	printf("\n");
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
		
