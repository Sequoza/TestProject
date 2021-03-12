#pragma once;

#include ".\CellState\cellState.h"
#include "..\mines\Mine.h"

class Cell {
public:
	virtual CellState getCellState() const;

	virtual void digCell();

	virtual bool isDug() const;

	virtual bool isMined() const;

	virtual void setMine(Mine mine);

	virtual int getMinesAround() const;

	virtual void setMinesAround(int minesAmount);

	virtual int getXPos() const;

	virtual int getYPos() const;

	virtual ~Cell();
};
