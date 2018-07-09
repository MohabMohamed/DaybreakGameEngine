#ifndef _CAMERA_H_
#define _CAMERA_H_

#include "GameComponent.h"

namespace thundersurge {

	namespace components {

		using namespace graphics;

		class Camera : public GameComponent {
		private:
			mat4 m_projection;
		public:
			Camera(const mat4& projection)
				: m_projection(projection) {
			}

			mat4 getProjection() {
				mat4 rot = getTransform()->getRotation().toRotationMatrix();
				mat4 trans = mat4::translation(getTransform()->getTranslation());

				return m_projection * (rot * trans);
			}

			void update(float delta) {}

			void render(Shader* shader) {
				shader->setUniformMat4("projection", getProjection());
				shader->setUniform3f("viewPos", getTransform()->getTranslation());
			}
		};
	}
}

#endif