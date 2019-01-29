#include "../../ofApp.h"
#include "BoidRenderer.h"

namespace AIForGames
{
	void Renderer::BoidRenderer::Draw()
	{
		ofSetColor(0, 0, 0);	
		ofDrawCircle(position, 10);
	}		
	void Renderer::BoidRenderer::Draw(float i_x, float i_y)
	{
		ofSetColor(0, 0, 0);
		ofDrawCircle(i_x, i_y, 20);
	}

	void Renderer::BoidRenderer::Draw(float i_x, float i_y, float i_rotation)
	{
		ofSetColor(0, 0, 0);
		ofDrawCircle(i_x, i_y, 20);
	}

	void Renderer::BoidRenderer::Draw(ofVec2f i_position)
	{
		//ofSetColor(0, 0, 0);
		//ofPushMatrix();		
		////ofDrawCircle(i_position, 15);		
		////ofRotateX(55);
		//ofSetRectMode(OF_RECTMODE_CORNER);
		//ofSetOrientation(ofOrientation(OF_ORIENTATION_90_LEFT));
		////ofRotateDeg(35);
		//ofDrawTriangle(i_position.x - 10, i_position.y, i_position.x, i_position.y - 60, i_position.x + 10, i_position.y);
		//ofPopMatrix();		


		ofSetRectMode(OF_RECTMODE_CENTER);
		ofPushMatrix();
		ofTranslate(200, 200);// , 0);//move pivot to centre
		ofRotate(ofGetFrameNum() * 1, 0,0, 1);//rotate from centre
		ofPushMatrix();
		ofDrawTriangle(150,200,200,150,250,200);
		
		ofPopMatrix();
		ofPopMatrix();
	}

	void Renderer::BoidRenderer::Draw(ofVec2f i_position, float i_rotation)
	{
		ofSetColor(0, 0, 0);
		ofDrawCircle(i_position, 20);
		
	}
}