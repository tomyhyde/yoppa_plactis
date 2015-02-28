#include "ofApp.h"
#define HAPPY_NUM 20
//--------------------------------------------------------------
void ofApp::setup(){
    ofToggleFullscreen();
    ofSetFrameRate(60);
    ofBackground(0);
    //soundStream.setup(this, 0, 1, 44100, 2564);

    

}

//--------------------------------------------------------------
void ofApp::update(){
    if (happys.size()>HAPPY_NUM){
    for(int i=0;i<happys.size();i++){

        ofVec3f pt =ofVec3f(velocity[i]);
  
    happys.at(i)->setHappyPosition(happys.at(i)->getHappyPosition() + pt);
 
        
    if (happys.at(i)->getHappyPosition().x <0 || happys.at(i)->getHappyPosition().x > ofGetWidth()){
        velocity[i].x *= -1;

    }
    if (happys.at(i)->getHappyPosition().y <0 || happys.at(i)->getHappyPosition().y >ofGetHeight()){
         velocity[i].y *= -1;

    }
    if ( happys.at(i)->getHappyPosition().z <-200 || happys.at(i)->getHappyPosition().z >200){
         velocity[i].z *= -1;
        }
        ;
    }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255,255,255);
    for(int i=0;i <happys.size();i++){
        happys.at(i)->draw();
    
    };
    
    
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key ==' '){

        happys.push_back(new WriteHappy());
        happys.back()->setHappyPosition(ofRandom(ofGetWidth()),
                                        ofRandom(ofGetHeight()),
                                        ofRandom(-200, 200));
        
        velocity[happys.size() - 1].x = ofRandom(-5, 5);
        velocity[happys.size() - 1].y = ofRandom(-5, 5);
        velocity[happys.size() - 1].z = ofRandom(-5, 5 );
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
