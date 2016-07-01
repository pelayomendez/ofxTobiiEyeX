#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofBackground(0);
	ofSetVerticalSync(true);

	eyex.init();

}

//--------------------------------------------------------------
void ofApp::update(){

	if(ofGetFrameNum()%2 == 0) {
	
		gazePointPos = ofVec2f(eyex.gazePoint.x, eyex.gazePoint.y);

		gazePointPos.x = eyex.gazePoint.x*0.25 + gazePointPos.x*0.75;
		gazePointPos.y = eyex.gazePoint.y*0.25 + gazePointPos.y*0.75;

	}

}

//--------------------------------------------------------------
void ofApp::draw(){

	ofSetColor(255);
	ofDrawCircle(gazePointPos, 20);

}


//--------------------------------------------------------------
void ofApp::startGuestCalibration()
{

	

};

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

	switch (key) {

		case 'c':
			eyex.launchGuestConfiguration();
			break;
		case 'f':
			ofToggleFullscreen();
			break;
		default:
			ofLog() << key;
			break;
	}

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
