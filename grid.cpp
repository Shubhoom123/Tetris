#include "grid.h"
#include <iostream>

// Constructor
Grid::Grid()
{
    numCols = 16;  // Adjusted number of columns
    numRows = 16;  // Adjusted number of rows
    cellSize = 35; // Adjusted cell size
    colors = GetCellColors(); // Initialize the colors for the shapes
    Initialize();
}

// Initialize the grid to all zeros
void Grid::Initialize()
{
    for (int row = 0; row < numRows; row++)
    {
        for (int col = 0; col < numCols; col++)
        {
            grid[row][col] = 0;
        }
    }
}

// Print the grid to the console (for debugging purposes)
void Grid::Print()
{
    for (int row = 0; row < numRows; row++)
    {
        for (int col = 0; col < numCols; col++)
        {
            std::cout << grid[row][col] << " ";
        }
        std::cout << std::endl;
    }
}

// Draw the grid on the screen
void Grid::Draw()
{
    int screenWidth = GetScreenWidth();
    int screenHeight = GetScreenHeight();

    int gridWidth = numCols * cellSize;
    int gridHeight = numRows * cellSize;

    // Center the grid horizontally and position it near the bottom
    int offsetX = (screenWidth - gridWidth) / 2; // Center horizontally
    int offsetY = screenHeight - gridHeight - 20; // Lower the grid

    for (int row = 0; row <= numRows; row++)
    {
        int y = offsetY + row * cellSize;
        DrawLine(offsetX, y, offsetX + gridWidth, y, DARKGRAY); // Horizontal lines
    }

    for (int col = 0; col <= numCols; col++)
    {
        int x = offsetX + col * cellSize;
        DrawLine(x, offsetY, x, offsetY + gridHeight, DARKGRAY); // Vertical lines
    }
}

// Method to initialize Tetris colors
std::vector<Color> Grid::GetCellColors()
{
    Color darkGrey = {87, 88, 87, 255};    // L
    Color green = {112, 130, 56, 255};     // S
    Color red = {180, 21, 0, 255};         // Z
    Color cyan = {16, 133, 163, 255};     // I
    Color yellow = {232, 163, 23, 255};   // O
    Color white = {245, 240, 240, 255};   // J
    Color purple = {106, 13, 173, 255};   // T

    return {darkGrey, green, red, cyan, yellow, white, purple};
}