#pragma once
#include"Character.h"
#include"Enemy.h"

class Hero :public Character {
public:
	Hero();			// �R���X�g���N�^
	void Attack(Enemy* enemy);
};