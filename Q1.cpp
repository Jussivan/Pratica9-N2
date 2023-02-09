#include <stdio.h>

int f(int n);
int main() {
	int num, r;
	scanf("%d", &num);
	r = f(num);
	if(r == -1) printf("Entrada Inv�lida");
	else printf("%d", f(num));
	return 0;
}
/*
	Fun��o: Calcular Fibonacci
	Entrada: n inteiro
	Sa�da: Fibonacci de n, se n > 0, se n < 0, ent�o a Entrada � Inv�lida
*/
int f(int n) {
	if(n < 0) return -1;
	if(n == 0) return 0;
	if(n == 1) return 1;
	return f(n - 1) + f(n - 2);
}
