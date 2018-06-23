#pragma once

#include <GL/glew.h>
#include "../../math/math.h"
#include "Renderable2d.h"

namespace thundersurge {

	namespace graphics {
		class Renderer2D {
			public:
				virtual void submit(const Renderable2D* renderable) = 0;
				virtual void flush() = 0;
		};
	}
}