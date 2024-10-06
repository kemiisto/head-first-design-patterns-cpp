#ifndef HEAD_FIRST_DESIGN_PATTERNS_CPP_QUACK_BEHAVIORS_H
#define HEAD_FIRST_DESIGN_PATTERNS_CPP_QUACK_BEHAVIORS_H

struct QuackBehavior {
    virtual ~QuackBehavior() = default;
    virtual void quack() = 0;
};

struct Quack : public QuackBehavior {
    void quack() override {
        std::cout << "Quack" << '\n';
    }
};

struct Squeak : public QuackBehavior {
    void quack() override {
        std::cout << "Squeak" << '\n';
    }
};

struct MuteQuack : public QuackBehavior {
    void quack() override {
        std::cout << "<< Silence >>" << '\n';
    }
};

#endif // HEAD_FIRST_DESIGN_PATTERNS_CPP_QUACK_BEHAVIORS_H
