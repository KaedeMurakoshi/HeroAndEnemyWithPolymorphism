#pragma once

class Character {
public:
	virtual void Attack(Character& character);
	void Heal();
	int GetHp() const { return _hp; };
	int GetAtk() const { return _atk; };
	int GetDef() const { return _def; };
	void SetHp(int hp) { _hp = hp; };

protected:
	int _hp;
	int _atk;
	int _def;
};