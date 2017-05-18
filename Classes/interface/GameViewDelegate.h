/*
 * GameViewDelegate.h
 *
 *  Created on: May 18, 2017
 *      Author: KienDu
 */

#ifndef INTERFACE_GAMEVIEWDELEGATE_H_
#define INTERFACE_GAMEVIEWDELEGATE_H_
#include "cocos2d.h"
USING_NS_CC;

class GameViewDelegate {
  public:

  virtual void addView(Node* node) = 0;

  virtual ~GameViewDelegate(){};
};

#endif /* INTERFACE_GAMEVIEWDELEGATE_H_ */
