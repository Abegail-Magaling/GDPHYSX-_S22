#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "cmath"

namespace physics {
	class MyVector{
		public:
			float x, y, z;

			MyVector() : x(0), y(0), z(0) {}
			MyVector(const float _x, const float _y, const float _z) : x(_x), y(_y), z(_z) {}
			
			explicit operator glm::vec3() const { return glm::vec3(x, y, z); }

			//Magnitude
			float Magnitude() const;

			//Direction
			MyVector direction() const;

			//Vector Addition
			void operator+= (const MyVector v);

			//Vector Subtraction
			void operator-= (const MyVector v);

			//Scalar Multiplication
			MyVector ScalarMultiplication(const float toScale) const;

			//Component Product
			void operator*= (const MyVector v);

			//Scalar Product (Dot Product)
			float DotProd(const MyVector v) const;

			//Vector Product (Cross Product)
			MyVector crossProd(const MyVector v) const;



	};
}


