/*
 * Ball.cpp
 *
 *  Created on: May 18, 2017
 *      Author: KienDu
 */

#include "Ball.h"
#include "cocos2d.h"

Ball* Ball::create() {
  Ball* ball = new Ball();
  ball->init();
  return ball;
}

bool Ball::init() {
  _velocityX = 100;
  _velocityY = 100;
  _x = 225;
  _y = 200;
  _width = 40;
  _height = 40;
  return true;
}

void Ball::update(float d) {
  // move logic
  _x += _velocityX * d;
  _y += _velocityY * d;

  if (atEdge()) {
    bounceEdge();
  }

  if (atTopOrBottom()) {
    bounceUpOrDown();
  }
}

void Ball::bounceEdge() {
  _velocityX = -_velocityX;
}

void Ball::bounceUpOrDown() {
  _velocityY = -_velocityY;
}

bool Ball::atEdge() {
  return ((_x > cocos2d::Director::getInstance()->getWinSize().width - _width / 2) || (_x < _width / 2));
}

bool Ball::atTopOrBottom() {
  return ((_y > cocos2d::Director::getInstance()->getWinSize().height - _height / 2) || (_y < _height / 2));
}

Ball::Ball() {
  // TODO Auto-generated constructor stub

}

Ball::~Ball() {
  // TODO Auto-generated destructor stub
}

