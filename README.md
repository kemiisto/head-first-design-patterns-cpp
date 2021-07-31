# Head First Design Patterns in modern C++

Examples from the [Head First Design Patterns, 2nd ed.](https://www.oreilly.com/library/view/head-first-design/9781492077992/) using C++20 instead of Java.

[Design Principles](design_principles.md)

[Design Patterns](design_patterns.md)

## Notes on C++ implementation

### 1. Strategy

The original Java implementation of the Strategy pattern from the book uses a Java-specific feature inside `MiniDuckSimulator` class, namely, functional interfaces `FlyBehavior` and `QuackBehavior` are implemented by lambda expressions:

```java
FlyBehavior cantFly = () -> System.out.println("I can't fly");
QuackBehavior squeak = () -> System.out.println("Squeak");
RubberDuck rubberDuckie = new RubberDuck(cantFly, squeak);
```

One can read more about this feature of the Java programming language, for instance, [here](http://tutorials.jenkov.com/java-functional-programming/functional-interfaces.html), but what is important for us here is that this feature has no analogue in C++, and thus, the corresponding code is simply absent in C++ implementation.

C++ templates allow us to create a static version of the Strategy design pattern where the behaviour of the `Duck` subclasses is fully decided at compile time.
This requires, however, a small change in the `Duck` class design, namely, `display()` method should not be `virtual` anymore, but rather a concrete one with some trivial implementation.
Using string literal as a template parameter requires a C++20 compiler and a wrapper StringLiteral as described [here](https://ctrpeach.io/posts/cpp20-string-literal-template-parameters/). 

### 2. Observer

Nothing important.
