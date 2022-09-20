#include <stdio.h>
#include <math.h>

float f(float x) {
	return (x*x) - 5;
}

float derivative(float x) { 
	return 2*x;
}



int main() {
	float x; 
	int i = 1, n; 
printf("Name : Mihir Aswal\n RollNo: 38 \n StudentId: 20011587\n");
	printf("Equation : x*x -5\n");
	printf("FIRST APPROXIMATION: ");
	scanf("%f", &x);

	printf("ITERATIONS: ");
	scanf("%d", &n);

	while(i <= n) {
		x = x - f(x)/derivative(x);
		i++;
	}

	printf("APPROXIMATE ROOT: %f \n", x);
	return 0;
}

