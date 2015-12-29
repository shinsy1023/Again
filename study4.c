#include <stdio.h>
int main(){
	int i;
	int j;
	for(i=0;i<4;i++){
		for(j=1;j<9;j++){
			if(j<=i||j>4&&j<8-i){
				printf(" ");
			}
			else if(j>i&&j<5||j>=8-i){
				printf("*");
			}
		}
	printf("\n");
	}
	for(i=0;i<4;i++){
		for(j=1;j<9;j++){
			if(j<5&&j>4-i||j>5+i){
				printf(" ");
			}
			else if(j<=4-i||j>4&&j<=5+i){
				printf("*");
			}
		}
	printf("\n");	
	}
return 0;
}