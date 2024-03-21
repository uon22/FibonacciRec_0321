﻿#include <stdio.h>

void hanoi_tower(int n, char from, char tmp, char to) { //char=문자열
	if (n == 1) printf("원판 1을 %c에서 %c로 옮긴다\n", from, to);
	else {
		hanoi_tower(n - 1, from, to, tmp);
		printf("원판 %d을 %c에서 %c로 옮긴다\n", n, from, to);
		hanoi_tower((n - 1), tmp, from, to);
	}
}

int main() {
	hanoi_tower(4, 'A', 'B', 'C');
}