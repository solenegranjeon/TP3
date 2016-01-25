
// ===========================================================================
//                                  Includes
// ===========================================================================
#include <cstdio>
#include <cstdlib>
#
#include "Character.h"
#include "Yoshi.h"


// ===========================================================================
//                            Function declarations
// ===========================================================================


// ===========================================================================
//                                    MAIN
// ===========================================================================
int main(int argc, char* argv[]) {
	
  Yoshi       character2 = Yoshi(GREEN);
  Yoshi*      character4 = new Yoshi();

  character2.Accelerate();
  character4->Accelerate();

  printf("Character 2 speed : %f\n", character2.speed());
  printf("Character 4 speed : %f\n", character4->speed());

  printf("\n" );

  character2.Break();
  character4->Break();

  printf("Character 2 speed : %f\n", character2.speed());
  printf("Character 4 speed : %f\n", character4->speed());

  printf("\n" );
  
  printf("Character 2 est de couleur : %d\n",character2.color_);
  character2.WhatAmI();

	
	printf("On a créé %d characters.\n",Character::nb_instances);
	
	character2.~Character();
	delete character4;
	
	printf("Après les deletes, il en reste %d.\n",Character::nb_instances);

  return 0;
}
