#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofToggleFullscreen();
    ofSetFrameRate(60);
    
    ofBackground(0);
    
    for(int i =0;i < happys.size(); i++){


    velocity[i].x = ofRandom(-10,10);
    velocity[i].y = ofRandom(-10, 10);
    velocity[i].z = ofRandom(-10, 10);
    }
    for (int i=0; i<happys.size(); i++){
        happys.push_back(new WriteHappy());
        happys.at(i)->setHappyPosition(0,0,0);
    
    }
    

}

//--------------------------------------------------------------
void ofApp::update(){
    if (happys.size()>20){
    for(int i=0;i<happys.size();i++){
    happys.at(i)->getHappyPosition() += velocity[i].x;
    happys.at(i)->getHappyPosition() += velocity[i].y;
    happys.at(i)->getHappyPosition() += velocity[i].z;
    
   
    
    if (happys.at(i)->getHappyPosition().x <0 || happys.at(i)->getHappyPosition().x > ofGetWidth()){
        velocity[i].x *= -1;
    }
    if (happys.at(i)->getHappyPosition().y <0 || happys.at(i)->getHappyPosition().y >ofGetHeight()){
        velocity[i].y *= -1;
    }
    if ( happys.at(i)->getHappyPosition().z <-200 || happys.at(i)->getHappyPosition().z >200){
        velocity[i].z *= -1;
        }
    }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255,255,255);
    if(happys.size()>20){
      ofSetColor(ofRandom(0,255),
                 ofRandom(0,255),
                 ofRandom(0,255));
    }
    
    for(int i=0;i <happys.size();i++){
        happys.at(i)->draw();
    
    };
    
    
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key ==' '){
//        HAPPY_NUM == HAPPY_NUM +1;
        happys.push_back(new WriteHappy());
        happys.back()->setHappyPosition(ofRandom(ofGetWidth()),
                                        ofRandom(ofGetHeight()),
                                        ofRandom(-200, 200));
    }

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
