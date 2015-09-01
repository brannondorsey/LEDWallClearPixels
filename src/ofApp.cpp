#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(ofColor::black);
    ofSetWindowShape(50, 50);
    
    leds.setup("192.168.2.100",
               "192.168.2.101",
               "192.168.2.102",
               "192.168.2.103");
    
    leds.connect();
    ofSetLogLevel(OF_LOG_VERBOSE);
    
    if (leds.allClientsConnected()) {
        
        ofPixels pixels;
        pixels.allocate(480, 120, OF_PIXELS_RGBA);
        pixels.set(0);
        
        leds.update(pixels);
        
        ofLogNotice("ofApp::update") << " dark pixels written.";
        ofExit(0);
        
    } else {
        ofLogError("ofApp::update") << "Clients not connected. Exiting.";
        ofExit(1);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
   
}

//--------------------------------------------------------------
void ofApp::draw(){
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
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
