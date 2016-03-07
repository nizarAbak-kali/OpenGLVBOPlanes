CC=gcc
FLAGS= -lglut -lGL -lGLU -lm
SRC= main.c LoadBMP.c
OBJ=$(SRC:%.c=%.o)

simulateur:	$(OBJ)
		$(CC) $^ -o $@ $(FLAGS)

%.o:	%.c
	$(CC) -c -o $@ $^ $(FLAGS)

clean:	
	rm -f $(OBJ)
	rm -f *~
	rm -f *#
	rm -f 
