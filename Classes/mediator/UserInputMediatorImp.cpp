/*
 * UserInputMediatorImp.cpp
 *
 *  Created on: May 28, 2017
 *      Author: KienDu
 */

#include "UserInputMediatorImp.h"

UserInputMediatorImp::UserInputMediatorImp() {
	// TODO Auto-generated constructor stub

}

void UserInputMediatorImp::registerUserInputLayer(UserInputLayer* userInputLayer) {
	_userInputLayer = userInputLayer;
}

void UserInputMediatorImp::onUserTouched() {
	_gamePlayController->onUserTouched();
}

void UserInputMediatorImp::registerController(GamePlayController* gamePlayController) {
	_gamePlayController = gamePlayController;
}

UserInputMediatorImp::~UserInputMediatorImp() {
	// TODO Auto-generated destructor stub
}

