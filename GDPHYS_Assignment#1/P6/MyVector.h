#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

namespace physics {
	class MyVector{
		public:
			float x, y, z;

			MyVector() : x(0), y(0), z(0) {}
			MyVector(const float _x, const float _y, const float _z) : x(_x), y(_y), z(_z) {}
			
			explicit operator glm::vec3() const { return glm::vec3(x, y, z); }


			//Vector Addition
			void operator+= (const MyVector v) {
				this->x += v.x;
				this->y += v.y;
				this->z += v.z;
			}
			
			//Vector Subtraction
			void operator-= (const MyVector v) {
				this->x -= v.x;
				this->y -= v.y;
				this->z -= v.z;
			}

			//Component Product
			void operator*= (const MyVector v) {
				this->x *= v.x;
				this->y *= v.y;
				this->z *= v.z;
			}


	};
}

