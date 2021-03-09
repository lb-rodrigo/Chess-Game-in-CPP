#ifndef BOARD_H
#define BOARD_H

#include "Menu.h"
#include "Position.h"

#include <string>

using namespace std;
/*
struct Position {

	private: 
		int row; 
		int column;
		int color;
		bool empty;
		bool firstMove;
		Piece* type;
	public: 

		Position() {
			type = nullptr;
			color = -1;
			empty = true;
			firstMove = true;
		}
	
		SETTERS
		void SetColumn(char col) { column = ColumnToNum(col); }
		void SetRow(int x) { row = x; }
		void SetFirst(bool x) { firstMove = x; }
		void SetEmpty() { empty = true; }
	
		GETTERS
		int GetColumn() { return column; }
		int GetRow(){ return row; }
		Piece* GetPiece() { return type; }
		int GetColor() { return color; }
		bool GetFirst() { return firstMove; }
		bool isEmpty() { return empty; }
	
		HELPERS
		int ColumnToNum(char column){
			if(column == 'a' || column == 'A'){
				return 0;
			}
			else if(column == 'b' || column == 'B'){
				return 1;
			}
			else if(column == 'c' || column == 'C'){
				return 2;
                	}
			else if(column == 'd' || column == 'D'){
				return 3;
                	}
			else if(column == 'e' || column == 'E'){
				return 4;
                	}
			else if(column == 'f' || column == 'F'){
				return 5;
                	}
			else if(column == 'g' || column == 'G'){
				return 6;
                	}
			else if(column == 'h' || column == 'H'){
				return 7;
                	}
		}	
};
*/
class Board {
        public:
                Position throwawayBoard[8][8];
		Position initialBoard[8][8];
		int turn;
                void printBoard();
                string printP(Position curr);
};



#endif
