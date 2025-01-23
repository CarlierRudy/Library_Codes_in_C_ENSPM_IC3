#include <stdio.h>
#include <unistd.h>

void progressing(int duree_ms,int longueur){
	int i;
	printf("[");
	for(i=0;i<longueur;i++){
		printf(" ");
	}
	printf("]\r[");
	fflush(stdout);
	
	int pas = duree_ms /longueur;
	for(i=0;i<longueur;i++){
		printf("#");
		fflush(stdout);
		usleep(pas*1000);
	}
//	printf("]");
}

/*int main(){
	progressing(500,50);
}*/
