#include <stdio.h>

void main() {
	int i, j;
	int k=0;
	int A[5][5] = { 0 };

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			k++;
			if(i%2 ==0)
				A[i][j] = k;
			else
				A[i][4-j] = k;
		}
	}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d\t", A[i][j]);
		}
		printf("\n");
	}
}
