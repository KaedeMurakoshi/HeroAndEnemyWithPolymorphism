#include"Character.h"
#include <iostream>

void Character::Attack(Character& other)
{
	int damage = GetAtk() - other.GetDef();
	int hp = other.GetHp() - damage;

	// HPが０未満になったら０にする
	if (hp < 0) { hp = 0; }
	// 相手のHPを更新
	other.SetHp(hp);
}

void Character::Heal()
{
	printf("回復します\n");
	++_hp;
}