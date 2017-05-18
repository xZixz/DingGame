/*
 * Ball.cpp
 *
 *  Created on: May 18, 2017
 *      Author: KienDu
 */

#include "Ball.h"

Ball* Ball::create() {
  Ball* ball = new Ball();
  ball->init();
  return ball;
}

bool Ball::init() {
  _velocityX = 0;
  _velocityY = 0;
  return true;
}

void Ball::update(float d) {

}

Ball::Ball() {
  // TODO Auto-generated constructor stub

}

Ball::~Ball() {
  // TODO Auto-generated destructor stub
}

