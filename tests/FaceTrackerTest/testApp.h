#pragma once

#include "ofMain.h"
#include "FaceTracker.h"
#include "ofxXmlSettings.h"
#include <deque>

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		vector<ofPoint>     T;
		vector<ofRectangle> B;
		vector<ofPoint>     V;
		vector<ofColor>     C;

		FaceTracker        tracker;

		ofImage bg;
		static unsigned char testApp::colors[];

		
};
