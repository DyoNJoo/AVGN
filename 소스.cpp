#include <stdio.h>
static int park[2][3] = { {1, 2}, {3, 4, 5} };
int main(void)
{
	int i, j;
	float sum = 0;
	float avg;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", park[i][j]);
			sum += park[i][j];
		}
	}
	avg = sum / (float)(i * j);
	printf("\nSum = %f Avg = %f\n", sum, avg);
	return 0;
}

//°á±£°ª : 1 2 0 3 4 5
//Sum = 15.000000 Avg = 2.5000000