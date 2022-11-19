#include <iostream>
using namespace std;


struct Player 
{
	int x;
	int y;
	float health;
	int damage;
	int armor;
 
};
struct Enemy
{
	int x;
	int y;
	float health;
	int damage;
	int armor;

};
struct NPC
{
	int x;
	int y;
	float health;
	int damage;
	int armor;

};

int main()
{
	setlocale(LC_ALL, "");

	Player pl;
	pl.x = 10;
	pl.y = 10;
	pl.armor = 2;
	pl.health = 20;
	pl.damage = 6;
	
	Enemy en;
	en.x = 5;
	en.y = 5;
	en.armor = 1;
	en.health = 15;
	en.damage = 5;

	NPC npc;
	npc.x = 0;
	npc.y = 0;
	npc.armor = 0;
	npc.health = 0;
	npc.damage = 0;

	cout << "Характеристики гравця: " << endl;
	cout << "X координата: " << pl.x << endl;
	cout << "Y координата: " << pl.y << endl;
	cout << "Броня: " << pl.armor << endl;
	cout << "Здоров'я: " << pl.health << endl;
	cout << "Шкода: " << pl.damage << endl << endl;

	cout << "Характеристики ворога: " << endl;
	cout << "X координата: " << en.x << endl;
	cout << "Y координата: " << en.y << endl;
	cout << "Броня: " << en.armor << endl;
	cout << "Здоров'я: " << en.health << endl;
	cout << "Шкода: " << en.damage << endl << endl;
	
	cout << "Характеристики NPC: " << endl;
	cout << "X координата: " << npc.x << endl;
	cout << "Y координата: " << npc.y << endl;
	cout << "Броня: " << npc.armor << endl;
	cout << "Здоров'я: " << npc.health << endl;
	cout << "Шкода: " << npc.damage << endl << endl;
}

