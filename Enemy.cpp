#include "Enemy.h"
#include <stdio.h>
#include <iostream>

void(Enemy::* const Enemy::pPhaseFunctionTable_[])() = {
	&Enemy::Aproach, // 要素番号0
	&Enemy::Attack,// 要素番号1
	&Enemy::Leave,	// 要素番号1
};

void Enemy::Init()
{
	velocity_ = { 0.f, 0.f, 0.f };
	position_ = { 0.f, 0.f, 0.f };
}

void Enemy::Update()
{
	(this->*pPhaseFunctionTable_[static_cast<size_t>(phase_)])();
}

void Enemy::Aproach()
{
	printf("Phase: Aproach\n");
	velocity_.z = 1.f;
	position_ += velocity_;

	printf("Position: %f, %f, %f\n", position_.x, position_.y, position_.z);

	if (position_.z >= 10.f)
	{
		phase_ = Phase::Attack;
	}
}

void Enemy::Attack()
{
	printf("Phase: Attack\n");

	phase_ = Phase::Leave;
}

void Enemy::Leave()
{
	printf("Phase: Leave\n");
	velocity_.z = -1.f;
	position_ += velocity_;
	printf("Position: %f, %f, %f\n", position_.x, position_.y, position_.z);
	if (position_.z <= 0.f)
	{
		phase_ = Phase::Aproach;
	}
}
