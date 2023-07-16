#ifndef     _CONVERSION_H
#define     _CONVERSION_H

typedef enum _LengthUnits {
    KILOMETER = 1, METER, CENTIMETER, MILLIMETER, MICROMETER, NANOMETER,
    MILE, YARD, FOOT, INCH
} LengthUnits;

typedef enum _TemperatureUnits {
    CELCIUS = 1, KELVIN, FAHRENHEIT
} TemperatureUnits;

typedef enum _AreaUnits {
    SQUARE_KILOMETER = 1, SQUARE_METER, SQUARE_CENTIMETER, SQUARE_MILLIMETER,
    SQUARE_MILE, SQUARE_YARD, SQUARE_FOOT, SQUARE_INCH, ACRE, HECTARE 
} AreaUnits;

typedef enum _VolumeUnits {
    GALLON_US = 1, GALLON_BK, LITER, MILLILITER, CUBIC_CENTIMER, CUBIC_METER,
    CUBIC_MILE, CUBIC_YARD, CUBIC_FOOT, CUBIC_INCH
} VolumeUnits;

typedef enum _MassUnits {
    KILOGRAM = 1, GRAM, MILLIGRAM, TON, POUND, OUNCE
} MassUnits;

typedef enum _DataUnits {
    _BIT = 1, _BYTE, _KILOBIT, _KILOBYTE, _MEGABIT, _MEGABYTE, _GIGABIT, _GIGABYTE,
    _TERABIT, _TERABYTE
} DataUnits;

typedef enum _Menu {
    EXIT, LENGTH, TEMPERATURE, AREA, VOLUME, MASS, DATA
} Menu;

typedef struct _Unit {
    LengthUnits length;
    TemperatureUnits temperature;
    AreaUnits area;
    VolumeUnits volume;
    MassUnits mass;
    DataUnits data;
} Unit;

typedef struct _ConversionRatio {
    double ratio;
    Unit src;
    Unit dest;
} ConversionRatio;


double *inputValue(void (*coordFunction)(int,int), int x, int y);
double *convertLength(unsigned short src, unsigned short dest, const double *val);
double *convertTemperature(unsigned short src, unsigned short dest, const double *val);
double *convertArea(unsigned short src, unsigned short dest, const double *val);
double *convertVolume(unsigned short src, unsigned short dest, const double *val);
double *convertMass(unsigned short src, unsigned short dest, const double *val);
double *convertData(unsigned short src, unsigned short dest, const double *val);
void printConversionResult(const double *result, void (*coordFunction)(int,int), int x, int y);
void printUnitName(unsigned short unit, Menu unitType, void (*coordFunction)(int,int), int x, int y);


#endif