#include <string.h>
#include "phone.h"


int contactCmpr(const void* arr, int i, int j)
	{
	    if(strcmp(((Contact*)arr+i)->Name, ((Contact*)arr+j)->Name)==1){
		return 1;
	    }
	    else {
		return 0;
	    }	
	    // if arr[i]> arr[j], return 1
	    // else retrun 0
	
		// Calculate address for arr[i]:  ((Contact*)arr+i)
	    // derefernce structure Contact: *((Contact*)arr+i)).Name
	    // for stucture we use ->: ((Contact*)arr+i)->Name
	
	}

int contactSwap(void* arr, int i, int j)
	{
	    Contact temp;
	    temp = *((Contact*)arr+i);
	    *((Contact*)arr+i) = *((Contact*)arr+j);
	    *((Contact*)arr+j) = temp;
	    // Goal: arr[i] <- arr[j], arr[j] <- arr[i]
	    // calculate address for arr[i]:  ((int*)arr+i)
	    // derefernce int: *((int*)arr+i))
	
	    return 1;
	}


void sort()
	{
		printf("Sort fuction is called\n");
		// This is test codes
		// Please modify
		Contact A[size];
		for(int i = 0; i < size; i++){
		  A[i] = PhoneBook[i];
		}
		printf("Before sorting\n");
		printArray(A, size);
		// calling actual bubble sort
		// modify this function with your arrays
		// if you implement contactCmpr() and contactSwap() well
		// this code works correctly
		sortPhoneBook(A, size,  contactCmpr, contactSwap);
		printf("After sorting\n");
		printArray(A,size);
	}


