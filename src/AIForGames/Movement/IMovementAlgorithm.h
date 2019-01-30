#pragma once
#include "ofVec2f.h"
#include "ofVectorMath.h"

namespace AIForGames
{
	namespace Movement
	{
		class IMovementAlgorithm
		{
		public:
			virtual void GetSteering() = 0;
			virtual float CalculateNewOrientation(float i_orientation, ofVec2f i_velocity) = 0;			
		};
	}
}
