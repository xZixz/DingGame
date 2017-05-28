/*
 * UserInputLayer.h
 *
 *  Created on: May 28, 2017
 *      Author: KienDu
 */

#ifndef VIEW_USERINPUTLAYER_H_
#define VIEW_USERINPUTLAYER_H_

#include "cocos2d.h"
#include "../interface/UserInputInterface.h"

USING_NS_CC;

class UserInputLayer : public Node {
public:

	virtual bool init();

	virtual bool onTouchBegan(Touch*, Event*);
	virtual void onTouchMoved(Touch*, Event*);
	virtual void onTouchEnded(Touch*, Event*);

	UserInputLayer();
	virtual ~UserInputLayer();
	CREATE_FUNC(UserInputLayer);

	UserInputInterface* _touchDelegate;
};

#endif /* VIEW_USERINPUTLAYER_H_ */
