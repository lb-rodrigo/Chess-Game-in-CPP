#ifndef __BISHOP_H__
#define __BISHOP_H__

#include <iostream>
#include "Piece.h"
#include "Board.h"
#include <cmath>
#include <cstdlib>
using namespace std;

class Bishop: public Piece{
	
	public:
	 virtual string getType() { return "Bishop"; }


	virtual string getType() { return "Bishop"; }
        virtual bool isValid(Position* start, Position* end, Board b) {
	
/*
                if(start->GetColor() != b.getTurn()){
		std::cout << "ERROR: Wrong color!" << std::endl;
			return false;
		}

		if(end->GetColor() == start->GetColor()){
		std::cout <<"ERROR: You cant eat your own, have decency and only eat the oponent!" << std::endl;
			return false;
		}

		if((start->GetRow() == end->GetRow()) && (end->GetColumn() == start->GetColumn())){
		std::cout <<"ERROR: You can stay in the same position!"<<std::endl;
		}

		bool flag = false;
		int bishopR = start->GetRow();
		int bishopC = start->GetColumn();
		int finishR = end->GetRow();
		int finishC = end->GetColumn();

		if(abs(bishopR - finishR) == abs(bishopC - finishC)){
			int increment_r = (finishR - bishopR) / (abs(finishR - bishopR));
			int increment_c = (finishC - bishopC) / (abs(finishC - bishopC));
//FOR LOOP WALKS THE PATH SET FOR THE PIECE
			for(unsigned i = 1; i <abs(bishopR - finishR); i++){
				std::cout << "testing testing" << std::endl;
//CHECKING IF THERE IS ANY PIECES IN THE WAY
				if(b[bishopR + increment_r * i][bishopC + increment_c *i].isEmpty() != false ){
					return false;
				}
			}
		}
		else{
			return false;
		}
		
		if(flag == false){return true;}

  */ return true;    }

};


#endif //__BISHOP_H__
