#include "raylib.h"
#include "AskColor.h"

using namespace std;

void AskColor()
{
    string pseudo = "";
    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(WHITE);
        DrawText("Choisissez une couleur :", 150, 285, 30, DARKBLUE);
        DrawCircle(175, 350, 25, YELLOW);
        DrawCircle(250, 350, 25, RED);
        DrawCircle(325, 350, 25, BLUE);
        DrawCircle(400, 350, 25, GREEN);

        EndDrawing();
    }
}