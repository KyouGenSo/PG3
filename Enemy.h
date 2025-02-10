#pragma once
#include "Vector3.h"

class Enemy {
public:
	void Init();

	void Update();

	void Aproach();
	void Attack();
	void Leave();

private:
	// 関数ポインター配列
	static void(Enemy::* const pPhaseFunctionTable_[])();

	enum class Phase {
		Aproach,
		Attack,
		Leave,
	};

	Phase phase_ = Phase::Aproach;

	Vector3 velocity_;
	Vector3 position_;
};