///-------------------------------------------------------------------------------------------------
// file: Zombie.h
//
// author: Richard Roberts
// date: 2020
//
// summary:	
///-------------------------------------------------------------------------------------------------
#pragma once
#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "Component.h"
#include "BoxCollider.h"

/// <summary>
/// 
/// </summary>
class Zombie : public Component
{
	DECLARE_DYNAMIC_DERIVED_CLASS(Zombie, Component)

	BoxCollider* collider = nullptr;

public:
	~Zombie() override {}

	void DoSomething(ICollidable* col);

	std::function<void(ICollidable*)> func;

	void Start() override;
};

#endif // !ZOMBIE_H

