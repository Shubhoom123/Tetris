#include <raylib.h>

int main()
{
    InitWindow(600, 900, "Tetris Game");
    SetTargetFPS(120);
    Texture2D background = LoadTexture("background.jpg");

    while(WindowShouldClose() == false)
    {
        BeginDrawing();
        DrawTexture(background,-50,-60,WHITE);
        EndDrawing();
    }
    UnloadTexture(background);
    CloseWindow();
    return 0;
}