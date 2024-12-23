# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++17 -I/opt/homebrew/include
LDFLAGS = -L/opt/homebrew/lib -lraylib

# Source files and target
SRC = TetrisGame.cpp grid.cpp
HEADERS = grid.h
TARGET = TetrisGame

# Default target
all: $(TARGET)

# Linking
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)

# Clean the build
clean:
	rm -f $(TARGET)

# Rebuild
rebuild: clean all
