/*
 * GamePlayView.h
 *
 *  Created on: May 18, 2017
 *      Author: KienDu
 */

#ifndef VIEW_GAMEPLAYVIEW_H_
#define VIEW_GAMEPLAYVIEW_H_

#include "cocos2d.h"
#include "../interface/Updateable.h"
#include "BallLayer.h"
#include "StickLayer.h"
#include "HudLayer.h"

USING_NS_CC;

class GamePlayView :  public Updateable {
  public:

  static GamePlayView* createWithScene(Scene* scene);
  virtual bool initWithScene(Scene* scene);
  virtual void update(float);

  GamePlayView();
  virtual ~GamePlayView();

  private:
  BallLayer* _ballLayer;
  StickLayer* _stickLayer;
  HudLayer* _hudLayer;
};

#endif /* VIEW_GAMEPLAYVIEW_H_ */
