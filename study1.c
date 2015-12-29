#include <stdio.h>

int main(){
	int i;
	int j;
	for (i=0;i<5; i++){
		for(j=1; j<=5+i; j++){
			if (j>=5-i){
				printf("*");
			}else if (j<5-i){
				printf(" ");
			}
		}
		printf("\n");
	}	
	return 0;
}