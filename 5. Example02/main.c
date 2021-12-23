#include <stdio.h>

int main() {
	double celsius;

	printf("섭씨 온도를 화씨 온도로 바꿔주는 프로그램 입니다. \n");
	printf("섭씨 온도를 입력하세요. : ");
	scanf_s("%lf", &celsius);

	printf("화씨 온도는 %f 도 입니다. \n", 9 * celsius / 5 + 32);

	return 0;
}