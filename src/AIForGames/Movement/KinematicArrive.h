#pragma once
#include "ofVec2f.h"
#include "IMovementAlgorithm.h"

namespace AIForGames
{
	namespace Movement
	{
		class KinematicArrive : public IMovementAlgorithm
		{
		public:
			KinematicArrive(Physics::Kinematic* i_character, Physics::Kinematic* i_target, float i_maxSpeed, float i_radius, float i_timeToTarget);
			KinematicArrive(MovementInputs* i_pInput);
			float CalculateNewOrientation(float i_orientation, ofVec2f i_velocity);
			KinematicSteeringOutput GetKinematicSteering();
			DynamicSteeringOutput GetDynamicSteering();
		private:
			MovementInputs * m_pInputs;
		};
	}
}
