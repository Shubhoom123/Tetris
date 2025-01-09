CXX = g++
CXXFLAGS = -Wall -std=c++17 -I/opt/homebrew/include
LDFLAGS = -L/opt/homebrew/lib -lraylib

OBJS = grid.o TetrisGame.o

all: TetrisGame

TetrisGame: $(OBJS)
	$(CXX) $(OBJS) $(LDFLAGS) -o TetrisGame

grid.o: grid.cpp grid.h
	$(CXX) $(CXXFLAGS) -c grid.cpp

TetrisGame.o: TetrisGame.cpp grid.h
	$(CXX) $(CXXFLAGS) -c TetrisGame.cpp

clean:
	rm -f *.o TetrisGame