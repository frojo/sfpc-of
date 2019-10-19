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
    float width = ofGetViewportWidth();
    float height = ofGetViewportHeight();
    float theta = ofMap(mouseX, 0, height, 0, 2*PI);
    
    
    float x_origin = width / 2;
    float y_origin = height;
    
    float sc = ofMap(mouseY, 0, width, 0, 2);
    cout << sc << endl;
    float r = height*sin(2*theta);
    
    
    // float x_circ = x_origin + r*cos(t);
    //float circleness = ofMap(ofClamp(t, 0, PI), 0, PI, 0, 1);
    // cout << circleness << endl;
   // float x =  x_origin * r*cos(theta);
    float x = x_origin + .6*r*cos(theta);
    // float x =  x_origin;
    // float x = x_circ;
    float y = y_origin + 1.2*r*sin(theta);
    // float y = y_origin + r*sin(theta);
    
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
