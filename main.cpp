#include <stdio.h>
#include <iostream>

// ˆê”Ê“I‚È’À‹à‘ÌŒn
int RegularPay(int hours) {
	return 1072 * hours;
}

// Ä‹A“I‚È’À‹à‘ÌŒn
int RecursivePay(int hours) {
	if (hours == 0) {
		return 0;
	}

	if (hours == 1) {
		return 100;
	} else {
		return RecursivePay(hours - 1) * 2 - 50;
	}
}

int main() {
	int hours = 8;
	int regularPay = RegularPay(hours);
	int recursivePay = RecursivePay(hours);

	while (regularPay >= recursivePay) {
		hours++;
		regularPay = RegularPay(hours);
		recursivePay = RecursivePay(hours);
	}

	printf("hours: %d\n", hours);
	printf("regularPay: %d\n", regularPay);
	printf("recursivePay: %d\n", recursivePay);

	return 0;
}