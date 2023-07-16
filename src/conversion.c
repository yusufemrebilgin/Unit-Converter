#include "../header/conversion.h"
#include "../header/common.h"

ConversionRatio lengthRatios[] = {

    {100000,            {.length = KILOMETER}, {.length = CENTIMETER}},
    {1000,              {.length = KILOMETER}, {.length = METER}},
    {100000,            {.length = KILOMETER}, {.length = MILLIMETER}},
    {1000000,           {.length = KILOMETER}, {.length = MICROMETER}},
    {1e+12,             {.length = KILOMETER}, {.length = NANOMETER}},
    {0.6213688756,      {.length = KILOMETER}, {.length = MILE}},
    {1093.6132983,      {.length = KILOMETER}, {.length = YARD}},
    {3280.839895,       {.length = KILOMETER}, {.length = FOOT}},
    {39370.07874,       {.length = KILOMETER}, {.length = INCH}},
    {100,               {.length = METER}, {.length = CENTIMETER}},
    {1000,              {.length = METER}, {.length = MILLIMETER}},
    {1000000,           {.length = METER}, {.length = MICROMETER}},
    {1000000000,        {.length = METER}, {.length = NANOMETER}},
    {0.0006213689,      {.length = METER}, {.length = MILE}},
    {1.0936132983,      {.length = METER}, {.length = YARD}},
    {3.280839895,       {.length = METER}, {.length = FOOT}},
    {39.37007874,       {.length = METER}, {.length = INCH}},
    {10,                {.length = CENTIMETER}, {.length = MILLIMETER}},
    {10000,             {.length = CENTIMETER}, {.length = MICROMETER}},
    {10000000,          {.length = CENTIMETER}, {.length = NANOMETER}},
    {0.0000062137,      {.length = CENTIMETER}, {.length = MILE}},
    {0.010936133,       {.length = CENTIMETER}, {.length = YARD}},
    {0.032808399,       {.length = CENTIMETER}, {.length = FOOT}},
    {0.3937007874,      {.length = CENTIMETER}, {.length = INCH}},
    {1000,              {.length = MILLIMETER}, {.length = MICROMETER}},
    {1000000,           {.length = MILLIMETER}, {.length = NANOMETER}},
    {6.213688756e-7,    {.length = MILLIMETER}, {.length = MILE}},
    {0.0010936133,      {.length = MILLIMETER}, {.length = YARD}},
    {0.0032808399,      {.length = MILLIMETER}, {.length = FOOT}},
    {0.0393700787,      {.length = MILLIMETER}, {.length = INCH}},
    {1000,              {.length = MICROMETER}, {.length = NANOMETER}},
    {6.213688756e-10,   {.length = MICROMETER}, {.length = MILE}},
    {0.0000010936,      {.length = MICROMETER}, {.length = YARD}},
    {0.0000032808,      {.length = MICROMETER}, {.length = FOOT}},
    {0.0000393701,      {.length = MICROMETER}, {.length = INCH}},
    {6.213688756e-13,   {.length = NANOMETER}, {.length = MILE}},
    {1.093613298e-9,    {.length = NANOMETER}, {.length = YARD}},
    {3.280839895e-9,    {.length = NANOMETER}, {.length = FOOT}},
    {3.937007874e-8,    {.length = NANOMETER}, {.length = INCH}},
    {1760.0065617,      {.length = MILE}, {.length = YARD}},
    {5280.019685,       {.length = MILE}, {.length = FOOT}},
    {63360.23622,       {.length = MILE}, {.length = INCH}},
    {3,                 {.length = YARD}, {.length = FOOT}},
    {36,                {.length = YARD}, {.length = INCH}},
    {12,                {.length = FOOT}, {.length = INCH}}

};

