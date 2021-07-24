#ifndef HEAD_FIRST_DESIGN_PATTERNS_CPP_DISPLAY_ELEMENT_H
#define HEAD_FIRST_DESIGN_PATTERNS_CPP_DISPLAY_ELEMENT_H

class DisplayElement {
public:
    virtual ~DisplayElement() = default;
    virtual void display() = 0;
};

#endif // HEAD_FIRST_DESIGN_PATTERNS_CPP_DISPLAY_ELEMENT_H
