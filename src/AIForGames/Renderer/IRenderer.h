#pragma once
#include "ofVec2f.h"
#include "ofVectorMath.h"

namespace AIForGames
{
	namespace Renderer
	{
		class IRenderer
		{
		protected:
			ofVec3f position;
			float orientation;
		public:
			IRenderer()
			{
				position.x = 0.0f;
				position.y = 0.0f;
				position.z = 0.0f;
				orientation = 0.0f;
			}
			IRenderer(float i_x, float i_y, float i_z)
			{
				position.x = i_x;
				position.y = i_y;
				position.z = i_z;
				orientation = 0.0f;
			}
			IRenderer(ofVec3f i_pos)
			{
				position = i_pos;
				orientation = 0.0f;
			}
			IRenderer(ofVec3f i_pos, float i_orientation)
			{
				position = i_pos;
				orientation = i_orientation;
			}
			virtual void Draw() = 0;
			virtual void Draw(float i_x, float i_y) = 0;
			virtual void Draw(float i_x, float i_y, float i_rotation) = 0;
			virtual void Draw(ofVec2f i_position) = 0;
			virtual void Draw(ofVec2f i_position, float i_rotation) = 0;
		};
	}
}