ConversionRatio areaRatios[] = {

    {1e+6,              {.area = SQUARE_KILOMETER}, {.area = SQUARE_METER}},
    {1e+10,             {.area = SQUARE_KILOMETER}, {.area = SQUARE_CENTIMETER}},
    {1e+12,             {.area = SQUARE_KILOMETER}, {.area = SQUARE_MILLIMETER}},
    {0.3861018768,      {.area = SQUARE_KILOMETER}, {.area = SQUARE_MILE}},
    {1195990.0463,      {.area = SQUARE_KILOMETER}, {.area = SQUARE_YARD}},
    {10763910.417,      {.area = SQUARE_KILOMETER}, {.area = SQUARE_FOOT}},
    {1550003100,        {.area = SQUARE_KILOMETER}, {.area = SQUARE_INCH}},
    {247.10538147,      {.area = SQUARE_KILOMETER}, {.area = ACRE}},
    {100,               {.area = SQUARE_KILOMETER}, {.area = HECTARE}},
    {10000,             {.area = SQUARE_METER}, {.area = SQUARE_CENTIMETER}},
    {1000000,           {.area = SQUARE_METER}, {.area = SQUARE_MILLIMETER}},
    {3.861018768e-7,    {.area = SQUARE_METER}, {.area = SQUARE_MILE}},
    {1.1959900463,      {.area = SQUARE_METER}, {.area = SQUARE_YARD}},
    {10.763910417,      {.area = SQUARE_METER}, {.area = SQUARE_FOOT}},
    {1550.0031,         {.area = SQUARE_METER}, {.area = SQUARE_INCH}},
    {0.0002471054,      {.area = SQUARE_METER}, {.area = ACRE}},
    {0.0001,            {.area = SQUARE_METER}, {.area = HECTARE}},
    {100,               {.area = SQUARE_CENTIMETER}, {.area = SQUARE_MILLIMETER}},
    {3.861018768e-11,   {.area = SQUARE_CENTIMETER}, {.area = SQUARE_MILE}},
    {0.000119599,       {.area = SQUARE_CENTIMETER}, {.area = SQUARE_YARD}},
    {0.001076391,       {.area = SQUARE_CENTIMETER}, {.area = SQUARE_FOOT}},
    {0.15500031,        {.area = SQUARE_CENTIMETER}, {.area = SQUARE_INCH}},
    {2.471053814e-8,    {.area = SQUARE_CENTIMETER}, {.area = ACRE}},
    {1e-8,              {.area = SQUARE_CENTIMETER}, {.area = HECTARE}},
    {3.861018768e-13,   {.area = SQUARE_MILLIMETER}, {.area = SQUARE_MILE}},
    {0.000001196,       {.area = SQUARE_MILLIMETER}, {.area = SQUARE_YARD}},
    {0.0000107639,      {.area = SQUARE_MILLIMETER}, {.area = SQUARE_FOOT}},
    {0.0015500031,      {.area = SQUARE_MILLIMETER}, {.area = SQUARE_INCH}},
    {2.471053814,       {.area = SQUARE_MILLIMETER}, {.area = ACRE}},
    {9.999999999e-11,   {.area = SQUARE_MILLIMETER}, {.area = HECTARE}},
    {3097602.26,        {.area = SQUARE_MILE}, {.area = SQUARE_YARD}},
    {27878420.34,       {.area = SQUARE_MILE}, {.area = SQUARE_FOOT}},
    {4014492529.0,      {.area = SQUARE_MILE}, {.area = SQUARE_INCH}},
    {640.00046695,      {.area = SQUARE_MILE}, {.area = ACRE}},
    {258.999,           {.area = SQUARE_MILE}, {.area = HECTARE}},
    {9.0,               {.area = SQUARE_YARD}, {.area = SQUARE_FOOT}},
    {1296,              {.area = SQUARE_YARD}, {.area = SQUARE_INCH}},
    {0.0002066116,      {.area = SQUARE_YARD}, {.area = ACRE}},
    {0.0000836127,      {.area = SQUARE_YARD}, {.area = HECTARE}},
    {144,               {.area = SQUARE_FOOT}, {.area = SQUARE_INCH}},
    {0.0000229568,      {.area = SQUARE_FOOT}, {.area = ACRE}},
    {0.0000092903,      {.area = SQUARE_FOOT}, {.area = HECTARE}},
    {1.594225079e-7,    {.area = SQUARE_INCH}, {.area = ACRE}},
    {6.4516e-8,         {.area = SQUARE_INCH}, {.area = HECTARE}},
    {0.4046856422,      {.area = ACRE}, {.area = HECTARE}}

};

