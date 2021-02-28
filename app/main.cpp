#include <iostream>
#include "pico/stdlib.h"
#include "led.h"

int main()
{
    stdio_init_all();
    std::cout << "Starting LED\n";
    LED led;
    while (true)
    {
        std::cout << "Blinking...\n";
        led.blink(250);
        sleep_ms(1000);
    }
    return 0;
}