#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSeedRandom();
    
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
    for (int i = 0; i < 500; i++) {
        
        cout << mouseX << endl;
        float theta_particle = theta_path - ((float)i)/1000;
        float r_particle = height*sin(2*theta_particle);
        float x_particle_center = x_origin + .6*r_particle*cos(theta_particle);
        float y_particle_center = y_origin + 1.2*r_particle*sin(theta_particle);
        
        float amp = i * ofNoise(2);
        float phase = ofRandom(2*PI);
        float x_particle = x_particle_center + amp*sin(t*10 + phase);
        float y_particle = y_particle_center;
        
        ofDrawCircle(x_particle, y_particle, 5);
        
        // builds taking slow
        // caching? being invalidated by my computer somehow?
        // ask zach
        // try with new project
        // system profiler
        
        // bootcamp swarm - just load it up?
        // offsets into noise function
        // within a range?
        // particle systems? look for addons? would just let me tweak it to get to what i want
        
        // picking up text
        // don't try to collide first. although box2d
        // rigidbody is a lot harder than smooth particle-like interaction
        // daniel shiffman - the nature of code
        //
    }
    // ofDrawCircle(p_x, p_y, 5);
    
    
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
