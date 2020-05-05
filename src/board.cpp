#include "board.h"

void Board::setup() {
	//provide initial changes to the board.
	ofBackgroundHex(000000);
}

void Board::update() {
	//update the board upon an Event.
}

void Board::draw() {
	ofNoFill();
	//Draw the state of Board.
	int scrWidth = ofGetWidth(); //store the Graphic Window width
	int scrHeight = ofGetHeight(); //store the Graphic Window Height

	//generating mapping
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			charPos[{i, j}] = {(2*j + 1)*scrWidth/6, (2*i + 1)*(scrHeight-100)/6};
		}
	}


	//Vertical Lines
	ofDrawLine(0, 0, 0, scrHeight - 100);
	ofDrawLine(scrWidth / 3, 0, scrWidth / 3, scrHeight - 100);
	ofDrawLine(2 * scrWidth / 3, 0, 2 * scrWidth / 3, scrHeight - 100);
	ofDrawLine(scrWidth, 0, scrWidth, scrHeight - 100);

	//Horizontal Lines
	ofDrawLine(0, 0, scrWidth, 0);
	ofDrawLine(0, (scrHeight - 100) / 3, scrWidth, (scrHeight - 100) / 3);
	ofDrawLine(0, 2*(scrHeight - 100) / 3, scrWidth, 2*(scrHeight - 100) / 3);
	ofDrawLine(0, (scrHeight - 100), scrWidth, (scrHeight - 100));

	//Menu Buttons Partition
	ofDrawLine(scrWidth / 2, scrHeight - 100, scrWidth / 2, scrHeight);

	//Menu options
	ofDrawBitmapString("Reset Board", scrWidth / 6, scrHeight - 50);
	ofDrawBitmapString("Result: Inconclusive", scrWidth / 2 + 20, scrHeight - 50);

	//Drawing the X O
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			switch (state(i,j))
			{
			case 1:
				//draw X char at charPos({i,j})
				break;
			case 2:
				//draw O char at charPos({i,j})
				break;
			default:
				//empty square
				break;
			}
		}
	}
}

void Board::mousePressed(int x, int y, int button) {

}

Board::Board() {
	state = Mat<int>(3, 3, fill::zeros);
}