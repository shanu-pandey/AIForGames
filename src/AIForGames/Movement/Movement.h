#pragma once
//#include "../GameObject/GameObject.h"
#include "ofVec2f.h"


struct KinematicSteeringOutput
{
	ofVec2f velocity;
	float rotation;
};

namespace AIForGames
{
	class GameObject; 

	namespace Movement
	{
		static class BasicMotion
		{
		public:
			//void StartMovement(GameObject* i_player);
			static KinematicSteeringOutput GetSteering(GameObject* i_player, float i_maxSpeed);
		};
	}
}
