#include "ofApp.h"



//--------------------------------------------------------------
void ofApp::setup()
{
	float orientation = 0;
	float radius = 20;
	ofVec2f position = ofVec3f(radius, radius);
	m_pBoidObject = new AIForGames::GameObject(radius, position, orientation);	
}

//--------------------------------------------------------------
void ofApp::update(){	
	m_pBoidObject->Update();
}

//--------------------------------------------------------------
void ofApp::draw(){

	//ofSetRectMode(OF_RECTMODE_CENTER);
	//gui.draw();
	////ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
	//ofRotateX(rotationX);
	//ofRotateY(rotationY);
	//
	////ofCircle(-300, 0, 130);
	////ofTriangle(150, 200, 200, 250, 200, 150);
	////m_pBoidObject->DrawObject();

	//
	//ofPushMatrix();
	//ofTranslate(300, 300);
	//ofRotateZ(rotationZ);
	////ofRotateZ(ofGetElapsedTimef() * 30);
	////ofRect(0, 0, 20, 20);
	//ofTriangle(0, -70, -30, 30, 30, 30);
	//ofPopMatrix();
	m_pBoidObject->DrawObject();
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
