#include <stdio.h>
#include <stdlib.h>

int
main(void)
{
	printf("Введите номер задачи(2 или 5)\n");
	int num;
	scanf("%d",&num);
	switch(num){
		case 2:
			printf("Имеется m операторов и n перенумерованных приборов,которые они могут обслуживать.\n Каждый оператор выбирает случайным образом и с одинаковой \n вероятностью любой прибор, но с условием,\n что ни один прибор не может обслуживаться больше, чем одним оператором.\n Найти вероятность того, что будут выбраны для обслуживания приборы с номерами 1, 2, …, m.\n");
					
		break;
		case 5:
		break;
		default:
		break;
	}
	return 0;
}