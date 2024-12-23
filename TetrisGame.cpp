#include <raylib.h>
int main() {
    //Defining own colors
    Color darkBlue = {44,44,127,2};

    // Making the Window
    InitWindow(500, 900, "SK Tetris");
    SetTargetFPS(120);

    //Background Page Loader
    Texture2D background = LoadTexture("background.jpg");

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