ConversionRatio volumeRatios[] = {

    {0.8326741846,      {.volume = GALLON_US}, {.volume = GALLON_BK}},
    {3.78541,           {.volume = GALLON_US}, {.volume = LITER}},
    {3785.41,           {.volume = GALLON_US}, {.volume = MILLILITER}},
    {3785.41,           {.volume = GALLON_US}, {.volume = CUBIC_CENTIMER}},
    {0.00378541,        {.volume = GALLON_US}, {.volume = CUBIC_METER}},
    {9.081685531e-13,   {.volume = GALLON_US}, {.volume = CUBIC_MILE}},
    {0.0049511294,      {.volume = GALLON_US}, {.volume = CUBIC_YARD}},
    {0.1336804926,      {.volume = GALLON_US}, {.volume = CUBIC_FOOT}},
    {230.99989113,      {.volume = GALLON_US}, {.volume = CUBIC_INCH}},
    {4.54609,           {.volume = GALLON_BK}, {.volume = LITER}},
    {4546.09,           {.volume = GALLON_BK}, {.volume = MILLILITER}},
    {4546.09,           {.volume = GALLON_BK}, {.volume = CUBIC_CENTIMER}},
    {0.00454609,        {.volume = GALLON_BK}, {.volume = CUBIC_METER}},
    {1.090664992e-12,   {.volume = GALLON_BK}, {.volume = CUBIC_MILE}},
    {0.0059460612,      {.volume = GALLON_BK}, {.volume = CUBIC_YARD}},
    {0.1605436532,      {.volume = GALLON_BK}, {.volume = CUBIC_FOOT}},
    {277.41943279,      {.volume = GALLON_BK}, {.volume = CUBIC_INCH}},
    {1000,              {.volume = LITER}, {.volume = MILLILITER}},
    {1000,              {.volume = LITER}, {.volume = CUBIC_CENTIMER}},
    {0.001,             {.volume = LITER}, {.volume = CUBIC_METER}},
    {2.399127585e-13,   {.volume = LITER}, {.volume = CUBIC_MILE}},
    {0.0013079506,      {.volume = LITER}, {.volume = CUBIC_YARD}},
    {0.0353146667,      {.volume = LITER}, {.volume = CUBIC_FOOT}},
    {61.023744095,      {.volume = LITER}, {.volume = CUBIC_INCH}},
    {1,                 {.volume = MILLILITER}, {.volume = CUBIC_CENTIMER}},
    {0.000001,          {.volume = MILLILITER}, {.volume = CUBIC_METER}},
    {2.399127585e-16,   {.volume = MILLILITER}, {.volume = CUBIC_MILE}},
    {0.000001308,       {.volume = MILLILITER}, {.volume = CUBIC_YARD}},
    {0.0000353147,      {.volume = MILLILITER}, {.volume = CUBIC_FOOT}},
    {0.0610237441,      {.volume = MILLILITER}, {.volume = CUBIC_INCH}},
    {0.000001,          {.volume = CUBIC_CENTIMER}, {.volume = CUBIC_METER}},
    {2.399127585e-16,   {.volume = CUBIC_CENTIMER}, {.volume = CUBIC_MILE}},
    {0.000001308,       {.volume = CUBIC_CENTIMER}, {.volume = CUBIC_YARD}},
    {0.0000353147,      {.volume = CUBIC_CENTIMER}, {.volume = CUBIC_FOOT}},
    {0.0610237441,      {.volume = CUBIC_CENTIMER}, {.volume = CUBIC_INCH}},
    {2.399127585e-10,   {.volume = CUBIC_METER}, {.volume = CUBIC_MILE}},
    {1.3079506193,      {.volume = CUBIC_METER}, {.volume = CUBIC_YARD}},
    {35.314666721,      {.volume = CUBIC_METER}, {.volume = CUBIC_FOOT}},
    {61023.744095,      {.volume = CUBIC_METER}, {.volume = CUBIC_INCH}},
    {5451776000,        {.volume = CUBIC_MILE}, {.volume = CUBIC_YARD}},
    {147197952000,      {.volume = CUBIC_MILE}, {.volume = CUBIC_FOOT}},
    {254358061055996,   {.volume = CUBIC_MILE}, {.volume = CUBIC_INCH}},
    {27,                {.volume = CUBIC_YARD}, {.volume = CUBIC_FOOT}},
    {46656,             {.volume = CUBIC_YARD}, {.volume = CUBIC_INCH}},
    {1728,              {.volume = CUBIC_FOOT}, {.volume = CUBIC_INCH}},

};

