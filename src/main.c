#include "../header/common.h"
#include "../header/conversion.h"

void menu(void);

int main(void){

    menu();

    return 0;
}

void menu(void){

    double *value, *result;
    unsigned short choice, from, to;

    while (true) {
        
        clearscreen();
        gotoxy(COORD_X,COORD_Y);
        header(HEADER_SIZE, 1, "UNIT CONVERTER");
        printAtCoordinates("\xBA\xB3 Length          [1]",   gotoxy, COORD_X + 27, COORD_Y + 3);
        printAtCoordinates("\xBA\xB3 Temperature     [2]",   gotoxy, COORD_X + 27, COORD_Y + 5);
        printAtCoordinates("\xBA\xB3 Area            [3]",   gotoxy, COORD_X + 27, COORD_Y + 7);
        printAtCoordinates("\xBA\xB3 Volume          [4]",   gotoxy, COORD_X + 27, COORD_Y + 9);
        printAtCoordinates("\xBA\xB3 Mass            [5]",   gotoxy, COORD_X + 27, COORD_Y + 11);
        printAtCoordinates("\xBA\xB3 Data            [6]",   gotoxy, COORD_X + 27, COORD_Y + 13);
        printAtCoordinates("\xBA\xB3 Press [0] for exit.",   gotoxy, COORD_X + 27, COORD_Y + 16);
        gotoxy(COORD_X + 27, COORD_Y + 19);

        while (choice = getch())
            if (choice >= '0' && choice <= '6')
                break;

        switch ((Menu)(choice - '0')) {

            case LENGTH:
                clearscreen();
                gotoxy(COORD_X,COORD_Y);
                header(HEADER_SIZE + 4, 1, "LENGTH");
                printAtCoordinates("\xB3 From: ", gotoxy, COORD_X + 10, COORD_Y + 3);
                printAtCoordinates("\xB3 To:   ", gotoxy, COORD_X + 10, COORD_Y + 5);
                printAtCoordinates("\xBA\xB3 Kilometer     [1]",  gotoxy, COORD_X + 9, COORD_Y + 8);
                printAtCoordinates("\xBA\xB3 Meter         [2]",  gotoxy, COORD_X + 9, COORD_Y + 10);
                printAtCoordinates("\xBA\xB3 Centimeter    [3]",  gotoxy, COORD_X + 9, COORD_Y + 12);
                printAtCoordinates("\xBA\xB3 Milimeter     [4]",  gotoxy, COORD_X + 9, COORD_Y + 14);
                printAtCoordinates("\xBA\xB3 Micrometer    [5]",  gotoxy, COORD_X + 9, COORD_Y + 16);
                printAtCoordinates("\xBA\xB3 Nanometer     [6]",  gotoxy, COORD_X + 47, COORD_Y + 8);
                printAtCoordinates("\xBA\xB3 Mile          [7]",  gotoxy, COORD_X + 47, COORD_Y + 10);
                printAtCoordinates("\xBA\xB3 Yard          [8]",  gotoxy, COORD_X + 47, COORD_Y + 12);
                printAtCoordinates("\xBA\xB3 Foot          [9]",  gotoxy, COORD_X + 47, COORD_Y + 14);
                printAtCoordinates("\xBA\xB3 Inch          [10]", gotoxy, COORD_X + 47, COORD_Y + 16);
                gotoxy(COORD_X + 20, COORD_Y + 3);
                getMenuInput(&from, 2, 10);
                printUnitName(from, LENGTH, gotoxy, COORD_X + 20, COORD_Y + 3);
                gotoxy(COORD_X + 20, COORD_Y + 5);
                getMenuInput(&to,   2, 10);
                printUnitName(to, LENGTH, gotoxy, COORD_X + 20, COORD_Y + 5);
                printAtCoordinates("\xB3 Input:   ", gotoxy, COORD_X + 48, COORD_Y + 3);
                printAtCoordinates("\xB3 Result:  ", gotoxy, COORD_X + 48, COORD_Y + 5);
                value = inputValue(gotoxy, COORD_X + 58, COORD_Y + 3);
                result = convertLength(from, to, value);
                printConversionResult(result, gotoxy, COORD_X + 58, COORD_Y + 5);
                break;

            case TEMPERATURE:
                clearscreen();
                gotoxy(COORD_X,COORD_Y);
                header(HEADER_SIZE + 1, 1, "TEMPERATURE");
                printAtCoordinates("\xB3 From: ", gotoxy, COORD_X + 10, COORD_Y + 3);
                printAtCoordinates("\xB3 To:   ", gotoxy, COORD_X + 10, COORD_Y + 5);
                printAtCoordinates("\xBA\xB3 Celcius       [1]", gotoxy, COORD_X + 9, COORD_Y + 8);
                printAtCoordinates("\xBA\xB3 Kelvin        [2]", gotoxy, COORD_X + 9, COORD_Y + 10);
                printAtCoordinates("\xBA\xB3 Fahrenheit    [3]", gotoxy, COORD_X + 47, COORD_Y + 8);
                gotoxy(COORD_X + 19, COORD_Y + 3);
                getMenuInput(&from, 1, 3);
                printUnitName(from, TEMPERATURE, gotoxy, COORD_X + 19, COORD_Y + 3);
                gotoxy(COORD_X + 19, COORD_Y + 5);
                getMenuInput(&to  , 1, 3);
                printUnitName(to, TEMPERATURE, gotoxy, COORD_X + 19, COORD_Y + 5);
                printAtCoordinates("\xB3 Input:   ", gotoxy, COORD_X + 48, COORD_Y + 3);
                printAtCoordinates("\xB3 Result:  ", gotoxy, COORD_X + 48, COORD_Y + 5);
                value = inputValue(gotoxy, COORD_X + 58, COORD_Y + 3);
                result = convertTemperature(from, to, value);
                printConversionResult(result, gotoxy, COORD_X + 58, COORD_Y + 5);
                break;

            case AREA:
                clearscreen();
                gotoxy(COORD_X,COORD_Y);
                header(HEADER_SIZE + 5, 1, "AREA");
                printAtCoordinates("\xB3 From: ", gotoxy, COORD_X + 5, COORD_Y + 3);
                printAtCoordinates("\xB3 To:   ", gotoxy, COORD_X + 5, COORD_Y + 5);
                printAtCoordinates("\xBA\xB3 Square Kilometer   [1]",  gotoxy, COORD_X + 4, COORD_Y + 8);
                printAtCoordinates("\xBA\xB3 Square Meter       [2]",  gotoxy, COORD_X + 4, COORD_Y + 10);
                printAtCoordinates("\xBA\xB3 Square Centimeter  [3]",  gotoxy, COORD_X + 4, COORD_Y + 12);
                printAtCoordinates("\xBA\xB3 Square Millimeter  [4]",  gotoxy, COORD_X + 4, COORD_Y + 14);
                printAtCoordinates("\xBA\xB3 Square Mile        [5]",  gotoxy, COORD_X + 4, COORD_Y + 16);
                printAtCoordinates("\xBA\xB3 Square Yard        [6]",  gotoxy, COORD_X + 47, COORD_Y + 8);
                printAtCoordinates("\xBA\xB3 Square Foot        [7]",  gotoxy, COORD_X + 47, COORD_Y + 10);
                printAtCoordinates("\xBA\xB3 Square Inch        [8]",  gotoxy, COORD_X + 47, COORD_Y + 12);
                printAtCoordinates("\xBA\xB3 Acre               [9]",  gotoxy, COORD_X + 47, COORD_Y + 14);
                printAtCoordinates("\xBA\xB3 Hectare            [10]", gotoxy, COORD_X + 47, COORD_Y + 16);
                gotoxy(COORD_X + 15, COORD_Y + 3);
                getMenuInput(&from, 2, 10);
                printUnitName(from, AREA, gotoxy, COORD_X + 15, COORD_Y + 3);
                gotoxy(COORD_X + 15, COORD_Y + 5);
                getMenuInput(&to  , 2, 10);
                printUnitName(to, AREA, gotoxy, COORD_X + 15, COORD_Y + 5);
                printAtCoordinates("\xB3 Input:   ", gotoxy, COORD_X + 48, COORD_Y + 3);
                printAtCoordinates("\xB3 Result:  ", gotoxy, COORD_X + 48, COORD_Y + 5);
                value = inputValue(gotoxy, COORD_X + 58, COORD_Y + 3);
                result = convertArea(from, to, value);
                printConversionResult(result, gotoxy, COORD_X + 58, COORD_Y + 5);
                break;

            case VOLUME:
                clearscreen();
                gotoxy(COORD_X,COORD_Y);
                header(HEADER_SIZE + 4, 1, "VOLUME");
                printAtCoordinates("\xB3 From: ", gotoxy, COORD_X + 5, COORD_Y + 3);
                printAtCoordinates("\xB3 To:   ", gotoxy, COORD_X + 5, COORD_Y + 5);
                printAtCoordinates("\xBA\xB3 US Gallon          [1]",  gotoxy, COORD_X + 4, COORD_Y + 8);
                printAtCoordinates("\xBA\xB3 BK Gallon          [2]",  gotoxy, COORD_X + 4, COORD_Y + 10);
                printAtCoordinates("\xBA\xB3 Liter              [3]",  gotoxy, COORD_X + 4, COORD_Y + 12);
                printAtCoordinates("\xBA\xB3 Milliliter         [4]",  gotoxy, COORD_X + 4, COORD_Y + 14);
                printAtCoordinates("\xBA\xB3 Cubic Centimeter   [5]",  gotoxy, COORD_X + 4, COORD_Y + 16);
                printAtCoordinates("\xBA\xB3 Cubic Meter        [6]",  gotoxy, COORD_X + 47, COORD_Y + 8);
                printAtCoordinates("\xBA\xB3 Cubic Mile         [7]",  gotoxy, COORD_X + 47, COORD_Y + 10);
                printAtCoordinates("\xBA\xB3 Cubic Yard         [8]",  gotoxy, COORD_X + 47, COORD_Y + 12);
                printAtCoordinates("\xBA\xB3 Cubic Foot         [9]",  gotoxy, COORD_X + 47, COORD_Y + 14);
                printAtCoordinates("\xBA\xB3 Cubic Inch         [10]", gotoxy, COORD_X + 47, COORD_Y + 16);
                gotoxy(COORD_X + 15, COORD_Y + 3);
                getMenuInput(&from, 2, 10);
                printUnitName(from, VOLUME, gotoxy, COORD_X + 15, COORD_Y + 3);
                gotoxy(COORD_X + 15, COORD_Y + 5);
                getMenuInput(&to  , 2, 10);
                printUnitName(to, VOLUME, gotoxy, COORD_X + 15, COORD_Y + 5);
                printAtCoordinates("\xB3 Input:   ", gotoxy, COORD_X + 48, COORD_Y + 3);
                printAtCoordinates("\xB3 Result:  ", gotoxy, COORD_X + 48, COORD_Y + 5);
                value = inputValue(gotoxy, COORD_X + 58, COORD_Y + 3);
                result = convertVolume(from, to, value);
                printConversionResult(result, gotoxy, COORD_X + 58, COORD_Y + 5);
                break;

            case MASS:
                clearscreen();
                gotoxy(COORD_X,COORD_Y);
                header(HEADER_SIZE + 5, 1, "MASS");
                printAtCoordinates("\xB3 From: ", gotoxy, COORD_X + 9, COORD_Y + 3);
                printAtCoordinates("\xB3 To:   ", gotoxy, COORD_X + 9, COORD_Y + 5);
                printAtCoordinates("\xBA\xB3 Kilogram       [1]", gotoxy, COORD_X + 8, COORD_Y + 8);
                printAtCoordinates("\xBA\xB3 Gram           [2]", gotoxy, COORD_X + 8, COORD_Y + 10);
                printAtCoordinates("\xBA\xB3 Milligram      [3]", gotoxy, COORD_X + 8, COORD_Y + 12);
                printAtCoordinates("\xBA\xB3 Ton            [4]", gotoxy, COORD_X + 47, COORD_Y + 8);
                printAtCoordinates("\xBA\xB3 Pound          [5]", gotoxy, COORD_X + 47, COORD_Y + 10);
                printAtCoordinates("\xBA\xB3 Ounce          [6]", gotoxy, COORD_X + 47, COORD_Y + 12);
                gotoxy(COORD_X + 19, COORD_Y + 3);
                getMenuInput(&from, 1, 6);
                printUnitName(from, MASS, gotoxy, COORD_X + 19, COORD_Y + 3);
                gotoxy(COORD_X + 19, COORD_Y + 5);
                getMenuInput(&to  , 1, 6);
                printUnitName(to, MASS, gotoxy, COORD_X + 19, COORD_Y + 5);
                printAtCoordinates("\xB3 Input:   ", gotoxy, COORD_X + 48, COORD_Y + 3);
                printAtCoordinates("\xB3 Result:  ", gotoxy, COORD_X + 48, COORD_Y + 5);
                value = inputValue(gotoxy, COORD_X + 58, COORD_Y + 3);
                result = convertMass(from, to, value);
                printConversionResult(result, gotoxy, COORD_X + 58, COORD_Y + 5);
                break;

            case DATA:
                clearscreen();
                gotoxy(COORD_X,COORD_Y);
                header(HEADER_SIZE + 5, 1, "DATA");
                printAtCoordinates("\xB3 From: ", gotoxy, COORD_X + 13, COORD_Y + 3);
                printAtCoordinates("\xB3 To:   ", gotoxy, COORD_X + 13, COORD_Y + 5);
                printAtCoordinates("\xBA\xB3 Bit        [1]",  gotoxy, COORD_X + 12, COORD_Y + 8);
                printAtCoordinates("\xBA\xB3 Byte       [2]",  gotoxy, COORD_X + 12, COORD_Y + 10);
                printAtCoordinates("\xBA\xB3 Kilobit    [3]",  gotoxy, COORD_X + 12, COORD_Y + 12);
                printAtCoordinates("\xBA\xB3 Kilobyte   [4]",  gotoxy, COORD_X + 12, COORD_Y + 14);
                printAtCoordinates("\xBA\xB3 Megabit    [5]",  gotoxy, COORD_X + 12, COORD_Y + 16);
                printAtCoordinates("\xBA\xB3 Megabyte   [6]",  gotoxy, COORD_X + 47, COORD_Y + 8);
                printAtCoordinates("\xBA\xB3 Gigabit    [7]",  gotoxy, COORD_X + 47, COORD_Y + 10);
                printAtCoordinates("\xBA\xB3 Gigabyte   [8]",  gotoxy, COORD_X + 47, COORD_Y + 12);
                printAtCoordinates("\xBA\xB3 Terabit    [9]",  gotoxy, COORD_X + 47, COORD_Y + 14);
                printAtCoordinates("\xBA\xB3 Terabyte   [10]", gotoxy, COORD_X + 47, COORD_Y + 16);
                gotoxy(COORD_X + 23, COORD_Y + 3);
                getMenuInput(&from, 2, 10);
                printUnitName(from, DATA, gotoxy, COORD_X + 23, COORD_Y + 3);
                gotoxy(COORD_X + 23, COORD_Y + 5);
                getMenuInput(&to  , 2, 10);
                printUnitName(to, DATA, gotoxy, COORD_X + 23, COORD_Y + 5);
                printAtCoordinates("\xB3 Input:   ", gotoxy, COORD_X + 48, COORD_Y + 3);
                printAtCoordinates("\xB3 Result:  ", gotoxy, COORD_X + 48, COORD_Y + 5);
                value = inputValue(gotoxy, COORD_X + 58, COORD_Y + 3);
                result = convertData(from, to, value);
                printConversionResult(result, gotoxy, COORD_X + 58, COORD_Y + 5);
                break;

            case EXIT:
                clearscreen();
                exit(EXIT_SUCCESS);

        }

    }
    
}