#include<stdio.h>
void main() {
	int figure, figure5, figure7, figure57;
	printf("5~100���Ա�5��7�������У�");
	for (figure = 5; figure <= 100; figure++) {
		if (figure % 5 == 0 && figure % 7 !=0) {	//�жϽṹ������Ա�5�������������Ӧ���
			figure5 = figure;
			printf("%d ", figure5);
		}
		else if (figure % 7 == 0 && figure % 5 != 0) {
			figure7 = figure;
			printf(" %d ", figure7);
		}
	}
}