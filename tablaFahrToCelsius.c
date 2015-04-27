/* Genera la tabla de Fahr to Celsius
   Protto, Walter Fabián
   26/04/2015 */
  
#include<stdio.h>
float getCelsius (int unsigned);

main (void)
{
const int lower = 0;
const int upper = 300;
const int step = 20;
int unsigned fahr;

printf("Tabla de Fahr to Celsius\n\n");
for (fahr = lower;fahr <= upper;fahr += step)
	printf("%3d %6.2f\n",fahr,getCelsius (fahr));			
}		

float getCelsius(unsigned int fahr)
{
return (5.0/9.0)*(fahr-32.0);
}
