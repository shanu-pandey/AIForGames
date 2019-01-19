#include "../../ofApp.h"
#include "BoidRenderer.h"

namespace AIForGames
{
	void Renderer::BoidRenderer::Draw()
	{
		ofSetColor(0, 0, 0);	
		ofDrawTriangle(80, 160, 150,  120, 80, 80);
	}
}