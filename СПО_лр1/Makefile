.PHONY: run clean

# Env variables

# ------
CC=gcc
CFLAGS=-c
SOURCES=main.c error.c tree.c pars.tab.c lex.yy.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=printer
# ------


# Targets

run: $(EXECUTABLE)
	chmod +x $(EXECUTABLE)
	./$(EXECUTABLE) input/inputFile.txt > resultDiagramm/diagram.md

generate-resources: rules/lex.l rules/parser.y
	flex rules/lex.l
	bison -d -t rules/parser.y
	echo '#include "tree.h"' | cat - pars.tab.h > temp && mv temp pars.tab.h

$(EXECUTABLE): $(OBJECTS) generate-resources
	$(CC) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o $(EXECUTABLE)
