///-------------------------------------------------------------------------------------------------
// file: GameOBject.cpp
//
// author: Richard Roberts
// date: 2020
//
// summary:	Entry point for the program
///-------------------------------------------------------------------------------------------------
#include "GameCore.h"

extern void GameRegisterClasses();

int main()
{
	GameRegisterClasses();

	// You can create a game engine singleton and have the game engine 
	// update your engine. Think of this as a game manager? or a class
	// that can do stuff for your game specifically.
	//GameEngine::Instance().SetProjectEngine(&YOURPROJECTENGINE::Instance());

	GameEngine::Instance().Initialize();
	// Load scene method examples.
	// SceneManager::Instance().LoadScene("Scene_2");
	// SceneManager::Instance().LoadScene(1);
	GameEngine::Instance().Update();
}
