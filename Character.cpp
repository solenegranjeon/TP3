
// ===========================================================================
//                                  Includes
// ===========================================================================
#include "Character.h"


// ===========================================================================
//                       Definition of static attributes
// ===========================================================================
int Character::nb_instances=0;

// ===========================================================================
//                                Constructors
// ===========================================================================
Character::Character() {
  speed_     = 0.;
  max_speed_ = 10.;
  nb_instances+=1;
}

// ===========================================================================
//                                 Destructor
// ===========================================================================
Character::~Character() {
	nb_instances-=1;
}

// ===========================================================================
//                               Public Methods
// ===========================================================================
void Character::Accelerate() {
  if (speed_ == 0.) speed_ = 0.1;
  else speed_ *= 1.1;

  if ( speed_ > max_speed_ ) speed_ = max_speed_;
}

void Character::Break() {
  if (speed_ < 0.1) speed_ = 0.;
  else speed_ *= 0.9;
}

// ===========================================================================
//                              Protected Methods
// ===========================================================================
