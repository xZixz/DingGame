/*
 * Target.cpp
 *
 *  Created on: May 18, 2017
 *      Author: KienDu
 */

#include "Target.h"

Target* Target::create() {
  Target* target = new Target();
  target->init();
  return target;
}

bool Target::init() {
  return true;
}

void Target::update(float d) {

}

Target::Target() {
  // TODO Auto-generated constructor stub

}

Target::~Target() {
  // TODO Auto-generated destructor stub
}

