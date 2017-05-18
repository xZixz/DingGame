/*
 * GamePlayController.h
 *
 *  Created on: May 18, 2017
 *      Author: KienDu
 */

#ifndef CONTROLLER_GAMEPLAYCONTROLLER_H_
#define CONTROLLER_GAMEPLAYCONTROLLER_H_

#include "cocos2d.h"
#include "../interface/GameViewDelegate.h"
#include "../view/GamePlayView.h"

USING_NS_CC;

class GamePlayController : public Scene, public GameViewDelegate {
  public:

  static GamePlayController* create();
  virtual bool init();

  virtual void update(float d);
  virtual void addView(Node* node);

  GamePlayController();
  virtual ~GamePlayController();

  private:
  GamePlayView* _view;
};

#endif /* CONTROLLER_GAMEPLAYCONTROLLER_H_ */
