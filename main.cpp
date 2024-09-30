#include <stdio.h>
#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleOutputCP(65001);
	char str[] = "キョウゲンソ";
	printf("%s\n", str);
	return 0;
}