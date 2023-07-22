#ifndef     COMMON_H
#define     COMMON_H

#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <windows.h>

#define COORD_X 65
#define COORD_Y 5
#define HEADER_SIZE 30

#define clearscreen(void) system("cls");


void gotoxy(int x, int y);
void header(size_t numberOfCh, unsigned int milliseconds, const char *str);
void printAtCoordinates(int coordX, int coordY, int numOfLines, ...);
void getMenuChoice(unsigned short *var, size_t numberOfInput, size_t numberOfChoice);


#endif