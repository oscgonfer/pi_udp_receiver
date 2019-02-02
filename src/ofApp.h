#pragma once

#include "ofMain.h"
#include "ofxNetwork.h"
#include "ofUtils.h"
#include "ofPath.h"

class ofApp : public ofBaseApp{

	public:

		void setup();
		void update();
		void draw();

		ofxUDPManager udpConnection;
		int lengthUdp;

		#define totRows 4
		#define totColumns 4

		int array[totRows][totColumns];
		float arrayUpdateTime[totRows][totColumns];
		float resetTime;
		int reset_counter;
		int timeFadeOutUpdate = 6; // Time in seconds to fade out after new status
		int timeFadeOutAll = 3; // Time in seconds to fade out after reset

		// Draw
		int minRectPosx = 118;
		int minRectPosy = 24;
		int rectOffsetx = 189;
		int rectOffsety = 103;
		int rectSidex = 291;
		int rectSidey = 178;
		float anglex = -6.6;
		float angley = -0.5;
		float anglez = -0.4;
		int thicknessx = 48;
		int thicknessy = 33;
};

