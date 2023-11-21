#include"Character.h"
#include <iostream>

void Character::Attack(Character& other)
{
	int damage = GetAtk() - other.GetDef();
	int hp = other.GetHp() - damage;

	// HP‚ª‚O–¢–ž‚É‚È‚Á‚½‚ç‚O‚É‚·‚é
	if (hp < 0) { hp = 0; }
	// ‘ŠŽè‚ÌHP‚ðXV
	other.SetHp(hp);
}

void Character::Heal()
{
	printf("‰ñ•œ‚µ‚Ü‚·\n");
	++_hp;
}