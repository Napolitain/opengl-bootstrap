//
// Created by Maxime Boucher on 12/11/2022.
//

#ifndef OPENGL_BOOTSTRAP_RECTANGLE_HPP
#define OPENGL_BOOTSTRAP_RECTANGLE_HPP


#include "Surface.hpp"

class Rectangle : public Surface {

	glm::vec2 a;
	glm::vec2 b;
	glm::vec2 c;
	glm::vec2 d;

public:
	Rectangle(const glm::vec2 &a, const glm::vec2 &b, const glm::vec2 &c, const glm::vec2 &d);
	float area() override;
	float perimeter() override;

};


#endif //OPENGL_BOOTSTRAP_RECTANGLE_HPP
