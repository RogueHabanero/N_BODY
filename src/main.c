#include <stdlib.h>
#include <stdint.h>
#include <raylib.h>
#include <time.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

#define WINDOW_HEIGHT 720
#define WINDOW_WIDTH 1280

#define TITLE "N_BODY"

int main(void){

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, TITLE);

    puts("Window Created");

    BeginDrawing();

    puts("Drawing Started");

    //--------------
    sleep(5);
    //--------------

    EndDrawing();

    return 0;
}
