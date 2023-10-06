#include <stdio.h>

int main()
{
	int n, totaln=0, totalm=1;
	int i, j=2;
	char boolean;

	for(i=1; i<=j; i++)
	{
		printf("Inserte un numero: ");
		scanf(" %d", &n);
		
		totaln = totaln + n;
		totalm = totalm * n;

		printf("¿Desea ingresar otro valor?(Y/N) ");
		scanf(" %c", &boolean);
		if(boolean=='Y' || boolean=='y' || boolean=='N' || boolean=='n')
		{
		if(boolean=='Y' || boolean=='y')
		{
			j++;
		}
		else 
		{
			printf("La cantidad de valores que ingresaste son: %d\n", i);
			printf("La suma de todos ellos es: %d\n", totaln);
			printf("La multiplicacion de todos ellos es: %d\n", totalm);
			return 1;
		}
		}
		else
		{
			printf("ERROR: Valor incorrecto\n");
			printf("La cantidad de valores que ingresaste son: %d\n", i);
			printf("La suma de todos ellos es: %d\n", totaln);
			printf("La multiplicacion de todos ellos es: %d\n", i);
			return 1;
		}
	}

	return 0;
}
