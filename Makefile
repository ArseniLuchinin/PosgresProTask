CC = gcc
CFLAGS = -c -Wall

TESTS_DIR = tests
TESTS = $(TESTS_DIR)/tests
Q_E = quadratic_equation

SOURCES = $(Q_E).c $(TESTS).c
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = $(TESTS)

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

.c.o: disr
	$(CC) $(CFLAGS) $< -o $@

disr:
	mkdir -p $(OBJ_DIR)

check: 
	$(TESTS)

clean:
	rm -r *.o