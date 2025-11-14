#include "raylib.h"
#include "SelectName.h"


using namespace std;

string AskName(){
    string pseudo = "";
    while (!WindowShouldClose())
    {
        int key = GetCharPressed();
        while (key > 0)
        {
            if (key >= 32 && key <= 125)
            {
                pseudo.push_back((char)key);
            }
            key = GetCharPressed();
        }

        if(IsKeyPressed(KEY_BACKSPACE) && pseudo.length() > 0){
            pseudo.pop_back();
        }

        if(IsKeyPressed(KEY_ENTER) && pseudo.length() > 0){
            return pseudo;
        }



        BeginDrawing();
        ClearBackground(WHITE);
        DrawText("Entrez votre pseudo :", 150, 285, 30, DARKBLUE);
        DrawText(pseudo.c_str(), 150, 315, 30, BLACK);

        EndDrawing();
    }
    return pseudo;
}