#pragma once
#include"Character.h"
#include"Enemy.h"

class Hero :public Character {
public:
	Hero();			// コンストラクタ
	void Attack(Enemy* enemy);
};