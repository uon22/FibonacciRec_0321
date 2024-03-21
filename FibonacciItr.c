#include <stdio.h>

int fibonacci_itr(int n);

main() {
	int fibonacci = 0;

	fibonacci = fibonacci_itr(6);
	printf(" Fibonacci 6 = %d\n", fibonacci);
}

int fibonacci_itr(int n) {
	int result = 0; //결과 값 처음은 0
	int n_2 = 0, n_1 = 1; //n보다 2, 1 앞에 있는 값은

	if (n <= 1) return n;
	for (int i = 2; i <= n; i++) {
		result = n_1 + n_2;
		n_2 = n_1; //2,1 코드 순서 바뀌면 안됨
		n_1 = result;
	}
	return result;
}