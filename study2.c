#include <stdio.h>

	int main(){

		int i;
		int j;
		for(i=2;i<10;i++){for(j=1;j<10;j++){printf("%dX%d=%d ",i,j,i*j);if(j==3||j==6||j==9){printf("\n");}}printf("\n");}return 0;}