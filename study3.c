#include <stdio.h>
int main(){
	int i;
	int j;
	for(i=0;i<9;i++){
		if(i<5){
			for(j=1;j<5-i;j++){
				printf(" ");
			}
			for(j;j>=5-i&&j<=5+i;j++){
				printf("*");
			}
		}
		else if(i>=5){
			for(j=1;j<i-3;j++){
				printf(" ");
			}
			for(j;j>=i-3&&j<=13-i;j++){
				printf("*");
			}
		}
	printf("\n");
	}	
	return 0;
}