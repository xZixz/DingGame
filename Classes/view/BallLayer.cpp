/*
 * BallLayer.cpp
 *
 *  Created on: May 19, 2017
 *      Author: KienDu
 */

#include "BallLayer.h"
#include "../model/GameModel.h"

bool BallLayer::init() {
  if (Layer::init()) {
    _ballSprite = Sprite::create("ball.png");
    _ballSprite->setPosition(225, 200);
    addChild(_ballSprite);
    return true;
  }
  return false;
}

void BallLayer::update(float d) {
  // TODO
  GameModel* model = GameModel::getInstance();
  _ballSprite->setPosition(model->_ball->_x, model->_ball->_y);
}

BallLayer::BallLayer() {
  // TODO Auto-generated constructor stub

}

BallLayer::~BallLayer() {
  // TODO Auto-generated destructor stub
}

