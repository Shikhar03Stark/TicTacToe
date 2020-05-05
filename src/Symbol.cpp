#include "Symbol.h"

void Symbol::draw() {
	int scrWidth = ofGetWidth();
	int scrHeight = ofGetHeight();
	if (sym == 'x' || sym == 'X') {
		ofDrawLine(center.first - scrWidth / 6, center.second - (scrHeight - 100) / 6, center.first + scrWidth / 6, center.second + (scrHeight - 100) / 6);
		ofDrawLine(center.first - scrWidth / 6, center.second + (scrHeight - 100) / 6, center.first + scrWidth / 6, center.second - (scrHeight - 100) / 6);
	}
	else if (sym == 'o' || sym == 'O') {
		ofDrawEllipse(center.first, center.second, scrWidth / 3, (scrHeight - 100) / 3);
	}
}

Symbol::Symbol(char sym, std::pair<int, int> center) {
	this->sym = sym;
	this->center = center;
}