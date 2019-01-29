#pragma once

#pragma once

#include "IRenderer.h"

namespace AIForGames
{
	namespace Renderer
	{
		class BoidRenderer : public IRenderer
		{
		public:
			BoidRenderer() : IRenderer() {}
			BoidRenderer(float i_x, float i_y, float i_z) : IRenderer(i_x, i_y, i_z) {}			
			BoidRenderer(ofVec3f i_pos) : IRenderer(i_pos) {}
			BoidRenderer(ofVec3f i_pos, float i_orientation) : IRenderer(i_pos, i_orientation) {}
			void Draw();
			void Draw(float i_x, float i_y);
			void Draw(float i_x, float i_y, float i_rotation);
			void Draw(ofVec2f i_position);
			void Draw(ofVec2f i_position, float i_rotation);
		};
	}
}