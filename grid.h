#pragma once // Ensure this file is included only once

#include <vector>
#include <raylib.h> // Include Raylib for rendering

class Grid
{
public:
    Grid();                // Constructor to initialize the grid
    void Initialize();     // Initialize grid values
    void Print();          // Print the grid (for debugging)
    void Draw();           // Draw the grid to the screen

private:
    int grid[20][10];      // 2D array representing the grid (20 rows x 10 columns)
    int numRows;           // Number of rows in the grid
    int numCols;           // Number of columns in the grid
    int cellSize;          // Size of each cell in pixels
    std::vector<Color> colors; // Colors for Tetris blocks

    std::vector<Color> GetCellColors(); // Helper to initialize Tetris colors
};