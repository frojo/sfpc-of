#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSeedRandom(mouseX * 1000);
    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            
            float x = ofMap(i, 0, 6, 50, 750);
            float y = ofMap(j, 0, 6, 50, 750);
            
            // there's like ~15 of them
            
            // https://openframeworks.cc/ofBook/chapters/intro_to_graphics.html
            // for random point in a circle
            
            
            ofBeginShape();
            ofVertex(randomInCircle(x, y, ofRandom(100)));
            ofVertex(randomInCircle(x + 100, y, ofRandom(100)));
            ofVertex(randomInCircle(x + 100, y + 100, ofRandom(100)));
            ofVertex(randomInCircle(x, y + 100, ofRandom(100)));
            ofEndShape();
        }
    }
}

ofVec2f ofApp::randomInCircle(float x, float y, float r) {
    float angle = ofRandom(ofDegToRad(360.0));
    float x_offset = cos(angle) * r;
    float y_offset = sin(angle) * r;
    return ofVec2f(x + x_offset, y + y_offset);
    
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
