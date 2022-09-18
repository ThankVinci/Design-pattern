
#include "stdafx.h"
#include "LittleBottle.h"
#include "LargeBottle.h"
#include "Juice.h"
#include "Soda.h"
#include "WATERMELONTASTE.h"
#include "ORANGETASTE.h"
#include "GRAPETASTE.h"

int main()
{
	IBottle* little = new LittleBottle;
	IBottle* large = new LargeBottle;

	ITaste* orange = new ORANGETASTE;
	ITaste* grape = new GRAPETASTE;
	ITaste* watermelon = new WATERMELONTASTE;

	IDrink* sodayo_little_orange = new Soda(orange,little);
	sodayo_little_orange->show();

	IDrink* sodayo_large_grape = new Soda(grape, large);
	sodayo_large_grape->show();

	IDrink* juice_large_watermelon = new Juice(watermelon, large);
	juice_large_watermelon->show();

}
