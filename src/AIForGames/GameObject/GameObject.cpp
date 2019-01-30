#include "GameObject.h"
#include "../Movement/Movement.h"
#include "../../ofApp.h"

namespace AIForGames
{
	GameObject::GameObject()
	{
		m_pBoid = new Renderer::TargetRenderer();
		m_pKinematic = new Physics::Kinematic();
	}

	GameObject::GameObject(float i_x, float i_y)
	{
		m_pBoid = new Renderer::TargetRenderer();
		m_pKinematic = new Physics::Kinematic(i_x, i_y);
	}

	GameObject::GameObject(ofVec2f i_position)
	{
		m_pBoid = new Renderer::TargetRenderer();
		m_pKinematic = new Physics::Kinematic(i_position);
	}

	GameObject::GameObject(float i_x, float i_y, float i_orientation)
	{
		m_pBoid = new Renderer::BoidRenderer();
		m_pKinematic = new Physics::Kinematic(i_x, i_y, i_orientation);
	}

	GameObject::GameObject(ofVec2f i_position, float i_orientation)
	{
		m_pBoid = new Renderer::BoidRenderer();
		m_pKinematic = new Physics::Kinematic(i_position, i_orientation);
	}

	GameObject::GameObject(float i_radius, ofVec2f i_position, float i_orientation)
	{
		m_radius = i_radius;
		m_pBoid = new Renderer::BoidRenderer();
		m_pKinematic = new Physics::Kinematic(i_position, i_orientation);
	}

	GameObject::GameObject(ofVec2f i_position, ofVec2f i_velocity, float i_orientation, float i_rotation)
	{
		m_pBoid = new Renderer::BoidRenderer();
		m_pKinematic = new Physics::Kinematic(i_position, i_velocity, i_orientation, i_rotation);
	}

	GameObject::~GameObject()
	{

	}
	
	Renderer::IRenderer* GameObject::GetRenderer()
	{
		return m_pBoid;
	}

	void GameObject::SetRenderer(Renderer::IRenderer* i_renderer)
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

	float GameObject::Getradius()
	{
		return m_radius;
	}

	void GameObject::SetRadius(float i_radius)
	{
		m_radius = i_radius;
	}

	void GameObject::DrawObject()
	{
		m_pBoid->Draw(m_radius, m_pKinematic->GetPosition(), m_pKinematic->GetOrientation());		
		
		//Uncomment to draw bread crumbs

		/*if (counter%45 == 0)
		{
			AddBreadCrumb(m_pKinematic->GetPosition());
		}
		DrawBreadCrumbs();*/
	}

	void GameObject::Update()
	{
		counter++;		
		//Algorithm 1: Basic Motion; movement round the corners
		//KinematicSteeringOutput steering = Movement::MovementAlgorithms::BasicMotion(this, 600);

		//Algorithm 2: Seek Steering Behavior, using Kinematics Arrive and Dynamic Arrive
		KinematicSteeringOutput steering = Movement::MovementAlgorithms::KinematicArrive(this, this->m_pTarget, 10, 1, 800);
		m_pKinematic->Update(steering);		
	}

	void GameObject::SetTarget(GameObject* i_target)
	{
		m_pTarget = i_target;
	}

	void GameObject::DrawBreadCrumbs()
	{		
		for (std::list<ofVec2f>::iterator it = breadCrumbs.begin(); it != breadCrumbs.end(); ++it)
		{		
			ofSetColor(255, 212, 0);
			ofDrawCircle(*it, 10);
		}
	}

	void GameObject::AddBreadCrumb(ofVec2f i_posiiton)
	{
		breadCrumbs.push_back(i_posiiton);		
	}
}