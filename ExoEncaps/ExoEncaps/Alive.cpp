#include "Alive.h"

Alive::Alive(float m_Health, float c_Health) {

    float maxHp = m_Health;
    float curHp = c_Health;

}

void Alive::fullLife(float m_Health, float c_Health) {

    c_Health += m_Health - c_Health;

}

float Alive::getCurentHP() {

    return c_Health;

}

void Alive::takeDamage(float damage, float c_Health) {

    c_Health -= damage;

}