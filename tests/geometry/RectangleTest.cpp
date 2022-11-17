//
// Created by Maxime Boucher on 17/11/2022.
//

#include "catch2/catch_all.hpp"
#include "../../include/geometry/Rectangle.hpp"

TEST_CASE("testing the factorial function") {
	Rectangle rectangle(
			glm::vec2(0, 0),
			glm::vec2(0, 5),
			glm::vec2(4, 0),
			glm::vec2(4, 5));

	REQUIRE_THAT(rectangle.area(), Catch::Matchers::WithinRel(20, 0.001));
}
