#ifndef HEAD_FIRST_DESIGN_PATTERNS_CPP_FLY_BEHAVIORS_H
#define HEAD_FIRST_DESIGN_PATTERNS_CPP_FLY_BEHAVIORS_H

struct FlyBehavior {
    virtual ~FlyBehavior() = default;
    virtual void fly() = 0;
};

struct FlyNoWay : public FlyBehavior {
    void fly() override {
        std::cout << "I can't fly" << '\n';
    }
};

struct FlyRocketPowered : public FlyBehavior {
    void fly() override {
        std::cout << "I'm flying with a rocket" << '\n';
    }
};

struct FlyWithWings : public FlyBehavior {
    void fly() override {
        std::cout << "I'm flying!!" << '\n';
    }
};

#endif // HEAD_FIRST_DESIGN_PATTERNS_CPP_FLY_BEHAVIORS_H
