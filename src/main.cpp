#include <iostream>
#include <raylib.h>
#include <raylib-tileson.h>
#define LOG(x) std::cout << x << std::endl;



int main(int argc, char* argv[]) {
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Raylib with Tileson");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second

 //INit the map
    Map map = LoadTiled(RECOURSES_PATH "Prod.json");



    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        LOG("Map creation success?");

        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(BLACK);

        DrawTiled(map, 0, 0, BLUE);

        // DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
    }
    UnloadMap(map);
}