#pragma once
#include <vetcor>
#include <raylib.h>

class Grid{
public:
    Grid();
    void Initialize();
    void Print();
    int grid[20][10];
private:
    int numRows;
    int numCols;
    int cellSize;
    std::vector<Color> colors;
};