# Rule of Three
- The **copy constructor** which copies an existing object to instantiate a new object.
- The **copy assignment operator** which is a member function/operator that will be called for the `=` operator.
- The **destructor** which will be called automatically when an object is deleted or running to the end of lifetime.

## Copy Constructor
Take a const reference from an existing object and uses it to create/instantiate a new object.
## Copy assignment operator
Uses an existing object and assigns its value to another object of the same or compatible type.
This operator is a member function, not a friend function.
## Destructor
It will be called automatically whenever the object is deleted or its lifetime has finished.

# Extras
## Default Constructor
If a class isn't provided with a default constructor, the compiler will make its own.

This will not allow the default constructor to exist
```cpp
class RoT
{
  public:
    RoT() = delete;
};
```
If constructor made this way
```cpp
class RoT
{
  public:
    RoT() = default;
}
```
then the compiler is being asked to make the original constructor