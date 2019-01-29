#pragma once
#include "../Renderer/BoidRenderer.h"
#include "../Physics/Kinematic.h"

namespace AIForGames
{
	class GameObject
	{
	public:
		GameObject();
		GameObject(float i_x, float i_y);
		GameObject(ofVec2f i_position);
		GameObject(float i_x, float i_y, float orientation);
		GameObject(ofVec2f i_position, float i_orientation);
		GameObject(float i_radius, ofVec2f i_position, float i_orientation);
		GameObject(ofVec2f i_position, ofVec2f i_velocity, float i_orientation, float i_rotation);
		~GameObject();
		Renderer::BoidRenderer* GetRenderer();
		void SetRenderer(Renderer::BoidRenderer* i_renderer);
		Physics::Kinematic* GetKinematic();
		float Getradius();
		void SetRadius(float i_radius);
		void SetKinematic(Physics::Kinematic* i_kinematic);
		void DrawObject();
		void Update();

	private:
		float m_radius = 10;
		Renderer::BoidRenderer* m_pBoid;
		Physics::Kinematic* m_pKinematic;
	};
}