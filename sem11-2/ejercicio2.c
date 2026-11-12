#include <stdio.h>

enum Mes { // Los enums comienzan con 0
	ENERO = 1,
	FEBRERO = 2,
	MARZO = 3,
	ABRIL = 4,
	MAYO = 5,
	JUNIO = 6,
	JULIO = 7,
	AGOSTO = 8,
	SEPTIEMBRE = 9,
	OCTUBRE = 10,
	NOVIEMBRE = 11,
	DICIEMBRE = 12
}

main(void) {
	int mes = 6;

	switch (mes) {
		case ENERO:
			printf("Enero\n");
			break;
		case FEBRERO:
			printf("Febrero\n");
			break;
		case MARZO:
			printf("Marzo\n");
			break;
		case ABRIL:
			printf("Abril\n");
			break;
		case MAYO:
			printf("Mayo\n");
			break;
		case JUNIO:
			printf("Junio\n");
			break;
		case JULIO:
			printf("Julio\n");
			break;
		case AGOSTO:
			printf("Agosto\n");
			break;
		case SEPTIEMBRE:
			printf("Septiembre\n");
			break;
		case OCTUBRE:
			printf("Octubre\n");
			break;
		case NOVIEMBRE:
			printf("Noviembre\n");
			break;
		case DICIEMBRE:
			printf("Diciembre\n");
			break;

			return 0;
	}
}