#include <ArdClass.h>

#include <Arduino.h>
#include <limits.h>

int main(void)
{
    init();

#if defined(USBCON)
    USBDevice.attach();
#endif

    setup();

    for (;;)
    {
        loop();
        if (serialEventRun)
            serialEventRun();
    }

    return 0;
}

ArdClass c;

enum class Baudrate
{
    br9600 = 9600,
    br600 = 600,
    br1200 = 1200,
    br2400 = 2400,
    br4800 = 4800,
    br19200 = 19200
    // br38400 = 38400
};

void setup()
{
    Serial.begin((long)Baudrate::br9600);    
}

void loop()
{
    c.printVersion();
    delay(1000);
}
