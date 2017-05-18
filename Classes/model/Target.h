/*
 * Target.h
 *
 *  Created on: May 18, 2017
 *      Author: KienDu
 */

#ifndef MODEL_TARGET_H_
#define MODEL_TARGET_H_
#include "cocos2d.h"
#include "../interface/Updateable.h"

class Target {
  public:

  static Target* create();
  virtual bool init();
  virtual void update(float d);

  Target();
  virtual ~Target();
};

#endif /* MODEL_TARGET_H_ */
