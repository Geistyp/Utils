//
//  ofxTextureDoubleFace.cpp
//  DoubleFace
//
//  Created by geistyp on 13-3-1.
//
//
#include "ofxTextureDoubleFace.h"

void ofxTextureDoubleFace::draw(int x, int y)
{
    glEnable(GL_CULL_FACE);
    
    glCullFace(GL_BACK);
    front_face_.draw(x, y);
    glCullFace(GL_FRONT);
    back_face_.draw(x, y);
    
    glDisable(GL_CULL_FACE);
}

void ofxTextureDoubleFace::draw(int x, int y, int w, int h)
{
    glEnable(GL_CULL_FACE);
    
    glCullFace(GL_BACK);
    front_face_.draw(x, y, w, h);
    glCullFace(GL_FRONT);
    back_face_.draw(x, y, w, h);
    
    glDisable(GL_CULL_FACE);
}