#pragma once

#include "SimpleCell.h"
#include "memory"

SimpleCell::SimpleCell(int xPos, int yPos) {
        this->xPos = xPos;
        this->yPos = yPos;
        isDug = false;
        minesAround = 0;
        state = CellState::EMPTY;
}
//	SimpleCell::

bool SimpleCell::isDug() const {
    return this->isDug;
}

void SimpleCell::digCell() {
	isDug = true;

	if (isMined()) {
			mine.get()->touchMine();
	        if (mine.get()->getStatus() == MineStatus::DETONATED) {
	        	this->state = CellState::DESTROYED;
	     }
	 }
}

void SimpleCell::setMine(std::unique_ptr<Mine>& mine) {
        this->state = CellState::MINED;
        this->mine 	= move(mine);
}

int SimpleCell::getXPos() const {
	return xPos;
}

int SimpleCell::getYPos() const {
	return xPos;
}




