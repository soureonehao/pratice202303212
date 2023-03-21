#include<stdio.h>
void main() {
	int figure, figure5, figure7, figure57;
	printf("5~100可以被5或7除的数有：");
	for (figure = 5; figure <= 100; figure++) {
		if (figure % 5 == 0 && figure % 7 !=0) {	//判断结构，如可以被5整除，则输出相应结果
			figure5 = figure;
			printf("%d ", figure5);
		}
		else if (figure % 7 == 0 && figure % 5 != 0) {
			figure7 = figure;
			printf(" %d ", figure7);
		}
	}
}