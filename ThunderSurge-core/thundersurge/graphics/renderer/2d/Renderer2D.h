#pragma once

#include <GL/glew.h>
#include "../../../core/math/math.h"
#include "Renderable2d.h"

namespace thundersurge {

	namespace graphics {
		class Renderer2D {
			public:
				virtual void begin() {}
				virtual void submit(const Renderable2D* renderable) = 0;
				virtual void end() {}
				virtual void flush() = 0;
		};
	}
}