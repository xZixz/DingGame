/*
 * GamePlayView.cpp
 *
 *  Created on: May 18, 2017
 *      Author: KienDu
 */

#include "GamePlayView.h"
#include "../model/GameModel.h"

GamePlayView* GamePlayView::createWithScene(Scene* scene) {
  GamePlayView* gamePlayView = new GamePlayView();
  gamePlayView->initWithScene(scene);
  return gamePlayView;
}

bool GamePlayView::initWithScene(Scene* scene) {

  GameModel* model = GameModel::getInstance();

  _ballLayer = BallLayer::create();
  _stickLayer = StickLayer::create();
  _hudLayer = HudLayer::create();

  scene->addChild(_ballLayer);
  scene->addChild(_stickLayer);
  scene->addChild(_hudLayer);

  return true;
}

void GamePlayView::update(float d) {
  // TODO
  _ballLayer->update(d);
  _stickLayer->update(d);
  _hudLayer->update(d);
}

GamePlayView::GamePlayView() {
  // TODO Auto-generated constructor stub

}

GamePlayView::~GamePlayView() {
  // TODO Auto-generated destructor stub
}

