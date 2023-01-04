#include "mbed.h"

DigitalOut ledPin(D13);

// main() runs in its own thread in the OS
int main()
{
    while (true) {
        ledPin.write(1);
        thread_sleep_for(1000);
        ledPin.write(0);
        thread_sleep_for(1000);   
    }
}

