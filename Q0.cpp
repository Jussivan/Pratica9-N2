#include <stdio.h>

int fatorial(int n);
int main() {
	int num, r;
	scanf("%d", &num);
	r = fatorial(num);
	if(r == -1) printf("Entrada Inválida");
	else printf("%d", fatorial(num));
	return 0;
}
/*
	Função: Calcular Fatorial
	Entrada: n inteiro
	Saída: Fatorial de n, se n > 0 ou -1, se n < 0
*/
int fatorial(int n) {
	if(n == 0) return 1;
	if(n > 0) return fatorial(n-1) * n;
	return -1;
}
