/*
 * UserInputInterface.h
 *
 *  Created on: May 28, 2017
 *      Author: KienDu
 */

#ifndef INTERFACE_USERINPUTINTERFACE_H_
#define INTERFACE_USERINPUTINTERFACE_H_

#include "cocos2d.h"

USING_NS_CC;

class UserInputInterface {
public:

	virtual bool onTouchBegan(Touch*, Event*) = 0;
	virtual void onTouchMoved(Touch*, Event*) = 0;
	virtual void onTouchEnded(Touch*, Event*) = 0;
	virtual ~UserInputInterface();
};

#endif /* INTERFACE_USERINPUTINTERFACE_H_ */
