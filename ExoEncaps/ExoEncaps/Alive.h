#pragma once
class Alive {

public:

    float m_Health; //Max health//
    float c_Health; //Curent health//

    float damage;

    Alive(float m_Health, float c_Health);
    ~Alive();

    virtual void fullLife(float m_Health, float c_Health);
    virtual float getCurentHP();
    virtual void takeDamage(float damage, float c_Health);

};