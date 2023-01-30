STD=c99

CXX=gcc
CXXFLAGS=-std=${std} -Werror -Wall -Wpedantic -MMD

OBJECTS=main.o color.o bitmap.o png.o
DEPENDS=${OBJECTS:.o=.d}
EXEC=a.out

${EXEC}: ${OBJECTS}
	${CXX} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC}
