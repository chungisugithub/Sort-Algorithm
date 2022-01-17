#include <stdio.h>
int A[5] = { 8,5,6,2,4 };
void Print() {
	// 출력
	for (int i = 0; i < 5; i++) {
		printf("%d ", A[i]);
	}
	printf("\n");
}

void main() {
	int i, j, k, key;
	
	j = 0;
	//do {
		//scanf("%d", &A[j]);
		//j = j + 1;
	//} while (j <= 4);
	// 위 입력

	for (i = 1; i <= 4; i++) {
		key = A[i];
		printf("key = %d\n", key);
		Print();
		for ( k = i - 1; k >= 0; k--) {
			if (A[k] > key) {
				A[k + 1] = A[k];
				Print();
			}
			else
				break;
		}
		A[k + 1] = key;
		printf("k: %d\n", k);
		Print();
	}

	Print();
}