ConversionRatio massRatios[] = {

    {1000,          {.mass = KILOGRAM}, {.mass = GRAM}},
    {1000000,       {.mass = KILOGRAM}, {.mass = MILLIGRAM}},
    {0.001,         {.mass = KILOGRAM}, {.mass = TON}},
    {2.2046244202,  {.mass = KILOGRAM}, {.mass = POUND}},
    {35.273990723,  {.mass = KILOGRAM}, {.mass = OUNCE}},
    {1000,          {.mass = GRAM}, {.mass = MILLIGRAM}},
    {0.000001,      {.mass = GRAM}, {.mass = TON}},
    {0.0022046244,  {.mass = GRAM}, {.mass = POUND}},
    {0.0352739907,  {.mass = GRAM}, {.mass = OUNCE}},
    {1e-9,          {.mass = MILLIGRAM}, {.mass = TON}},
    {0.0000022046,  {.mass = MILLIGRAM}, {.mass = POUND}},
    {0.000035274,   {.mass = MILLIGRAM}, {.mass = OUNCE}},
    {2204.6244202,  {.mass = TON}, {.mass = POUND}},
    {35273.990723,  {.mass = TON}, {.mass = OUNCE}},
    {16,            {.mass = POUND}, {.mass = OUNCE}},

};

ConversionRatio dataRatios[] = {

    {0.125,             {.data = _BIT}, {.data = _BYTE}},
    {0.0009765625,      {.data = _BIT}, {.data = _KILOBIT}},
    {0.0001220703,      {.data = _BIT}, {.data = _KILOBYTE}},
    {9.536743164e-7,    {.data = _BIT}, {.data = _MEGABIT}},
    {1.192092895e-7,    {.data = _BIT}, {.data = _MEGABYTE}},
    {9.313225746e-10,   {.data = _BIT}, {.data = _GIGABIT}},
    {1.164153218e-10,   {.data = _BIT}, {.data = _GIGABYTE}},
    {9.094947017e-13,   {.data = _BIT}, {.data = _TERABIT}},
    {1.136868377e-13,   {.data = _BIT}, {.data = _TERABYTE}},
    {0.0078125,         {.data = _BYTE}, {.data = _KILOBIT}},
    {0.0009765625,      {.data = _BYTE}, {.data = _KILOBYTE}},
    {0.0000076294,      {.data = _BYTE}, {.data = _MEGABIT}},
    {9.536743164e-7,    {.data = _BYTE}, {.data = _MEGABYTE}},
    {7.450580596e-9,    {.data = _BYTE}, {.data = _GIGABIT}},
    {9.313225746e-10,   {.data = _BYTE}, {.data = _GIGABYTE}},
    {7.275957614e-12,   {.data = _BYTE}, {.data = _TERABIT}},
    {9.094947017e-13,   {.data = _BYTE}, {.data = _TERABYTE}},
    {0.125,             {.data = _KILOBIT}, {.data = _KILOBYTE}},
    {0.0009765625,      {.data = _KILOBIT}, {.data = _MEGABIT}},
    {0.0001220703,      {.data = _KILOBIT}, {.data = _MEGABYTE}},
    {9.536743164e-7,    {.data = _KILOBIT}, {.data = _GIGABIT}},
    {1.192092895e-7,    {.data = _KILOBIT}, {.data = _GIGABYTE}},
    {9.313225746e-10,   {.data = _KILOBIT}, {.data = _TERABIT}},
    {1.164153218e-10,   {.data = _KILOBIT}, {.data = _TERABYTE}},
    {0.0078125,         {.data = _KILOBYTE}, {.data = _MEGABIT}},
    {0.0009765625,      {.data = _KILOBYTE}, {.data = _MEGABYTE}},
    {0.0000076294,      {.data = _KILOBYTE}, {.data = _GIGABIT}},
    {9.536743164e-7,    {.data = _KILOBYTE}, {.data = _GIGABYTE}},
    {7.450580596e-9,    {.data = _KILOBYTE}, {.data = _TERABIT}},
    {9.313225746e-10,   {.data = _KILOBYTE}, {.data = _TERABYTE}},
    {0.125,             {.data = _MEGABIT}, {.data = _MEGABYTE}},
    {0.0009765625,      {.data = _MEGABIT}, {.data = _GIGABIT}},
    {0.0001220703,      {.data = _MEGABIT}, {.data = _GIGABYTE}},
    {9.536743164e-7,    {.data = _MEGABIT}, {.data = _TERABIT}},
    {1.192092895e-7,    {.data = _MEGABIT}, {.data = _TERABYTE}},
    {0.0078125,         {.data = _MEGABYTE}, {.data = _GIGABIT}},
    {0.0009765625,      {.data = _MEGABYTE}, {.data = _GIGABYTE}},
    {0.0000076294,      {.data = _MEGABYTE}, {.data = _TERABIT}},
    {9.536743164e-7,    {.data = _MEGABYTE}, {.data = _TERABYTE}},
    {0.125,             {.data = _GIGABIT}, {.data = _GIGABYTE}},
    {0.0009765625,      {.data = _GIGABIT}, {.data = _TERABIT}},
    {0.0001220703,      {.data = _GIGABIT}, {.data = _TERABYTE}},
    {0.0078125,         {.data = _GIGABYTE}, {.data = _TERABIT}},
    {0.0009765625,      {.data = _GIGABYTE}, {.data = _TERABYTE}},
    {0.125,             {.data = _TERABIT}, {.data = _TERABYTE}},

};

