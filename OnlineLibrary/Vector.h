#pragma once
class Vector
{
private:
    // Helper methods used in the big four
    void copy(const Vector& other);
    void clear();

private:
    int vsize;
    int vcapacity;
    int* varr;
public:
    Vector();
    Vector(const Vector& other);
    Vector& operator=(const Vector& other);
    ~Vector();

    int size(); // numbers of elements in array -> how much of its memory we use
    int capacity(); // returns the size of the array
    int& at(int index);
    void add(int element);
    void remove(int index);
    void changeCapacity(int capacity);

};