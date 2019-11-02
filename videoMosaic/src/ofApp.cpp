#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    grabber.setup(ofGetWidth(), ofGetWidth()*.75);
}

//--------------------------------------------------------------
void ofApp::update(){
    grabber.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    //grabber.draw(0, 0);
    
    float t = ofGetElapsedTimef();
    
    int step = 40;
    
    for (int x = 0; x < grabber.getWidth(); x += step) {
        for (int y = 0; y < grabber.getHeight(); y += step) {
            ofColor c = grabber.getPixels().getColor(x, y);
            ofSetColor(c);
            //ofDrawCircle(x, y, 5);
            ofDrawRectangle(x-step/2 + sin(t)*ofRandom(step/2), y-step/2 + cos(t)*ofRandom(step/2), step, step);
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
