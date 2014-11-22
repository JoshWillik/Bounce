CC=g++
CFLAGS=-c -Wall -std=c++14
LDFLAGS=-lglfw
SOURCES=main.cpp game.cpp glfw.cpp window.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=bounce
BUILD=build

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	mkdir -p $(BUILD)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $(BUILD)/$@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o $(BUILD)
