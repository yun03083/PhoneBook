main: register.o search.o delete.o phoneBookMain.o
	gcc -o phoneBook register.o search.o delete.o phoneBookMain.o

register.o: register.c phoneBookMain.c phone.h
	gcc -c register.c phoneBookMain.c phone.h

search.o: search.c phoneBookMain.c phone.h
	gcc -c search.c phoneBookMain.c phone.h

delete.o: delete.c phoneBookMain.c phone.h
	gcc -c delete.c phoneBookMain.c phone.h
