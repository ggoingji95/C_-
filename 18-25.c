#include <stdio.h>

void gugu (int gu)
{
	int i;
	for(i=1; i<10; i++){

	printf("%2dX%2d=%2d\n", gu, i, (gu *i));

	}
}

void main()
{
	int dan;
	printf("����ϰ� ���� ���� �Է��ϼ���");
	scanf("%d", &dan);
	gugu(dan);
}
