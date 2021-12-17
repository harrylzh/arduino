#ifndef ADCLASS_H
#define ADCLASS_H
/* header begin */
#if defined(ARDUINO) && (ARDUINO >= 100)
#include <Arduino.h>
#else
#include <WProgram.h>
#endif


class ArdClass
{
private:
    int classVersion;

public:
    // explicit class adClass(int para);
    ArdClass();
    ~ArdClass();
    void printVersion();
};





/* header end */
#endif