/*
 * Stick.h
 *
 *  Created on: May 18, 2017
 *      Author: KienDu
 */

#ifndef MODEL_STICK_H_
#define MODEL_STICK_H_
#include "cocos2d.h"
#include "../interface/Updateable.h"

class Stick {
  public:

  static Stick* create();
  virtual bool init();
  virtual void update(float d);

  Stick();
  virtual ~Stick();
};

#endif /* MODEL_STICK_H_ */
