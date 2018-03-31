#include <stdio.h>

void set_lights (unsigned char *lights);
void print_lights (unsigned char lights);


int main()
{
	unsigned char lights = 0;
	set_lights (&lights);
	print_lights (lights);
}

void set_lights (unsigned char *lights)
{
int j, answer;
unsigned char mask; 
for(j = 0, mask = 1; j < 8; j++, mask <<= 1)
{
	answer = 0;
	printf(“lights in room %d \n”, j+1);
	scanf(“%d”, &answer);
	if(answer)
		*lights |= mask;
}
}

void print_lights (unsigned char lights)
{
	 int j;
	 unsigned char mask; 
	 for(j = 0, mask = 1; j < 8; j++, mask <<= 1)
	 {
	  if(lights & mask)
	   printf("room %d is lighted \n",j+1);
	  else
	   printf("room %d is NOT lighted \n",j+1);
	 }
}

