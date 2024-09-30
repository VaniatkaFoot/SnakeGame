#include "Apple.h"
#include <stdlib.h>

void Apple::apple_init() 
{
	do
	{
		apple_pos_x = rand() % 80;
		apple_pos_y = rand() % 20;
	} while (apple_pos_x == 40 && apple_pos_y ==10);	
};

void Apple::apple_spawn(int prev_x, int prev_y) 
{
	do
	{
		apple_pos_x = rand() % 80;
		apple_pos_y = rand() % 20;
	} while (apple_pos_x == prev_x && apple_pos_y == prev_y);

};
