#include<stdio.h>

//A computer program displays all multiplication table from 1 to 10. Use nested loops. 

int main(){
	
	int i,j;
	
	
	for(i=1;i<=10;i++){
		for(j=1;j<=10;j++){
			int multp=i*j;
			printf("%d x %d=%d\n",i,j,multp);
			multp=0;
		}
		printf("******************\n");
	}
	
	return 0;
}

