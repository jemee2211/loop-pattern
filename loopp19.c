#include<stdio.h>
main(){
	
	
	int r,c;
	int a = 0;
	
	for(r=1; r<=5; r++){
		for(c=1; c<=r; c++){	
		
		a=r+c;		
			printf("%d",a);
		}
			printf("\n");
	}

}
