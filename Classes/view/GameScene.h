/*
 * GameScene.h
 *
 *  Created on: May 28, 2017
 *      Author: KienDu
 */

#ifndef VIEW_GAMESCENE_H_
#define VIEW_GAMESCENE_H_

#include "cocos2d.h"
#include "../controller/GamePlayController.h"
#include "GamePlayView.h"
#include "../model/GameModel.h"

USING_NS_CC;

class GameScene : public Scene {
public:

	virtual bool init();
	virtual void update(float d);

	GameScene();
	virtual ~GameScene();

	CREATE_FUNC(GameScene);

	GamePlayController* _gamePlayController;
	GamePlayView* _gamePlayView;
	GameModel* _gameModel;
};

#endif /* VIEW_GAMESCENE_H_ */
