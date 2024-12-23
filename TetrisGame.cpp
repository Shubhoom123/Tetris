#include <raylib.h>
#include "grid.h"

int main() {
    //Defining own colors


    // Making the Window
    InitWindow(400, 800, "SK Tetris");
    SetTargetFPS(120);

    //Background Page Loader
    Texture2D background = LoadTexture("background.jpg");

    Grid grid = Grid();
    grid.Print();

    while(WindowShouldClose() == false){
        BeginDrawing();
        DrawTexture(background,-300,-60,WHITE);


        EndDrawing();
    }
    //Unload Texture
    UnloadTexture(background);
    // Close the window
    CloseWindow();

    return 0;
}