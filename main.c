#include <msp430.h>
#include <libemb/serial/serial.h>
#include <libemb/conio/conio.h>

int MyMult(int, int);

int main(void)
{
    WDTCTL  = WDTPW | WDTHOLD;
    BCSCTL1 = CALBC1_1MHZ;
    DCOCTL  = CALDCO_1MHZ;

    serial_init(9600);

    cio_printf("MyMult(9, 4): %i\n\r", MyMult(9, 4));


    return 0;
}
