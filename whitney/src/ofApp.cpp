#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    float limit = 8;
    float t = ofWrap(ofGetElapsedTimef(), 0, 12);
    float width = ofGetViewportWidth();
    float height = ofGetViewportHeight();
    float theta_path = t/4 + PI / 4; // ofMap(mouseX, 0, width, 0, 2*PI);
    
    
    float x_origin = width / 2;
    float y_origin = height;
    
    float r_path = height*sin(2*theta_path);
    float x_path = x_origin + .6*r_path*cos(theta_path);
    float y_path = y_origin + 1.2*r_path*sin(theta_path);
    
    // draw the bees
    ofSetColor(0);
    for (int i = 0; i < 100; i++) {
        
        cout << mouseX << endl;
        float theta_particle = theta_path - ((float)i)/mouseX;
        float r_particle = height*sin(2*theta_particle);
        float x_particle_center = x_origin + .6*r_particle*cos(theta_particle);
        float y_particle_center = y_origin + 1.2*r_particle*sin(theta_particle);
        
        float x_particle = x_particle_center; //  + 100*sin(t*10);
        float y_particle = y_particle_center;
        
        ofDrawCircle(x_particle_center, y_particle_center, 5);
        
    }
    // ofDrawCircle(p_x, p_y, 5);
    
    
    ofSetColor(255);
    ofDrawCircle(x_path, y_path, 10);
    
    float theta_path_2 = theta_path - .1;
    float r_path_2 = height*sin(2*theta_path_2);
    float x_path_2 = x_origin + .6*r_path_2*cos(theta_path_2);
    float y_path_2 = y_origin + 1.2*r_path_2*sin(theta_path_2);
    
    ofSetColor(100);
    ofDrawCircle(x_path_2, y_path_2, 10);

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
