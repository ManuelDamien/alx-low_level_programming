#include "main.h"
/**
 * jack_bauer - function that prints every minute of Jack bauer's day, starting
 * from 00:00 to 23:59, min loop counts min, while hour loop counts hours and
 * and resets mins
 * Return: 0 when successful
 */
void jack_bauer(void)
{
	int hrs = 0;
	int mins = 0;
	int hrs_rmnder;
	int mins_rmnder;

	while (hrs <= 23)
	{
		while (mins <= 59)
		{
			mins_rmnder = mins % 10;
			hrs_rmnder = hrs % 10;
			_putchar(hrs / 10 + '0');
			_putchar(hrs_rmnder + '0');
			_putchar(':');
			_putchar(mins / 10 + '0');
			_putchar(mins_rmnder + '0');
			mins++;
			_putchar('\n');
		}
		hrs++;
		mins = 0;
	}
}
