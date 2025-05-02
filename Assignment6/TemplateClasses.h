#ifndef TEMPLATECLASSES_H
#define TEMPLATECLASSES_H

#include <vector>


template<typename T>
class TemplateClasses;

template<typename T>
class TemplateClasses {
public:
    T data;
    int number;
    std::vector<float> vec;

    TemplateClasses(T obj, int num, std::vector<float> vect)
        : data(obj), number(num), vec(vect) {}

    bool foo();
};


template<>
class TemplateClasses<int> {
public:
    int data;
    int number;
    std::vector<float> vec;

    TemplateClasses(int obj, int num, std::vector<float> vect)
        : data(obj), number(num), vec(vect) {}

    bool foo() {
        return true;
    }
};

template<>
class TemplateClasses<double> {
public:
    double data;
    int number;
    std::vector<float> vec;

    TemplateClasses(double obj, int num, std::vector<float> vect)
        : data(obj), number(num), vec(vect) {}

    bool foo() {
        return false;
    }
};

#include "TemplateClasses.tpp"
#endif
