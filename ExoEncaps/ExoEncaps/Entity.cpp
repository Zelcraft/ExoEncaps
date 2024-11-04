#include "Entity.h"
#include "Vector2.h"

Entity::Entity(float m_x, float m_y) {

    m_x = 0;
    m_y = 0;

}

float Entity::getPos() {

    return Vector2::m_x, m_y;

}

void Entity::setPos(float x, float y) {

    Vector2::m_x = x;
    Vector2::m_y = y;

}

