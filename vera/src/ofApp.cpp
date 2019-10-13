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
    ofNoFill();
    ofSetBackgroundColor(255);
    
    const float height = ofGetViewportHeight();
    const float width = ofGetViewportWidth();
    
    const float num_polys = 6;
    const float num_polys_stacked = 15;
    
    // these are all percents
    const float left_margin_pct = .25;
    const float top_margin_pct = .15;
    const float base_poly_length_pct = .1;
    const float rand_offset_r_pct = .7;
    
    float left_margin = left_margin_pct * width;
    float top_margin = top_margin_pct * height;
    float base_poly_length = base_poly_length_pct * width;
    float rand_offset_r = rand_offset_r_pct * base_poly_length;
    
    ofColor black = ofColor(0);
    ofColor blue = ofColor(0, 0, 183.6);
    ofColor orange = ofColor(236.1, 163.4, 61.8);
    ofColor green = ofColor(50.6, 210.8, 180.6);
    ofColor purple = ofColor(129.0, 76.3, 139.5);
    ofColor colors[5] = {black, blue, orange, green, purple};
    
    
    for (int i = 0; i < num_polys; i++) {
        for (int j = 0; j < num_polys; j++) {
            
            float x = ofMap(i, 0, num_polys, left_margin, left_margin + base_poly_length*num_polys);
            float y = ofMap(j, 0, num_polys, top_margin, top_margin + base_poly_length*num_polys);
            
            // just pick a random color for now
            int color_idx = (int)ofRandom(5);
            ofSetColor(colors[color_idx]);
            
            for (int k = 0; k < num_polys_stacked; k++) {
                ofBeginShape();
                ofVertex(randomInCircle(x, y, ofRandom(rand_offset_r)));
                ofVertex(randomInCircle(x + base_poly_length, y, ofRandom(rand_offset_r)));
                ofVertex(randomInCircle(x + base_poly_length, y + base_poly_length, ofRandom(rand_offset_r)));
                ofVertex(randomInCircle(x, y + base_poly_length, ofRandom(rand_offset_r)));
                ofEndShape(true);
            }
        }
    }
}

// https://openframeworks.cc/ofBook/chapters/intro_to_graphics.html
// for random point in a circleo
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
