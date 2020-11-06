#pragma once
#include <iostream>

class position {
private:
	int column;
	int row;
public:
	void setColumn(int acolumn);
	void setRow(int arow);
	int getColumn();
	int getRow();
	position();
	position(int arrow, int acolumn);

};
