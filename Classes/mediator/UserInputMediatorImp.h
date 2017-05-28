/*
 * UserInputMediatorImp.h
 *
 *  Created on: May 28, 2017
 *      Author: KienDu
 */

#ifndef MEDIATOR_USERINPUTMEDIATORIMP_H_
#define MEDIATOR_USERINPUTMEDIATORIMP_H_

#include "../interface/UserInputMediator.h"

class UserInputMediatorImp : public UserInputMediator {
public:

	virtual void registerUserInputLayer(UserInputLayer*);
	virtual void registerController(GamePlayController*);
	virtual void onUserTouched();

	UserInputMediatorImp();
	virtual ~UserInputMediatorImp();

	UserInputLayer* _userInputLayer;
	GamePlayController* _gamePlayController;
};

#endif /* MEDIATOR_USERINPUTMEDIATORIMP_H_ */
