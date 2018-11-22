
#include "Coord.h"
class Vaisseau
{
protected:
	void removeVaisseau();
	void putVaisseau();

	public:
		Coord coord;
		Vaisseau();		
		void modifierPosition(char);
};