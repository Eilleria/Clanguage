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
int�� 4byte (0xFFFF_FFFF)����

2���� 1000�� ����(0111)�� ��  1�� ���ϸ�(1000) �״�� 1000�̱� ������
������ ������� �� �� �� ����.

*/