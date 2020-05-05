#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	b.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
	b.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	b.draw();
	for (Symbol* s : sym) {
		s->draw();
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	if (x < ofGetWidth() / 2 && y > ofGetHeight() - 100) {
			b.state.fill(fill::zeros);
			sym.resize(0);
	}
	else {
		//condition for detecting square on which the mouse clicked
		if (x < ofGetWidth() / 3) {
			if (y < (ofGetHeight() - 100) / 3) {
				if (b.state(0, 0) == 0) {
					if (b.toggle == 1) { //machine's turn
						//Adding X or O symbol
						Symbol* temp = new Symbol('X', b.charPos[{0, 0}]);
						sym.push_back(temp);

						//updating State of Board
						b.state(0, 0) = 1;

						//changing chance
						b.toggle = 0;
					}
					else { //Opponent's turn
						//Adding X or O symbol
						Symbol* temp = new Symbol('O', b.charPos[{0, 0}]);
						sym.push_back(temp);

						//updating State of Board
						b.state(0, 0) = -1;

						//changing chance
						b.toggle = 1;
					}
				}
			}

			if (y < 2 * (ofGetHeight() - 100) / 3 && y > (ofGetHeight()-100)/3) {
				if (b.state(1, 0) == 0) {
					if (b.toggle == 1) { //machine's turn
						//Adding X or O symbol
						Symbol* temp = new Symbol('X', b.charPos[{1, 0}]);
						sym.push_back(temp);

						//updating State of Board
						b.state(1, 0) = 1;

						//changing chance
						b.toggle = 0;
					}
					else { //Opponent's turn
						//Adding X or O symbol
						Symbol* temp = new Symbol('O', b.charPos[{1, 0}]);
						sym.push_back(temp);

						//updating State of Board
						b.state(1, 0) = -1;

						//changing chance
						b.toggle = 1;
					}
				}
			}

			if (y < (ofGetHeight() - 100) && y > 2*(ofGetHeight()-100)/3 ) {
				if (b.state(2, 0) == 0) {
					if (b.toggle == 1) { //machine's turn
						//Adding X or O symbol
						Symbol* temp = new Symbol('X', b.charPos[{2, 0}]);
						sym.push_back(temp);

						//updating State of Board
						b.state(2, 0) = 1;

						//changing chance
						b.toggle = 0;
					}
					else { //Opponent's turn
						//Adding X or O symbol
						Symbol* temp = new Symbol('O', b.charPos[{2, 0}]);
						sym.push_back(temp);

						//updating State of Board
						b.state(2, 0) = -1;

						//changing chance
						b.toggle = 1;
					}
				}
			}


		}

		if (x < 2 * ofGetWidth() / 3 && x > ofGetWidth() / 3) {
			if (y < (ofGetHeight() - 100) / 3) {
				if (b.state(0, 1) == 0) {
					if (b.toggle == 1) { //machine's turn
						//Adding X or O symbol
						Symbol* temp = new Symbol('X', b.charPos[{0, 1}]);
						sym.push_back(temp);

						//updating State of Board
						b.state(0, 1) = 1;

						//changing chance
						b.toggle = 0;
					}
					else { //Opponent's turn
						//Adding X or O symbol
						Symbol* temp = new Symbol('O', b.charPos[{0, 1}]);
						sym.push_back(temp);

						//updating State of Board
						b.state(0, 1) = -1;

						//changing chance
						b.toggle = 1;
					}
				}
			}

			if (y < 2 * (ofGetHeight() - 100) / 3 && y >(ofGetHeight() - 100) / 3) {
				if (b.state(1, 1) == 0) {
					if (b.toggle == 1) { //machine's turn
						//Adding X or O symbol
						Symbol* temp = new Symbol('X', b.charPos[{1, 1}]);
						sym.push_back(temp);

						//updating State of Board
						b.state(1, 1) = 1;

						//changing chance
						b.toggle = 0;
					}
					else { //Opponent's turn
						//Adding X or O symbol
						Symbol* temp = new Symbol('O', b.charPos[{1, 1}]);
						sym.push_back(temp);

						//updating State of Board
						b.state(1, 1) = -1;

						//changing chance
						b.toggle = 1;
					}
				}
			}

			if (y < (ofGetHeight() - 100) && y > 2 * (ofGetHeight() - 100) / 3) {
				if (b.state(2, 1) == 0) {
					if (b.toggle == 1) { //machine's turn
						//Adding X or O symbol
						Symbol* temp = new Symbol('X', b.charPos[{2, 1}]);
						sym.push_back(temp);

						//updating State of Board
						b.state(2, 1) = 1;

						//changing chance
						b.toggle = 0;
					}
					else { //Opponent's turn
						//Adding X or O symbol
						Symbol* temp = new Symbol('O', b.charPos[{2, 1}]);
						sym.push_back(temp);

						//updating State of Board
						b.state(2, 1) = -1;

						//changing chance
						b.toggle = 1;
					}
				}
			}


		}

		if (x < ofGetWidth() && x > 2 * ofGetWidth() / 3) {
			if (y < (ofGetHeight() - 100) / 3) {
				if (b.state(0, 2) == 0) {
					if (b.toggle == 1) { //machine's turn
						//Adding X or O symbol
						Symbol* temp = new Symbol('X', b.charPos[{0, 2}]);
						sym.push_back(temp);

						//updating State of Board
						b.state(0, 2) = 1;

						//changing chance
						b.toggle = 0;
					}
					else { //Opponent's turn
						//Adding X or O symbol
						Symbol* temp = new Symbol('O', b.charPos[{0, 2}]);
						sym.push_back(temp);

						//updating State of Board
						b.state(0, 2) = -1;

						//changing chance
						b.toggle = 1;
					}
				}
			}

			if (y < 2 * (ofGetHeight() - 100) / 3 && y >(ofGetHeight() - 100) / 3) {
				if (b.state(1, 2) == 0) {
					if (b.toggle == 1) { //machine's turn
						//Adding X or O symbol
						Symbol* temp = new Symbol('X', b.charPos[{1, 2}]);
						sym.push_back(temp);

						//updating State of Board
						b.state(1, 2) = 1;

						//changing chance
						b.toggle = 0;
					}
					else { //Opponent's turn
						//Adding X or O symbol
						Symbol* temp = new Symbol('O', b.charPos[{1, 2}]);
						sym.push_back(temp);

						//updating State of Board
						b.state(1, 2) = -1;

						//changing chance
						b.toggle = 1;
					}
				}
			}

			if (y < (ofGetHeight() - 100) && y > 2*(ofGetHeight() - 100) / 3) {
				if (b.state(2, 2) == 0) {
					if (b.toggle == 1) { //machine's turn
						//Adding X or O symbol
						Symbol* temp = new Symbol('X', b.charPos[{2, 2}]);
						sym.push_back(temp);

						//updating State of Board
						b.state(2, 2) = 1;

						//changing chance
						b.toggle = 0;
					}
					else { //Opponent's turn
						//Adding X or O symbol
						Symbol* temp = new Symbol('O', b.charPos[{2, 2}]);
						sym.push_back(temp);

						//updating State of Board
						b.state(2, 2) = -1;

						//changing chance
						b.toggle = 1;
					}
				}
			}


		}
		b.mousePressed(x, y, button);
	}
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
