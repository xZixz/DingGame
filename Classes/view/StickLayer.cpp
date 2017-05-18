/*
 * StickLayer.cpp
 *
 *  Created on: May 19, 2017
 *      Author: KienDu
 */

#include "StickLayer.h"

bool StickLayer::init() {
  if (Layer::init()) {
    _stickSprite = Sprite::create("stick.png");
    _stickSprite->setPosition(225, 170);
    addChild(_stickSprite);

    return true;
  }
  return false;
}

void StickLayer::update(float d) {

}

StickLayer::StickLayer() {
  // TODO Auto-generated constructor stub

}

StickLayer::~StickLayer() {
  // TODO Auto-generated destructor stub
}

