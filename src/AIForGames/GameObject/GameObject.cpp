#include "GameObject.h"

namespace AIForGames
{
	GameObject::GameObject()
	{
		m_pBoid = new Renderer::BoidRenderer(100,100,100);
		m_pKinematic = new Physics::Kinematic();
	}

	GameObject::GameObject(float i_x, float i_y)
	{
		m_pBoid = new Renderer::BoidRenderer(100, 100, 100);
		m_pKinematic = new Physics::Kinematic(i_x, i_y);
	}

	GameObject::GameObject(ofVec2f i_position)
	{
		m_pBoid = new Renderer::BoidRenderer(100, 100, 100);
		m_pKinematic = new Physics::Kinematic(i_position);
	}

	GameObject::GameObject(float i_x, float i_y, float i_orientation)
	{
		m_pBoid = new Renderer::BoidRenderer(100, 100, 100);
		m_pKinematic = new Physics::Kinematic(i_x, i_y, i_orientation);
	}

	GameObject::GameObject(ofVec2f i_position, float i_orientation)
	{
		m_pBoid = new Renderer::BoidRenderer(100, 100, 100);
		m_pKinematic = new Physics::Kinematic(i_position, i_orientation);
	}

	GameObject::GameObject(ofVec2f i_position, ofVec2f i_velocity, float i_orientation, float i_rotation)
	{
		m_pBoid = new Renderer::BoidRenderer(100, 100, 100);
		m_pKinematic = new Physics::Kinematic(i_position, i_velocity, i_orientation, i_rotation);
	}

	GameObject::~GameObject()
	{

	}
	
	Renderer::BoidRenderer* GameObject::GetRenderer()
	{
		return m_pBoid;
	}

	void GameObject::SetRenderer(Renderer::BoidRenderer* i_renderer)
	{
		m_pBoid = i_renderer;
	}

	Physics::Kinematic* GameObject::GetKinematic()
	{
		return m_pKinematic;
	}

	void GameObject::SetKinematic(Physics::Kinematic* i_kinematic)
	{
		m_pKinematic = i_kinematic;
	}


	void GameObject::DrawObject()
	{
		m_pBoid->Draw(m_pKinematic->GetPosition());
	}

	void GameObject::Update()
	{
		//m_pKinematic->SetPosition(ofVec2f(m_pKinematic->GetPosition().x + 0.11, m_pKinematic->GetPosition().y + 0.11));
	}
}