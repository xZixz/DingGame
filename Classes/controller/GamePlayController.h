/*
 * GamePlayController.h
 *
 *  Created on: May 18, 2017
 *      Author: KienDu
 */

#ifndef CONTROLLER_GAMEPLAYCONTROLLER_H_
#define CONTROLLER_GAMEPLAYCONTROLLER_H_

#include "cocos2d.h"
#include "../view/GamePlayView.h"

USING_NS_CC;

class GamePlayController : public Node {
  public:

  virtual void update(float d);
  virtual void setView(GamePlayView* gamePlayView);
  virtual void onUserTouched();

  GamePlayController();
  virtual ~GamePlayController();

  CREATE_FUNC(GamePlayController);

  private:
  GamePlayView* _view;
};

#endif /* CONTROLLER_GAMEPLAYCONTROLLER_H_ */
