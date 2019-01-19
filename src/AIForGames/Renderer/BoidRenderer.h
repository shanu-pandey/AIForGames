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
			BoidRenderer(float i_x, float i_y, float i_z) : IRenderer(i_x, i_y, i_z) {}
			BoidRenderer(ofVec3f i_pos) : IRenderer(i_pos) {}
			void Draw();
		};
	}
}