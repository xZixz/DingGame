/*
 * HudLayer.h
 *
 *  Created on: May 19, 2017
 *      Author: KienDu
 */

#ifndef VIEW_HUDLAYER_H_
#define VIEW_HUDLAYER_H_
#include "cocos2d.h"
USING_NS_CC;

class HudLayer : public Layer {
  public:

  virtual bool init();
  virtual void update(float d);

  HudLayer();
  virtual ~HudLayer();
  Label* _score;

  CREATE_FUNC(HudLayer)
};

#endif /* VIEW_HUDLAYER_H_ */
