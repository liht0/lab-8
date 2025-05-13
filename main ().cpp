#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct human {
	char name[20];
	char fname[30];
	int year;
	int N;
} human;

void sortyear(human, int N){
	int i, j;
	for (i = 0; i < N-1; i++){
		for (j = 0; j < N-i; j++){
			if (h[j].year>h[j+1].year){
				temp = h[j];
				h[j] = h[j+1];
				h[j+1] = temp;
			}
		}
	}
}

int main() {
	struct human *h1, *h2;
	int i, j, N = 0;
	FILE *in = fopen("input.txt", "r");
	char buf[256], buf1[30], buf2[30];
	int year;
	
	while (fgets(buf, 256, in)! = NULL){
		N++;
	}
	printf("sting is : %d", N);
	rewind(in);
	h1 = malloc(sizeof(struct human)*N);
	h2 = malloc(sizeof(struct human)*N);	
	while(fscanf(in, "%s %s %d", h1[i].fname, h1[i].name, &h1[i].year)! = EOF){
		printf("%s %s %d \n", h1[i].fname, h1[i].name, h1[i].year);
		h2[i] = h1[i];
		i++;
	}

	int prsort = 0;
	printf("Input parametr to sort: 1-name, 2-fname, 3-year");
	scanf("%d", &prsort);
	
	switch (prsort){
		case 1:{
			
			break;
		}
		case 2:{
			
			break;
			
			default {
				printf("Error input , please ")
				break;
			}
		}
		
	free(h1);
	free(h2);
	fclose(in);
	return 0;
}	
