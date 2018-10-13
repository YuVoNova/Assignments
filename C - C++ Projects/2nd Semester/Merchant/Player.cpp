#include "Player.h"

using namespace std;

Inventory::Inventory()
{
	
}

Player::Player(int g)
{
	myMat.glass = 50;
	myMat.wood = 50;
	myMat.organic = 50;
	myMat.metal = 50;
	
	myGold = g;
}

int Inventory::SumItems()
{
	int sum = 0;
	
	sum += sword.inInventory;
	sum += dag.inInventory;
	sum += bow.inInventory;
	sum += helm.inInventory;
	sum += chest.inInventory;
	sum += shield.inInventory;
	sum += hp.inInventory;
	sum += mp.inInventory;
	
	return sum;
}

void Player::RecycleItem(Item item)
{
	if (item.inInventory > 0)
	{
		Materials m;
		
		m = item.CalculateRecycle();
		
		myMat.wood += m.wood;
		myMat.glass += m.glass;
		myMat.organic += m.organic;
		myMat.metal += m.metal;
		
		item.inInventory -= 1;
	}
	else
	{
		cout << endl << "You do not own any of this item." << endl;
	}
}

void Player::CraftItem(Item item)
{
	if (myInv.SumItems() < myInv.capacity)
	{
		Materials m;
		
		m = item.CalculateCraft();
		
		if (myMat.wood < m.wood || myMat.glass < m.glass || myMat.organic < m.organic || myMat.metal < m.metal)
		{
			cout << endl << "Insufficient materials." << endl;
		}
		else
		{
			myMat.wood -= m.wood;
			myMat.glass -= m.glass;
			myMat.organic -= m.organic;
			myMat.metal -= m.metal;
			
			item.inInventory += 1;
		}
	}
	else
	{
		cout << endl << "Your inventory is at full capacity." << endl;
	}
}










