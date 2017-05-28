/*
 * GamePlayController.cpp
 *
 *  Created on: May 18, 2017
 *      Author: KienDu
 */

#include "GamePlayController.h"
#include "../model/GameModel.h"

void GamePlayController::update(float d) {
  GameModel* model = GameModel::getInstance();
  // CHECK GAME OVER HERE
  model->update(d);
  _view->update(d);
}

GamePlayController::GamePlayController() {
  // TODO Auto-generated constructor stub

}

void GamePlayController::setView(GamePlayView* gamePlayView) {
	_view = gamePlayView;
}

GamePlayController::~GamePlayController() {
  // TODO Auto-generated destructor stub
  delete _view;
}

void GamePlayController::onUserTouched() {
}
