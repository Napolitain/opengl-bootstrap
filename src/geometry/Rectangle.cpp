//
// Created by Maxime Boucher on 12/11/2022.
//

#include "geometry/Rectangle.hpp"
#include "geometry/Line.hpp"

Rectangle::Rectangle(const glm::vec2 &a, const glm::vec2 &b, const glm::vec2 &c, const glm::vec2 &d) : a(a), b(b), c(c),
																									   d(d) {}

float Rectangle::area() {
	return Line(a, b).length() * Line(a, c).length();
}

float Rectangle::perimeter() {
	return 2 * (Line(a, b).length() + Line(a, c).length());
}