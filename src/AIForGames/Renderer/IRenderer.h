#pragma once
#include "ofVec3f.h"
#include "ofVectorMath.h"

namespace AIForGames
{
	namespace Renderer
	{
		class IRenderer
		{
		protected:
			ofVec3f position;
		public:
			IRenderer(float i_x, float i_y, float i_z)
			{
				position.x = i_x;
				position.y = i_y;
				position.z = i_z;
			}
			IRenderer(ofVec3f i_pos)
			{
				position = i_pos;
			}
			virtual void Draw() = 0;
		};
	}
}
