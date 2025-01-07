#include <raylib.h>

int main()
{
    InitWindow(600, 900, "Tetris Game");
    SetTargetFPS(120);
    while(WindowShouldClose() == false)
    {
        BeginDrawing();
        EndDrawing();
    }
    CloseWindow();
}