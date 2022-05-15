#pragma once
const int DEFAULT_CAPACITY = 4;
template<class T>
class Vector
{
private:
    unsigned int vsize;
    unsigned int vcapacity;
    T* varr;

    // Helper methods used in the big four
    void copy(const Vector<T>& other);
    void clear();

public:
    Vector();
    Vector(const Vector<T>& other);
    Vector<T>& operator=(const Vector<T>& other);
    ~Vector();

    int getSize(); // number of elements in array -> how much of its memory we use
    int getCapacity(); // returns the size of the array
    T& at(int index); 
    void add(const T& element);
    void remove(int index); // redo removing method
    void resize(unsigned int capacity);

};

template<class T>
 void Vector<T>::copy(const Vector<T>& other)
{
    vsize = other.vsize;
    vcapacity = other.vcapacity;
    T* varr = new T[vcapacity];

    for (unsigned i = 0; i < vsize; i++)
    {
        varr[i] = other.varr[i];
    }
}

template<class T>
 void Vector<T>::clear()
{
    delete[] varr;
    varr = nullptr;
}

template<class T>
 Vector<T>::Vector()
{
    vsize = 0;
    vcapacity = DEFAULT_CAPACITY;
    varr = new T[vcapacity];
}

template<class T>
 Vector<T>::Vector(const Vector<T>& other)
{
    copy(other);
}

template<class T>
 Vector<T>& Vector<T>::operator=(const Vector<T>& other)
{
    if (this != &other)
    {
        clear();
        copy(other);
    }
    return *this;
}

template<class T>
 Vector<T>::~Vector()
{
    clear();
}

template<class T>
 int Vector<T>::getSize()
{
    return vsize;
}

template<class T>
 int Vector<T>::getCapacity()
{
    return vcapacity;
}

template<class T>
 T& Vector<T>::at(int index)
{
    return varr[index];
}

template<class T>
 void Vector<T>::add(const T& element)
{
    if (vsize >= vcapacity)
    {
        resize(2*vcapacity);
    }
    varr[vsize] = element;
    vsize++;
}

template<class T>
 void Vector<T>::remove(int index)
{
    for (size_t i = index; i < vsize-1; i++)
    {
        varr[i] = varr[i + 1];
    }
    vsize--;
}

template<class T>
 void Vector<T>::resize(unsigned int capacity)
{
    T* new_size_array = new T[capacity];
    for (unsigned i = 0; i < vcapacity; i++)
    {
        new_size_array[i] = varr[i];
    }
    delete[] varr;
    vcapacity = capacity;
    varr = new_size_array;
}

 
