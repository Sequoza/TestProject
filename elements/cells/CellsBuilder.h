#pragma once

#include "cell.h"

class CellsBuilder {
public:
	virtual Cell build(int x, int y);
	virtual ~CellsBuilder();
};
