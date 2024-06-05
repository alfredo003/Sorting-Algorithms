NAME =sorting_algorithms
SRCS = ./src/*.c 
LIBS = ./lib/*.c 
HEAD = ./sorting.h
CC = gcc
RM = rm -rf
TEST = 4 1 3 6 2

all:
	@${CC} -c ${LIBS} ${HEAD}
	@${CC} ${SRCS} ${LIBS} -o ./test/${NAME}
test:
	@./${NAME} ${TEST}

clean: 
	@${RM} ${NAME} 
	
