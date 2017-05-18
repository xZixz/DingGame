/*
 * BallLayer.h
 *
 *  Created on: May 19, 2017
 *      Author: KienDu
 */

#ifndef VIEW_BALLLAYER_H_
#define VIEW_BALLLAYER_H_
#include "cocos2d.h"
USING_NS_CC;

class BallLayer : public Layer {
  public:

  virtual bool init();
  virtual void update(float d);

  BallLayer();
  virtual ~BallLayer();

  Sprite* _ballSprite;

  CREATE_FUNC(BallLayer)
};

#endif /* VIEW_BALLLAYER_H_ */
