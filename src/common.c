#include "../header/common.h"

void gotoxy(int x, int y){

    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void header(size_t numberOfCh, unsigned int milliseconds, const char *text){
    size_t i;
    for (i = 0 ; i < numberOfCh ; ++i) {
        printf("%c", 219);
        Sleep(milliseconds);
    }

    printf(" %s ", text);

    for (i = 0 ; i < numberOfCh ; ++i) {
        printf("%c", 219);
        Sleep(milliseconds);
    }
}

void printAtCoordinates(const char *text, void (*coordFunction)(int,int), int x, int y){
    coordFunction(x, y);
    printf("%s", text);
}

void getMenuInput(unsigned short *var, size_t numberOfInput, size_t numberOfOption){

    *var = 0;

    int ch, limit1, limit2;
    size_t i = 0;

    fflush(stdin);

    if (numberOfOption <= 9)
        limit1 = numberOfOption + '0';
    else {
        limit1 = '9';
        limit2 = numberOfOption % 10 + '0';
    }

    while (i < numberOfInput) {
        ch = getch();
        if (ch >= '0' && ch <= '9') {
            if (i == 0 && ch > '0' && ch <= limit1)
                *var += ch - '0';
            else if (i > 0 && ch <= limit2 && *var == 1)
                *var = *var * 10 + ch - '0';
            else
                continue;
            putchar(ch);
            ++i;
        }
        else if (ch == '\b' && i != 0) {
            printf("\b \b");
            --i;
            *var = (*var - *var % 10) / 10;
        }
        else if (ch == '\r')
            break;
    }
}