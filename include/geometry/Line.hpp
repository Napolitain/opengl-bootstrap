//
// Created by Maxime Boucher on 16/11/2022.
//

#ifndef OPENGL_BOOTSTRAP_LINE_HPP
#define OPENGL_BOOTSTRAP_LINE_HPP

#include "../../cmake-build-debug/_deps/glm-src/glm/vec2.hpp"

class Line {

	glm::vec2 a;
	glm::vec2 b;

public:
	Line(const glm::vec2 &a, const glm::vec2 &b);
	[[nodiscard]] float length() const;

};


#endif //OPENGL_BOOTSTRAP_LINE_HPP
