# include <stdio.h>
# include <omp.h>
# define RAND_MAX 32767
int isPrimeNum(int n);
int main() {

	arrPrimeNum(10);
	return 0;
}

// return a prime array
void arrPrimeNum(int length) {
	int a[length];
	srand((int)time(0)); 
	for(int i = 0; int < length; i++) {
		a[i] = (rand()) % length;
	}

	for(int i = 0; i<10; i++) {
		int isPN = isPrimeNum(a[i]);
		if(isPN == 0) {
			printf("%d is not Prime number.\n", a[i]);
		} else {
			printf("%d is Prime number.\n", a[i]);
		}
	}
}

// decide if the number is prime number
// return 1: is prime number ,  else return 0
int isPrimeNum(int n) {

	for(int i=2; i<n; i++) {
		if(n % i == 0) {
			return 0;
		}
	}
	return 1;
}