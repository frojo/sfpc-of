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
    float theta_path = t/4 + PI / 4; // ofMap(mouseX, 0, width, 0, 2*PI);
    
    
    float x_origin = width / 2;
    float y_origin = height;
    
    float r_path = height*sin(2*theta_path);
    float x_path = x_origin + .6*r_path*cos(theta_path);
    float y_path = y_origin + 1.2*r_path*sin(theta_path);
    
    
    // particles
    float p_x = x_path + 100*sin(t*10);
    float p_y = y_path;
    
    ofSetColor(0);
    ofDrawCircle(p_x, p_y, 5);
    ofSetColor(255);
    ofDrawCircle(x_path, y_path, 10);

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
