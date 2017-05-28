/*
 * UserInputLayer.cpp
 *
 *  Created on: May 28, 2017
 *      Author: KienDu
 */

#include "UserInputLayer.h"

bool UserInputLayer::init() {
	if (Node::init()) {
		auto touchListener = EventListenerTouchOneByOne::create();
		touchListener->onTouchBegan = CC_CALLBACK_2(UserInputLayer::onTouchBegan, this);
		touchListener->onTouchMoved = CC_CALLBACK_2(UserInputLayer::onTouchMoved, this);
		touchListener->onTouchEnded = CC_CALLBACK_2(UserInputLayer::onTouchEnded, this);

		Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(touchListener, this);
		return true;
	}
	return false;
}

bool UserInputLayer::onTouchBegan(Touch* touch, Event* event) {
	_touchDelegate->onTouchBegan(touch, event);
	return true;
}

void UserInputLayer::onTouchMoved(Touch* touch, Event* event) {

}

void UserInputLayer::onTouchEnded(Touch* touch, Event* event) {

}

UserInputLayer::UserInputLayer() {
	// TODO Auto-generated constructor stub

}

UserInputLayer::~UserInputLayer() {
	// TODO Auto-generated destructor stub
}

