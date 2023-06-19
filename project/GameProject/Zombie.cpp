///-------------------------------------------------------------------------------------------------
// file: Zombie.cpp
//
// author: Richard Roberts
// date: 2020
//
// summary:	
///-------------------------------------------------------------------------------------------------
#include "GameCore.h"
#include "Zombie.h"
#include "ICollidable.h"

IMPLEMENT_DYNAMIC_CLASS(Zombie)

void Zombie::DoSomething(ICollidable* col)
{
	std::cout << game_object->getName() << std::endl;
	Collider* collider = (Collider*)col;
	std::cout << collider->game_object->getName() << std::endl;
}

void Zombie::Start()
{
	collider = game_object->GetComponent<BoxCollider>();
	func = std::bind(&Zombie::DoSomething, *this, std::placeholders::_1);
	collider->RegisterExitCallback(func);
	
}
