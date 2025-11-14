#include "raylib.h"
#include <string>

#include "SelectName.h"
#include "AskColor.h"

using namespace std;

int main()
{
    InitWindow(600, 600, "Puissance 4");

    SetTargetFPS(60);

    string pseudo = AskName();
     AskColor();

    CloseWindow();
    return 0;
}
