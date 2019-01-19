#include "GameObject.h"

namespace AIForGames
{
	GameObject::GameObject()
	{
		m_pBoid = new Renderer::BoidRenderer();
		m_pKinematic = new Physics::Kinematic();
	}

	GameObject::GameObject(ofVec3f i_position, float i_orientation)
	{
		m_pBoid = new Renderer::BoidRenderer(i_position, i_orientation);
		m_pKinematic = new Physics::Kinematic();
	}

	GameObject::~GameObject()
	{

	}
	
	void GameObject::DrawObject()
	{
		m_pBoid->Draw();
	}
}