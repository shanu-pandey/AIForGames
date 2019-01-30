#pragma once
#include "KinematicArrive.h"
#include "../Physics/Kinematic.h"


namespace AIForGames
{
	namespace Movement
	{
		KinematicArrive::KinematicArrive(Physics::Kinematic* i_character, Physics::Kinematic* i_target, float i_maxSpeed, float i_radius, float i_timeToTarget)
		{
			m_pInputs = new MovementInputs();
			/*m_pInputs->source = new Physics::Kinematic();
			m_pInputs->destination = new Physics::Kinematic();*/
			m_pInputs->source = i_character;
			m_pInputs->destination = i_target;
			m_pInputs->maxSpeed = i_maxSpeed;
			m_pInputs->targetRadius = i_radius;
			m_pInputs->timeToTarget = i_timeToTarget;
		}

		KinematicArrive::KinematicArrive(MovementInputs* i_pInput)
		{
			m_pInputs = new MovementInputs();
			m_pInputs = i_pInput;
		}

		float KinematicArrive::CalculateNewOrientation(float i_orientation, ofVec2f i_velocity)
		{
			if (std::sqrt((i_velocity.x * i_velocity.x) + (i_velocity.y * i_velocity.y)) > 0)
				return std::atan2(i_velocity.y, i_velocity.x);

			return i_orientation;
		}

		KinematicSteeringOutput KinematicArrive::GetKinematicSteering()
		{
			KinematicSteeringOutput output;
			output.velocity = ofVec2f(0, 0);
			output.rotation = 0;

			output.velocity = m_pInputs->destination->GetPosition() - m_pInputs->source->GetPosition();

			if (output.velocity.length() < m_pInputs->targetRadius)
			{
				output.velocity = ofVec2f(0, 0);
				output.rotation = 0;
				return output;
			}

			output.velocity /= m_pInputs->timeToTarget;

			if (output.velocity.length() > m_pInputs->maxSpeed)
			{
				output.velocity.normalize();
				output.velocity *= m_pInputs->maxSpeed;
			}

			m_pInputs->source->SetOrientation(CalculateNewOrientation(m_pInputs->source->GetOrientation(), output.velocity));
			return output;
		}

		DynamicSteeringOutput KinematicArrive::GetDynamicSteering()
		{
			DynamicSteeringOutput output;
			output.angular = 0;
			output.linear = ofVec2f(0,0);
			return output;
		}
	}
}