#include "ofApp.h"
#define HAPPY_NUM 20
//--------------------------------------------------------------
void ofApp::setup(){
    ofToggleFullscreen();
    ofSetFrameRate(60);
    ofBackground(0);

    milano.loadFont("Milano_regular.ttf", 50);
    track1.loadSound("happy_edit.mp3");
    trackBecause.loadSound("because_on.mp3");
    track3.loadSound("happy_voice.mp3");
    kikocapture.loadMovie("i_am_kiko_capture.mov");
    
    
    
    
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    if (happys.size()>HAPPY_NUM){
        
    
    
        
    for(int i=0;i<happys.size();i++){

        ofVec2f pt =ofVec2f(velocity[i]);
  
    happys.at(i)->setHappyPosition(happys.at(i)->getHappyPosition() + pt);
 
        
    if (happys.at(i)->getHappyPosition().x <0 || happys.at(i)->getHappyPosition().x > ofGetWidth()){
        velocity[i].x *= -1;

    }
    if (happys.at(i)->getHappyPosition().y <0 || happys.at(i)->getHappyPosition().y >ofGetHeight()){
         velocity[i].y *= -1;

    }
    
    
        
    
        
    if (HappyPlay == true) {
        track1.play();
        track1.setLoop( true);
        HappyPlay = false;
    }
    
   
    
    if (KikoPlay == true) {
        kikocapture.play();
        kikocapture.update();
        }
    
        
   
    
    }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255,255,255);
    kikocapture.draw(0, 30, 1280, 720);
    for(int i=0;i <happys.size();i++){
        happys.at(i)->draw(milano);
        
    
    };
   
    
    
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key ==' '){
        
        track3.play();

        happys.push_back(new WriteHappy());
        happys.back()->setHappyPosition(ofRandom(ofGetWidth()),
                                        ofRandom(ofGetHeight()));
        
        if(happys.size() ==HAPPY_NUM){
            HappyPlay = true;
        }

//        if(happys.size() ==HAPPY_NUM){
//            KikoPlay = true;
//        }
        }
        
        velocity[happys.size() - 1].x = ofRandom(-5, 5);
        velocity[happys.size() - 1].y = ofRandom(-5, 5);
    
        if(happys.size() == HAPPY_NUM){
           BecauseOn = true;
        }
        if (BecauseOn == true) {
           trackBecause.play();
           BecauseOn = false;
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
