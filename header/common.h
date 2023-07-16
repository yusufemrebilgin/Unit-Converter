#ifndef _COMMON_H
#define _COMMON_H


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <windows.h>
#include <limits.h>

#define COORD_X 65
#define COORD_Y 5
#define HEADER_SIZE 30

#define clearscreen(void) system("cls");

void gotoxy(int x, int y);
void header(size_t numberOfCh, unsigned int milliseconds, const char *str);
void printAtCoordinates(const char *text, void (*coordFunction)(int,int), int x, int y);
void getMenuInput(unsigned short *var, size_t numberOfInput, size_t numberOfOption);


#endif