#include <stdio.h>
enum EstadoPedido {
	REGISTRADO,
	PAGADO,
	DESPACHADO,
	ENTREGADO,
	CANCELADO
};
struct Pedido {
	int numero;
	float monto;
	enum EstadoPedido estado;
};
int main() {
	struct Pedido p = {
		1001,
		250.50,
		DESPACHADO};
	printf("Pedido: %d\n", p.numero);

	switch (p.estado) {
		case REGISTRADO:
			printf("Registrado\n");
			break;
		case PAGADO:
			printf("Pagado\n");
			break;
		case DESPACHADO:
			printf("Despachado\n");
			break;
		case ENTREGADO:
			printf("Entregado\n");
			break;
		case CANCELADO:
			printf("Cancelado\n");
			break;
	}
	return 0;
}