double *inputValue(void (*coordFunction)(int,int), int x, int y){
    static double val = 0;
    coordFunction(x, y);
    if (scanf("%lf", &val) != 1) {
        clearscreen();
        fprintf(stderr, "Invalid Input\n");
        exit(EXIT_FAILURE);
    }
        
    return &val;
}

double *convertLength(unsigned short src, unsigned short dest, const double *val){
    
    size_t i;
    static double result = 0.0;

    for (i = 0 ; i < sizeof(lengthRatios) / sizeof(ConversionRatio) ; ++i) {

        if (src == lengthRatios[i].src.length && dest == lengthRatios[i].dest.length) {
            result = *val * lengthRatios[i].ratio;
            break;
        }
        else if (src == lengthRatios[i].dest.length && dest == lengthRatios[i].src.length) {
            result = *val / lengthRatios[i].ratio;
            break;
        } 
        else 
            result = *val;

    }
    
    return &result;
}

double *convertTemperature(unsigned short src, unsigned short dest, const double *val){

    size_t i;
    static double result = 0.0;

    if (src == CELCIUS && dest == KELVIN) 
        result = *val + 273.15;
    else if (src == KELVIN && dest == CELCIUS)
        result = *val - 273.15;
    else if (src == CELCIUS && dest == FAHRENHEIT)
        result = (*val * 9/5) + 32;
    else if (src == FAHRENHEIT && dest == CELCIUS)
        result = 5/9 * (*val - 32);
    else if (src == KELVIN && dest == FAHRENHEIT)
        result = (9/5 * *val) - 459.67;
    else if (src == FAHRENHEIT && dest == KELVIN)
        result = 5/9 * (*val + 459.67);
    else
        result = *val;

    return &result;
}

