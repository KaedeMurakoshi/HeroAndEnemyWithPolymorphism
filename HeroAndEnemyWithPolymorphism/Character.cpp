#include"Character.h"
#include <iostream>

void Character::Attack(Character& other)
{
	int damage = GetAtk() - other.GetDef();
	int hp = other.GetHp() - damage;

	// HP���O�����ɂȂ�����O�ɂ���
	if (hp < 0) { hp = 0; }
	// �����HP���X�V
	other.SetHp(hp);
}

void Character::Heal()
{
	printf("�񕜂��܂�\n");
	++_hp;
}