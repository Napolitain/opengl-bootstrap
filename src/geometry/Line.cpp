//
// Created by Maxime Boucher on 16/11/2022.
//

#include "geometry/Line.hpp"
#include <cmath>

Line::Line(const glm::vec2 &a, const glm::vec2 &b) : a(a), b(b) {}

float Line::length() const {
	return sqrt(pow(a.x - b.x, 2) + powf(b.y - a.y, 2));
}
