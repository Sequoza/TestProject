#pragma once

#include "Cell.h"
#include <memory>

class SimpleCell: public Cell {
public:
	SimpleCell(int xPos, int yPos);

	bool iDug() 			const		override;
	void digCell() 						override;
	bool iMined() 			const 		override;
	void setMine(std::unique_ptr<Mine> mine) override;
	int getMinesAround() 	const		override;
	void setMinesAround(int minesAmount)const override;
	CellState getCellState() 			override;
	int getXPos() 			const		override;
	int getYPos() 			const		override;

private:
	int xPos;
	int yPos;

	std::unique_ptr<Mine> mine;
	int minesAround;

	CellState state;
	bool isDug;
};
