# Compiler and Flags
CC = g++
CFLAGS = -Wall -std=c++17 -I/opt/homebrew/include
LDFLAGS = -L/opt/homebrew/lib -lraylib

# Target Executable
TARGET = TetrisGame

# Source Files
SRC = TetrisGame.cpp

# Build Rules
all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(SRC) -o $(TARGET) $(CFLAGS) $(LDFLAGS)

clean:
	rm -f $(TARGET)
