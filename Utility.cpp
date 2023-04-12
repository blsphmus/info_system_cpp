#include "Utility.h"


void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void InitializeSettings() {
    SetConsoleOutputCP( 65001 );
    system("title Information system prototype");
    ::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000); //fullscreen
    //system("mode con cols=129 lines=32");
}

string KeyCheck(int Key) {
    if (Key == 'w' or Key == 'W' or Key == 230 or Key == 150) {
        return "w";
    }
    if (Key == 'a' or Key == 'A' or Key == 228 or Key == 148)  {
        return "a";
    }
    if (Key == 's' or Key == 'S' or Key == 235 or Key == 155) {
        return "s";
    }
    if (Key == 'd' or Key == 'D' or Key == 162 or Key == 130) {
        return "d";
    }
    if (Key == 13){
        return "enter";
    }
    if (Key == 'e' or Key == 'E' or Key == 227 or Key == 147) {
        return "e";
    }
    if (Key == 27) {
        return "esc";
    }
    if(Key == 9){
        return "tab";
    }
}

bool in_range(char *buff, const char *max) {
    int lb = strlen(buff), lm = strlen(max);
    return (lb != lm) ? (lb < lm) : strcmp(max, buff) >= 0;
}