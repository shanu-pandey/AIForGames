#include "ofApp.h"



//--------------------------------------------------------------
void ofApp::setup()
{
	gui.setup();
	gui.add(rotateX.set("X", 0.0, 0.0, 9.0));
	gui.add(rotateY.set("Y", 0.0, 0.0, 9.0));
	gui.add(rotateZ.set("Z", 0.0, 0.0, 9.0));
	ofVec2f position = ofVec3f(400, 100);
	float orientation = 0;
	m_pBoidObject = new AIForGames::GameObject(position, orientation);	
}

//--------------------------------------------------------------
void ofApp::update(){
	rotationX = rotationX + rotateX;
	rotationY = rotationY + rotateY;
	rotationZ = rotationZ + rotateZ;

	m_pBoidObject->Update();

}

//--------------------------------------------------------------
void ofApp::draw(){
	gui.draw();
	//ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
	ofRotateX(rotationX);
	ofRotateY(rotationY);
	ofRotateZ(rotationZ);
	//ofCircle(-300, 0, 130);
	//ofTriangle(150, 200, 200, 250, 200, 150);
	//m_pBoidObject->DrawObject();

	
	ofPushMatrix();
	//ofTranslate(600, 400);
	//ofRotateZ(ofGetElapsedTimef() * 30);
	//ofRect(0, 0, 200, 200);
	ofTriangle(0, 0, 100, 100, 100, 0);
	ofPopMatrix();
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
