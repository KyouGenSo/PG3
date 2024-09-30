#include <stdio.h>
#include <iostream>

template <typename T>
T Min(T a, T b) {
	return static_cast<T>(a < b ? a : b);
}

template <>
char Min<char>(char a, char b) {
	printf("数字以外は代入できません\n");
	return 0;
}

int main() {
	int a = 10, b = 20;
	printf("Min(%d, %d) = %d\n", a, b, Min<int>(a, b));

	float c = 10.5f, d = 20.5f;
	printf("Min(%f, %f) = %f\n", c, d, Min<float>(c, d));

	double e = 10.5, f = 20.5;
	printf("Min(%f, %f) = %f\n", e, f, Min<double>(e, f));

	char g = 'a', h = 'b';
	printf("Min(%c, %c) = %c\n", g, h, Min<char>(g, h));

	return 0;
}