#include <stdio.h>
#include <stdlib.h>

int main(){
	int *a;
	int i=0;
	a=(int*)malloc(sizeof(int));
	a[0]=1287;
	while (1){
		if (a[i]!=0){
			printf("%d\n", a[i]);
		}
		i++;
	}
	return 0;
}