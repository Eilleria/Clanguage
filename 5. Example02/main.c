#include <stdio.h>

int main() {
	double celsius;

	printf("���� �µ��� ȭ�� �µ��� �ٲ��ִ� ���α׷� �Դϴ�. \n");
	printf("���� �µ��� �Է��ϼ���. : ");
	scanf_s("%lf", &celsius);

	printf("ȭ�� �µ��� %f �� �Դϴ�. \n", 9 * celsius / 5 + 32);

	return 0;
}