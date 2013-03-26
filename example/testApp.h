#pragma once

#include "ofMain.h"
#include "ofxCocoaWindow.h"
#import "ofxCodeEditor.h"

class testApp : public ofBaseApp
{
public:
	testApp(int argc, char** argv, ofxCocoaWindow* window);

	void setup	();
	void update	();
	void draw	();

	void keyPressed		( int key );
	void keyReleased	( int key );
	void mouseMoved		( int x, int y );
	void mouseDragged	( int x, int y, int button );
	void mousePressed	( int x, int y, int button );
	void mouseReleased	( int x, int y, int button );
	void windowResized	( int w, int h );
	
	ofxCodeEditor*	mCodeEditor;
  ofxCocoaWindow*	mCocoaWindow;
};
