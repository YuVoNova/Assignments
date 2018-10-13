#include "Materials.h"

using namespace std; 

class Item
{
	private:
		int cost;
		string baseType;
		string itemType;
		Materials madeOf;
	
	public:
		int inStock;
		int inInventory;
		
		Item(int = 0, string = " ", string = " ");
		~Item();
		Materials CalculateCraft();
		Materials CalculateRecycle();
		inline int SellValue()					{return (int)(cost * 70 / 100);}
		
		inline void setMadeOf(Materials m)		{madeOf = m;}
};





class Weapon : public Item
{
	private:
		int damage;
		float range;
		
	public:
		Weapon(int = 0, string = " ", string = " ", int = 0, float = 0);
};

class Sword : public Weapon
{
	public:
		Sword();
};

class Dagger : public Weapon
{
	public:
		Dagger();
};

class Longbow : public Weapon
{
	public:
		Longbow();
};





class Armor : public Item
{
	private:
		int defense;
		float flex;
		
	public:
		Armor(int = 0, string = " ", string = " ", int = 0, float = 0);
};

class Helmet : public Armor
{
	public:
		Helmet();
};

class Chestplate : public Armor
{
	public:
		Chestplate();
};

class Shield : public Armor
{
	public:
		Shield();
};





class Potion : public Item
{
	private:
		int duration;
		
	public:
		Potion(int = 0, string = " ", string = " ", int = 0);
};

class HealthPotion : public Potion
{
	public:
		HealthPotion();
};

class MagicPotion : public Potion
{
	public:
		MagicPotion();
};
