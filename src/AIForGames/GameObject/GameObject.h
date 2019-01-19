#pragma once
#include "../Renderer/BoidRenderer.h"
#include "../Physics/Kinematic.h"

namespace AIForGames
{
	class GameObject
	{
	public:
		GameObject();
		GameObject(ofVec3f i_position, float i_orientation);
		~GameObject();
		void DrawObject();

	private:
		Renderer::BoidRenderer* m_pBoid;
		Physics::Kinematic* m_pKinematic;
	};
}