/*
 * StickLayer.h
 *
 *  Created on: May 19, 2017
 *      Author: KienDu
 */

#ifndef VIEW_STICKLAYER_H_
#define VIEW_STICKLAYER_H_
#include "cocos2d.h"
USING_NS_CC;

class StickLayer : public Layer {
  public:

  virtual bool init();
  virtual void update(float d);

  StickLayer();
  virtual ~StickLayer();
  Sprite* _stickSprite;

  CREATE_FUNC(StickLayer)
};

#endif /* VIEW_STICKLAYER_H_ */
