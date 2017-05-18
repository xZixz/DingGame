/*
 * GameModel.cpp
 *
 *  Created on: May 18, 2017
 *      Author: KienDu
 */

#include "GameModel.h"

static GameModel* sGameModel = nullptr;

GameModel* GameModel::getInstance() {
  if (sGameModel == nullptr) {
    sGameModel = GameModel::create();
  }
  return sGameModel;
}

GameModel* GameModel::create() {
  GameModel* model = new GameModel();
  model->init();
  return model;
}

bool GameModel::init() {

  return true;
}

void GameModel::update(float d) {
  _ball->update(d);
  _stick->update(d);
  _target->update(d);

  // ball collides with stick
  if ( (_ball->_x > _stick->_x - _stick->_width / 2)
        && (_ball->_x < _stick->_x + _stick->_width / 2)
        && (abs(_ball->_y - _stick->_y) <= _ball->_width / 2)) {
    _ball->bounceUpOrDown();
  }
}

void GameModel::createObjects() {
  _ball = Ball::create();
  _stick = Stick::create();
  _target = Target::create();
  _score = 0;
}

GameModel::GameModel() {
  // TODO Auto-generated constructor stub

}

GameModel::~GameModel() {
  // TODO Auto-generated destructor stub
  delete _ball;
  delete _stick;
  delete _target;
}

