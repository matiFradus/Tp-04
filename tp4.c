/* Tp 4 SSL 
*Matias Nicolas Fradusco
*10/05/2015
*/

#include <stdio.h> 

#include <stdlib.h> 

int main(void)
	{
	
	int numl; 
	int numc; 
	int car; 
	
	for(numl = 0, numc = 0; ( car = getchar()) != EOF;)
	
	    car == '\n'?++numl:++numc;
	
	!feof(stdin)?perror("Error"):NULL;
	
	printf("Longitud: %.1f\n", numc / (float)numl);
	
	return EXIT_SUCCESS;

	}