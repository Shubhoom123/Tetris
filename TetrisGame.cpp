#include <raylib.h>
#include "grid.h"
int main()
{
    InitWindow(600, 900, "Tetris Game"); //Initialized the Window Dimensions
    SetTargetFPS(120); //Might Change to 60
    Texture2D background = LoadTexture("background.jpg"); //Added Texture

    Grid grid = Grid(); //Declare Grid Object
    grid.Print(); //Check if initializing is correct

    while(WindowShouldClose() == false) // Game Loop Main
    {
        BeginDrawing(); //Start
        DrawTexture(background,-50,-60,WHITE); //Begin Texture
        grid.Draw();
        EndDrawing(); //Finish
    }
    UnloadTexture(background); //Finalize Texture
    CloseWindow(); //Close Window Complete
    return 0;
}