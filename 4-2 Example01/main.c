#include <stdio.h>

int main() {
	int a = 2147483647;
	printf("a : %d \n", a);

	a++;
	printf("a : %d \n", a);

	return 0;
}

/*

int = -2147483648 ~ 2147483647 
int는 4byte (0xFFFF_FFFF)에서

2진수 1000을 반전(0111)한 후  1을 더하면(1000) 그대로 1000이기 때문에
음수는 양수보다 한 개 더 많다.

*/