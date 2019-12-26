#include "phone.h"
#include <string.h>

void deleteByName(){
	printf(">> Enter a name to delete: ");
	char name[10];
	int oops = 0;
	scanf("%s", name);
	for(int i = 0; i < size; i++){
		if (!strcmp(name, PhoneBook[i].Name)){
			for (int j = i; j < size; j++){
				PhoneBook[j] = PhoneBook[j+1];
			}
			size--;
			printf("%s is deleted...\n\n", name);
			oops = 1;
		}
	}
	if(oops == 0){
		printf("Oops! %s is not in the PhoneBook.\n\n", name);
	}
}

