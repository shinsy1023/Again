#include <stdio.h>
#include <stdlib.h>

typedef struct human{
	int age;
	char sex;
	int weight;
	float eye;
}human;

int main(){

	struct human *JW=(human*)malloc(sizeof(human));
	JW->age=20;
	JW->sex='M';
	JW->weight=70;
	JW->eye=5.0;
	struct human *SY=(human*)malloc(sizeof(human));
	SY->age=99;
	SY->sex='M';
	SY->weight=68;
	SY->eye=0.1;
	printf("Jiwoong\'s age is %d\nJiwoong\'s sex is %c\nJiwoong\'s weight is %d\nJiwoong\'s eye is %f\nSY\'s age is %d\nSY\'s sex is %c\nSY\'s weight is %d\nSY\'s eye is %f\n",JW->age,JW->sex,JW->weight,JW->eye,SY->age,SY->sex,SY->weight,SY->eye);
	return 0;
}