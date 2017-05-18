/*
 * GamePlayController.cpp
 *
 *  Created on: May 18, 2017
 *      Author: KienDu
 */

#include "GamePlayController.h"
#include "../model/GameModel.h"

GamePlayController* GamePlayController::create() {
  auto gamePlayController = new GamePlayController();
  gamePlayController->autorelease();
  gamePlayController->init();
  return gamePlayController;
}

bool GamePlayController::init() {

  if (Scene::init()) {
    // Init view
    GamePlayView* view = GamePlayView::createWithDelegate(this);
    this->_view = view;

    // Init models
    GameModel* model = GameModel::getInstance();
    model->createObjects();

    this->scheduleUpdate();

    return true;
  }
  return false;
}

void GamePlayController::addView(Node* node) {
  addChild(node);
}

void GamePlayController::update(float d) {
  GameModel* model = GameModel::getInstance();
  // CHECK GAME OVER HERE

  model->update(d);
  _view->update(d);
}

GamePlayController::GamePlayController() {
  // TODO Auto-generated constructor stub

}

GamePlayController::~GamePlayController() {
  // TODO Auto-generated destructor stub
  delete _view;
}

