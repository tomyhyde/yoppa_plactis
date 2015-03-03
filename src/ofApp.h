#pragma once

#include "ofMain.h"

class WriteHappy{
private:
    ofPoint mHappyPosition = ofPoint(0,0,0);
    ofTrueTypeFont mirano;
    
public:
    WriteHappy(){
    }
    
    
    void setHappyPosition(float x, float y, float z){
        mHappyPosition.set(x, y, z);
    }
    void setHappyPosition(ofPoint position){
        mHappyPosition = position;
    }
    ofPoint getHappyPosition(){
        return mHappyPosition;
    }
    void draw(){
        ofSetColor(ofRandom(0,255),ofRandom(0,255),ofRandom(0,255));
        //ofDrawBitmapString("HAPPY", getHappyPosition());
        mirano.loadFont("Mirano_regular.ttf",24);
        mirano.drawString("HAPPY", getHappyPosition().x,getHappyPosition().y);
        
    }
    
};

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
        //void audioIn(float * input, int bufferSize, int nChannels);

    ofSoundStream soundStream;
    float curVol;
//    static const int HAPPY_NUM = 100;
    vector <WriteHappy *> happys;
    
//    ofVec3f position[HAPPY_NUM];
    ofVec3f velocity[200];
    
    
    
    
    
		
};
