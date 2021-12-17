#include "ArdClass.h"

void ArdClass::printVersion()
{
    
    Serial.println(this->classVersion);
}

// explicit class adClass(int para) {}
ArdClass::ArdClass()
{
    this->classVersion = 100;
}

ArdClass::~ArdClass()
{

}