#include <avr/io.h>
#include <util/delay.h>

int main()
{
	DDRA = 0xff;
	while(1)
	{
		PORTB = 0x10;
		_delay_ms(100);
		PORTB = 0x00;
		_delay_ms(100);
		
	}

	return 0;
}
