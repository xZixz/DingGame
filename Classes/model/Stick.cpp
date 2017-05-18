/*
 * Stick.cpp
 *
 *  Created on: May 18, 2017
 *      Author: KienDu
 */

#include "Stick.h"

Stick* Stick::create() {
  Stick* stick = new Stick();
  stick->init();
  return stick;
}

void Stick::update(float d) {

}

bool Stick::init() {
  return true;
}

Stick::Stick() {
  // TODO Auto-generated constructor stub

}

Stick::~Stick() {
  // TODO Auto-generated destructor stub
}

