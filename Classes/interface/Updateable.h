/*
 * Updateable.h
 *
 *  Created on: May 18, 2017
 *      Author: KienDu
 */

#ifndef INTERFACE_UPDATEABLE_H_
#define INTERFACE_UPDATEABLE_H_

class Updateable {
  public:
  virtual void update(float d) = 0;
  virtual ~Updateable(){};
};

#endif /* INTERFACE_UPDATEABLE_H_ */
