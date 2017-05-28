/*
 * UserInputMediator.h
 *
 *  Created on: May 28, 2017
 *      Author: KienDu
 */

#ifndef MEDIATOR_USERINPUTMEDIATOR_H_
#define MEDIATOR_USERINPUTMEDIATOR_H_

class GamePlayController;
class UserInputLayer;

class UserInputMediator {
public:

	virtual void registerUserInputLayer(UserInputLayer*) = 0;
	virtual void registerController(GamePlayController*) = 0;
	virtual void onUserTouched() = 0;

	UserInputMediator();
	virtual ~UserInputMediator();
};

#endif /* MEDIATOR_USERINPUTMEDIATOR_H_ */
