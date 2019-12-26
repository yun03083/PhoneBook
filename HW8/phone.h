// array of sturcure
#include <stddef.h>
#include <string.h>

typedef struct contact_st
{
    char Name[10];
    char PhoneNumber[13];
    struct contact_st* next;
} Contact;

extern Contact* list;
