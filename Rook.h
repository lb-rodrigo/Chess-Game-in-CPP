#ifndef ROOK_H
#define ROOK_H

#include "Board.h"
#include "Piece.h"

using namespace std;

class Rook : public Piece {
	virtual string getType() { return "Rook"; }
        virtual bool isValid(Position start, Position end) {
                return false;
        }

};





#endif
