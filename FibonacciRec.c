#include <stdio.h>
//순환버전
int fibonacci_rec(int n); //fibonacci int 함수형태 미리 알려줌

int main() {
	int fibonacci = 0; //fibonacci라는 변수 선언, 0으로 만들고 시작
	fibonacci = fibonacci_rec(6); //피보나치 저장, 호출함, 값 6 넣음
	printf("fibonacci 6 = %d\n", fibonacci); //#include <studio.h>가 있어서 printf 사용가능
}

int fibonacci_rec(int n) {	//호출당함, 변수n(int 정수형)
	printf(" f(%d) ", n); // 피보나치 계산 중간과정 출력
	if (n == 0) return 0; //n이 0이면
	else if (n == 1) return 1;
	else return (fibonacci_rec(n - 1) + fibonacci_rec(n - 2)); //자기자신 호출
}
