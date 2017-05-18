/*
 * HudLayer.cpp
 *
 *  Created on: May 19, 2017
 *      Author: KienDu
 */

#include "HudLayer.h"

bool HudLayer::init() {
  if (Layer::init()) {
    _score = Label::createWithTTF("0", "fonts/Marker Felt.ttf", 24);
    addChild(_score);
    return true;
  }
  return false;
}

void HudLayer::update(float d) {


}

HudLayer::HudLayer() {
  // TODO Auto-generated constructor stub

}

HudLayer::~HudLayer() {
  // TODO Auto-generated destructor stub
}

