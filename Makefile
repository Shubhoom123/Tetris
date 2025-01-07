# Compiler and Flags
CXX = g++
CXXFLAGS = -Wall -std=c++17 -I/opt/homebrew/include
LDFLAGS = -L/opt/homebrew/lib -lraylib

# Object Files
OBJS = grid.o TetrisGame.o

# Output Executable
TARGET = TetrisGame

# Build Rules
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) $(LDFLAGS) -o $(TARGET)

grid.o: grid.cpp grid.h
	$(CXX) $(CXXFLAGS) -c grid.cpp -o grid.o

TetrisGame.o: TetrisGame.cpp grid.h
	$(CXX) $(CXXFLAGS) -c TetrisGame.cpp -o TetrisGame.o

# Clean Rule
clean:
	rm -f $(OBJS) $(TARGET)