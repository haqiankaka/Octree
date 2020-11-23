
#include <cmath>
struct Vec3;

struct Vec3 {
	union {        
		struct {
			float x,y,z;
		};
		float D[3];
	};

	Vec3() { }
	Vec3(float _x, float _y, float _z)
		:x(_x), y(_y), z(_z)
	{ }
};