/*
 * BallLayer.cpp
 *
 *  Created on: May 19, 2017
 *      Author: KienDu
 */

#include "BallLayer.h"

bool BallLayer::init() {
  if (Layer::init()) {
    _ballSprite = Sprite::create("ball.png");
    addChild(_ballSprite);
    return true;
  }
  return false;
}

void BallLayer::update(float d) {
  // TODO
}

BallLayer::BallLayer() {
  // TODO Auto-generated constructor stub

}

BallLayer::~BallLayer() {
  // TODO Auto-generated destructor stub
}

