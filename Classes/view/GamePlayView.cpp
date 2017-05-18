/*
 * GamePlayView.cpp
 *
 *  Created on: May 18, 2017
 *      Author: KienDu
 */

#include "GamePlayView.h"
#include "../model/GameModel.h"

GamePlayView* GamePlayView::createWithDelegate(GameViewDelegate* delegate) {
  GamePlayView* gamePlayView = new GamePlayView();
  gamePlayView->setDelegate(delegate);
  gamePlayView->init();
  return gamePlayView;
}

bool GamePlayView::init() {

  GameModel* model = GameModel::getInstance();

  _ballLayer = BallLayer::create();
  _stickLayer = StickLayer::create();
  _hudLayer = HudLayer::create();

  _delegate->addView(_ballLayer);
  _delegate->addView(_stickLayer);
  _delegate->addView(_hudLayer);

  return true;
}

void GamePlayView::update(float d) {
  // TODO
  _ballLayer->update(d);
  _stickLayer->update(d);
  _hudLayer->update(d);
}

void GamePlayView::setDelegate(GameViewDelegate* delegate) {
  this->_delegate = delegate;
}

GamePlayView::GamePlayView() {
  // TODO Auto-generated constructor stub

}

GamePlayView::~GamePlayView() {
  // TODO Auto-generated destructor stub
}

