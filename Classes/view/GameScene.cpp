/*
 * GameScene.cpp
 *
 *  Created on: May 28, 2017
 *      Author: KienDu
 */

#include "GameScene.h"

bool GameScene::init() {
	if (Scene::init()) {

		_gamePlayController = GamePlayController::create();
		_gamePlayController->retain();
		_gamePlayView = GamePlayView::createWithScene(this);
		_gamePlayController->setView(_gamePlayView);
		_gameModel = GameModel::getInstance();
		_gameModel->createObjects();

		this->scheduleUpdate();

		return true;
	}
	return false;
}

void GameScene::update(float d) {
	_gamePlayController->update(d);
}


GameScene::GameScene() {
	// TODO Auto-generated constructor stub

}

GameScene::~GameScene() {
	// TODO Auto-generated destructor stub
	_gamePlayController->release();
}

