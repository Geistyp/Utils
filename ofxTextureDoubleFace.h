//
//  ofxTextureDoubleFace.h
//  DoubleFace
//
//  Created by geistyp on 13-3-1.
//
//

#ifndef __DoubleFace__ofxTextureDoubleFace__
#define __DoubleFace__ofxTextureDoubleFace__

#include "ofMain.h"
//#include "ofTexture.h"

class ofxTextureDoubleFace
{
public:
    
    //----------------------------------------------------------
    void setup(ofTexture texfont, ofTexture texback)
    {
        front_face_ = texfont;
        back_face_  = texback;
    }
    
    //----------------------------------------------------------
    void draw(int x, int y);
    void draw(int x, int y, int w, int h);
    
    //----------------------------------------------------------
    void setAnchorPercent(float xPct, float yPct){
        front_face_.setAnchorPercent(xPct, yPct);
        back_face_.setAnchorPercent(xPct, yPct);
    }
    
    //----------------------------------------------------------
    void setAnchorPoint(float x, float y){
        front_face_.setAnchorPoint(x, y);
        back_face_.setAnchorPoint(x, y);
    }
    
private:
    
    ofTexture   front_face_, back_face_;
    
};

#endif /* defined(__DoubleFace__ofxTextureDoubleFace__) */
