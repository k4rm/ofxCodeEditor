#include "ofxCocoaWindow.h"
#include "testApp.h"

//--------------------------------------------------------------
int main(int argc, char* argv[]) {

	ofxCocoaWindow cocoaWindow;

	ofSetupOpenGL(&cocoaWindow, 1024, 768, OF_WINDOW);				

 	cocoaWindow.registerForDraggedTypes();
	
	ofRunApp(new testApp(argc, argv, &cocoaWindow)); // start the app
}
