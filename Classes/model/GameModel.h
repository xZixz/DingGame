/*
 * GameModel.h
 *
 *  Created on: May 18, 2017
 *      Author: KienDu
 */

#ifndef MODEL_GAMEMODEL_H_
#define MODEL_GAMEMODEL_H_

#include "../interface/Updateable.h"
#include "Ball.h"
#include "Stick.h"
#include "Target.h"

class GameModel : public Updateable {
  public:

  static GameModel* getInstance();
  static GameModel* create();

  virtual bool init();
  virtual void update(float d);
  void createObjects();

  GameModel();
  virtual ~GameModel();

  Ball* _ball;
  Stick* _stick;
  Target* _target;
  int _score;
};

#endif /* MODEL_GAMEMODEL_H_ */