double *convertArea(unsigned short src, unsigned short dest, const double *val){

    size_t i;
    static double result = 0.0;

    for (i = 0 ; i < sizeof(areaRatios) / sizeof(ConversionRatio) ; ++i) {

        if (src == areaRatios[i].src.area && dest == areaRatios[i].dest.area) {
            result = *val * areaRatios[i].ratio;
            break;
        }
        else if (src == areaRatios[i].dest.area && dest == areaRatios[i].src.area) {
            result = *val / areaRatios[i].ratio;
            break;
        }
        else
            result = *val;

    }
    
    return &result;
}

double *convertVolume(unsigned short src, unsigned short dest, const double *val){

    size_t i;
    static double result = 0.0;

    for (i = 0 ; i < sizeof(volumeRatios) / sizeof(ConversionRatio) ; ++i) {

        if (src == volumeRatios[i].src.volume && dest == volumeRatios[i].dest.volume) {
            result = *val * volumeRatios[i].ratio;
            break;
        }   
        else if (src == volumeRatios[i].dest.volume && dest == volumeRatios[i].src.volume) {
            result = *val / volumeRatios[i].ratio;
            break;
        }
        else
            result = *val;

    }
    
    return &result;
}

double *convertMass(unsigned short src, unsigned short dest, const double *val){

    size_t i;
    static double result = 0.0;

    for (i = 0 ; i < sizeof(massRatios) / sizeof(ConversionRatio) ; ++i) {

        if (src == massRatios[i].src.mass && dest == massRatios[i].dest.mass) {
            result = *val * massRatios[i].ratio;
            break;
        }
        else if (src == massRatios[i].dest.mass && dest == massRatios[i].src.mass) {
            result = *val / massRatios[i].ratio;
            break;
        }
        else
            result = *val;

    }
    
    return &result;
}

double *convertData(unsigned short src, unsigned short dest, const double *val){

    size_t i;
    static double result = 0.0;

    for (i = 0 ; i < sizeof(dataRatios) / sizeof(ConversionRatio) ; ++i) {

        if (src == dataRatios[i].src.data && dest == dataRatios[i].dest.data) {
            result = *val * dataRatios[i].ratio;
            break;
        } 
        else if (src == dataRatios[i].dest.data && dest == dataRatios[i].src.data) {
            result = *val / dataRatios[i].ratio;
            break;
        }
        else
            result = *val;

    }
    
    return &result;
}

void printConversionResult(const double *result, void (*coordFunction)(int,int), int x, int y){

    coordFunction(x, y);
    
    if (*result == (unsigned long long)*result && *result  < ULLONG_MAX) 

        if (*result < 1e+15)
            printf("%llu", (unsigned long long)*result);
        else
            printf("%.2e", *result);
    
    else if (*result > 1e+15 || *result < 1e-4)
        printf("%.2e", *result);
    else
        printf("%.4lf", *result);

    getch();
}

void printUnitName(unsigned short unit, Menu unitType, void (*coordFunction)(int,int), int x, int y){

    const char *lengthUnitTable[] = {
        "Kilometer","Meter","Centimeter","Millimeter","Micrometer",
        "Nanometer","Mile","Yard","Foot","Inch"
    };
    const char *temperatureUnitTable[] = {
        "Celcius","Kelvin","Fahrenheit"
    };
    const char *areaUnitTable[] = {
        "Square Kilometer","Square Meter","Square Centimeter","Square Millimeter",
        "Square Mile","Square Yard","Square Foot","Square Inch","Acre","Hectare"
    };
    const char *volumeUnitTable[] = {
        "US Gallon","BK Gallon","Liter","Milliliter","Cubic Centimeter","Cubic Meter",
        "Cubic Mile","Cubic Yard","Cubic Foot","Cubic Inch"
    };
    const char *massUnitTable[] = {
        "Kilogram","Gram","Milligram","Ton","Pound","Ounce"
    };
    const char *dataUnitTable[] = {
        "Bit","Byte","Kilobit","Kilobyte","Megabit","Megabyte","Gigabit","Gigabyte",
        "Terabit","Terabyte"
    };

    const char **unitTables[] = {
        lengthUnitTable, temperatureUnitTable, areaUnitTable, volumeUnitTable, massUnitTable, dataUnitTable
    };

    coordFunction(x, y);
    printf("%s", unitTables[unitType - 1][unit - 1]);
}