#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    cow.load("chilled-cow.jpg");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // ofColor c = cow.getColor(mouseX, mouseY);
    // ofBackground(c);

    // cow.draw(0, 0);
    int step = mouseX / 50.0;
    if (step < 1) {
        step = 1;
    }
    
    
    for (int x = 0; x < cow.getWidth(); x += step) {
        for (int y = 0; y < cow.getHeight(); y += step) {
            ofColor c = cow.getColor(x, y);
            ofSetColor(c);
            ofDrawCircle(x, y, step/2.0);
        }
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
