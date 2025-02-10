#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include "Vector3.h"
#include "Enemy.h"

int main() {

	Enemy* enemy = new Enemy();

	enemy->Init();

	while (true)
	{
		enemy->Update();
	}



	return 0;
}

