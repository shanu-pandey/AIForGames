#pragma once
//#include "../GameObject/GameObject.h"
#include "ofVec2f.h"


struct KinematicSteeringOutput
{
	ofVec2f velocity;
	float rotation;
};

struct DynamicStreeringOutput
{
	ofVec2f linear;
	float angular;
};

namespace AIForGames
{
	class GameObject; 

	namespace Movement
	{
		static class MovementAlgorithms
		{
		public:	
			static float CalculateNewOrientation(float i_orientation, ofVec2f i_velocity);
			static KinematicSteeringOutput BasicMotion(GameObject* i_player, float i_maxSpeed);
			static KinematicSteeringOutput KinematicArrive(GameObject* i_player, GameObject* i_target, float i_radiusOfSatisfaction, float i_timeToTarget, float i_maxSpeed);
			static DynamicStreeringOutput DynamicArrive(GameObject* i_player, GameObject* i_target, float i_radiusOfSatisfaction, float i_timeToTarget);
		};
	}
}
