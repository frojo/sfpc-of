#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);

}

//--------------------------------------------------------------
void ofApp::update(){
    
    if (ofRandom(100) > 95) {
        Heart heart = Heart();
        heart.x = ofRandom(ofGetWidth());
        heart.y = ofRandom(ofGetHeight());
        heart.size = 20;
        hearts.push_back(heart);
    }

}

void drawHeart(float x_center, float y_center, float size) {
    
    ofPolyline line;

    float i = 0;
    while (i < TWO_PI) { // make a heart
        float r = (2-2*sin(i) + sin(i)*sqrt(abs(cos(i))) / (sin(i)+1.4)) * -size;
        float x = x_center + cos(i) * r;
        float y = y_center + sin(i) * r;
        line.addVertex(ofVec3f(x,y,0));
        i+=0.005*HALF_PI*0.5;
    }
    line.close(); // close the shape
    line.draw();
    
}
//--------------------------------------------------------------
void ofApp::draw() {
    float width = ofGetScreenWidth();
    float height = ofGetScreenHeight();
    
    ofSetColor(242, 31, 161);
    ofFill();
    for (int i = 0; i < hearts.size(); i++) {
        drawHeart(hearts[i].x, hearts[i].y, hearts[i].size);
    }
    
//    ofPolyline b;
//
//    float angle = 0;
//    while (angle < TWO_PI ) {
//        b.curveTo(100*cos(angle), 0, 100*sin(angle));
//        b.curveTo(300*cos(angle), 300, 300*sin(angle));
//        angle += TWO_PI / 30;
//    }
//    b.draw();
//
    ofPolyline line;
    
    drawHeart(width/2, height/2, 40);

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
