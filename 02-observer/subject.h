#ifndef HEAD_FIRST_DESIGN_PATTERNS_CPP_SUBJECT_H
#define HEAD_FIRST_DESIGN_PATTERNS_CPP_SUBJECT_H

class Observer;

class Subject {
public:
    virtual ~Subject() = default;
    virtual void registerObserver(Observer* observer) = 0;
    virtual void removeObserver(Observer* observer) = 0;
    virtual void notifyObservers() = 0;
};

#endif // HEAD_FIRST_DESIGN_PATTERNS_CPP_SUBJECT_H
