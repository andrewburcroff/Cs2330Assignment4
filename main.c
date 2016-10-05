#include <msp430.h>
#include <libemb/serial/serial.h>
#include <libemb/conio/conio.h>

int min(int, int);

int main(void)
{
    WDTCTL  = WDTPW | WDTHOLD;
    BCSCTL1 = CALBC1_1MHZ;
    DCOCTL  = CALDCO_1MHZ;

    serial_init(9600);

    cio_printf("min(9, 2): %i\n\r", min(9, 2));
    cio_printf("min(1, 2): %i\n\r", min(1, 2));
    cio_printf("min(4, 4): %i\n\r", min(4, 4));
    cio_printf("min(-1, -2): %i\n\r", min(-1, -2));
    cio_printf("min(-1, 2): %i\n\r", min(-1, 2));

    for(;;);

    return 0;
}
