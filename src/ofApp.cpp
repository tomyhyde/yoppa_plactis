#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofToggleFullscreen();
    ofSetFrameRate(60);
    ofSetCircleResolution(60);
    ofBackground(0);
    
    for(int i =0;i < CIRCLE_NUM; i++){
    posX[i] = ofRandom(ofGetWidth());
    posY[i] = ofRandom(ofGetHeight());

    velocityX[i] = ofRandom(-10,10);
    velocityY[i] = ofRandom(-10, 10);
    }
    

}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i=0;i<CIRCLE_NUM;i++){
    posX[i] += velocityX[i];
    posY[i] += velocityY[i];
   
    
    if (posX[i] <0 || posX[i] > ofGetWidth()){
        velocityX[i] *= -1;
    }
    if (posY[i] <0 || posY[i] >ofGetHeight()){
        velocityY[i] *= -1;
    }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255,255,255);
    
    for(int i=0;i <CIRCLE_NUM;i++){
    ofCircle(posX[i], posY[i], 20);
    };
//    ofCircle(positionX, positionY, 20);
    
    

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
