#pragma once

#include "ofMain.h"

class WriteHappy{
private:
    ofPoint mHappyPosition = ofPoint(0,0,0);
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
        ofDrawBitmapString("HAPPY", getHappyPosition());
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
    
//    static const int HAPPY_NUM = 100;
    vector <WriteHappy *> happys;
    
//    ofVec3f position[HAPPY_NUM];
    ofVec3f velocity[100];
    
    
    
		
};
