#pragma once
#include "ofMain.h"
#include <armadillo>
#include <map>
#include <utility>
using namespace arma;
class Board
{
public:
	bool toggle = 1; //0 specifies opponent turn, 1 specifies Machine turn

	Mat<int> state; //holds the state of current game, 1 for X -1 for O and 0 for empty square

	map<std::pair<int, int>, std::pair<int, int> > charPos; //mapping of state sqaure to state square center;

	ofTrueTypeFont X, O; //Font rendering for X and O;

	void setup();

	void update();

	void draw();

	void mousePressed(int x, int y, int button);

	Board();
};



