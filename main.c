#include <avr/io.h>
#include <util/delay.h>


int main() {

    // Set Data Direction Register to 1 (output)
    DDRB = DDRB | (1 << DDB5);

    while (1) 
    {
        // Set Data Register to 1
        PORTB = PORTB | (1 << PORTB5);
        _delay_ms(1000);

        // Set Data Register to 0
        PORTB = PORTB & ~(1 << PORTB5);
        _delay_ms(1000);

    }

    return 0;
}