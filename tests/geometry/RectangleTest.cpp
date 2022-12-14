//
// Created by Maxime Boucher on 17/11/2022.
//


#include "../../include/geometry/Rectangle.hpp"

TEST("testing rectangle.area") {
	Rectangle rectangle(
			glm::vec2(0, 0),
			glm::vec2(0, 5),
			glm::vec2(4, 0),
			glm::vec2(4, 5));

	REQUIRE_THAT(rectangle.area(), Catch::Matchers::WithinRel(20, 0.001));
}
