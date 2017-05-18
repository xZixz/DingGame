/*
 * Ball.h
 *
 *  Created on: May 18, 2017
 *      Author: KienDu
 */

#ifndef MODEL_BALL_H_
#define MODEL_BALL_H_
#include "cocos2d.h"
#include "../interface/Updateable.h"

class Ball : public Updateable {
  public:

  static Ball* create();

  virtual bool init();
  virtual void update(float d);
  bool atEdge();
  void bounceEdge();
  bool atTopOrBottom();
  void bounceUpOrDown();

  Ball();
  virtual ~Ball();

  float _velocityX;
  float _velocityY;
  float _x;
  float _y;
  float _width;
  float _height;

};

#endif /* MODEL_BALL_H_ */
