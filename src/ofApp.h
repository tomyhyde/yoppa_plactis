#pragma once

#include "ofMain.h"

class WriteHappy{
private:
    ofPoint mHappyPosition = ofPoint(0,0,0);
    
    
public:
    WriteHappy(){
    }
    
    
    void setHappyPosition(float x, float y){
        mHappyPosition.set(x, y);
    }
    void setHappyPosition(ofPoint position){
        mHappyPosition = position;
    }
    ofPoint getHappyPosition(){
        return mHappyPosition;
    }
    void draw(ofTrueTypeFont &milano){
        ofSetColor(ofRandom(0,255),ofRandom(0,255),ofRandom(0,255));
        //ofDrawBitmapString("HAPPY", getHappyPosition());
        milano.loadFont("Milano_regular.ttf",24);
        milano.drawString("HAPPY", getHappyPosition().x,getHappyPosition().y);
        
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
    ofVec2f velocity[200];
    
    ofTrueTypeFont milano;
    
    
    
		
};
