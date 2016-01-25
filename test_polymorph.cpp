
// ===========================================================================
//                                  Includes
// ===========================================================================
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

#include "Character.h"
#include "Yoshi.h"
#include "Mario.h"

using namespace std; 

// ===========================================================================
//                            Function declarations
// ===========================================================================


// ===========================================================================
//                                    MAIN
// ===========================================================================
int main(int argc, char* argv[]) {
	
  Yoshi*      character1 = new Yoshi(GREEN);
  Yoshi*      character2 = new Yoshi();
  Mario*			character3 = new Mario();
  Mario*			character4 = new Mario();
  
  ofstream monFlux("speeds.txt");
  monFlux << "Vitesses de Yoshi, Yoshi, Mario et Mario:"<< endl;
  monFlux << "Phase d'accélération:"<< endl;
  
  for(int t=0;t<10;t++){
		character1->Accelerate();
		character2->Accelerate();
		character3->Accelerate();
		character4->Accelerate();
		
		monFlux << "t=" << t <<" speeds:" << character1->speed() <<", " <<
		 character2->speed() <<", " << character3->speed() <<", " << 
		 character4->speed() << endl;
				
	}
	
	monFlux << "Phase de décélération :"<< endl;
  
	
	for(int t=0;t<10;t++){
		character1->Break();
		character2->Break();
		character3->Break();
		character4->Break();
		
		monFlux << "t=" << t <<" speeds:" << character1->speed() <<", " <<
		character2->speed() <<", " << character3->speed() <<", " << 
		character4->speed() << endl;
				
	}

  return 0;
}
