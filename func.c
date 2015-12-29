#include <stdio.h>

int add(a, b);
int minus(a, b);
int middle(a, b, c);
float div(float a, float b);

int main(){
	int num1=add(4, 6);
	int num2=minus( 7, 3);
	int num3=middle(5, 3, 9);
	float num4=div(2.12, 1.01);
	printf("%d %d %d %f", num1, num2, num3, num4); //print 10, 4, 5
	return 0;
}

int add(a, b){
	int f=a+b;
	return f;
}

int minus(a, b){
	int f=a-b;
	return f;
}

int middle(a,b,c){
	int f;
	if(a>b&&a<c||a>c&&a<b){
		f=a;
	}
	if(b>a&&b<c||b>c&&b<a){
		f=b;
	}
	if(c>a&&c<b||c>b&&c<a){
		f=c;
	}
	return f;
}
float div(float a,float b){
	float f=a/b;
	return f;
}