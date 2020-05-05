#pragma once
#include "ofMain.h"
class Symbol
{
public:
	char sym;
	std::pair<int, int> center;

	void draw(); //will draw geometric Shape of X or O, centered at center;

	Symbol(char sym, std::pair<int, int> center); 
};

