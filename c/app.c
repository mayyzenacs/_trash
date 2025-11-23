#include <stdio.h>
#include <stdlib.h>

// O Conversor de Tempo Crie um programa que peça ao usuário um valor em segundos (ex: 7500) e o programa deve imprimir quanto isso vale em: Horas : Minutos : Segundos.


int main(void) {

	int sec = 2500;
	//printf("enter seconds ");
	// scanf("%d", &sec);

	int hour = sec / 3600;
	int minutes = sec / 60;
	float seconds = sec % 60;
	printf("%f", seconds);



	return 0;
}
