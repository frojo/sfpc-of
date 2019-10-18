#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    float t = ofGetElapsedTimef();
    float theta = t;
    float width = ofGetViewportWidth();
    float height = ofGetViewportHeight();
    
    float x_origin = width / 2;
    float y_origin = height / 2;
    float r = height / 2;
    
    
    // float x_circ = x_origin + r*cos(t);
    float circleness = ofMap(ofClamp(t, 0, PI), 0, PI, 0, 1);
    cout << circleness << endl;
    float x =  x_origin + circleness * r*cos(theta + PI);
    // float x =  x_origin;
    // float x = x_circ;
    
    float y = y_origin + r*sin(theta);
    
    ofDrawCircle(x, y, 10);

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
