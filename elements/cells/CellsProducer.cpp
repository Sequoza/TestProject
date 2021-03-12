#include "Cell.h"
#include "CellsBuilder.h"


class CellsProducer {
public:
	CellsProducer(CellsBuilder& builder): cellsBuilder(builder){
	}

	Cell build(int x, int y) {
		return cellsBuilder.build(x,y);
	}

private:
	const CellsBuilder cellsBuilder;
};
