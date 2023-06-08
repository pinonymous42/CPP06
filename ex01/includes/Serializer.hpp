#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
// #include <stdint.h>

typedef struct data
{
    int num;
}Data;

class Serializer
{
    public:
        Serializer();
        ~Serializer();
        Serializer(const Serializer &serializer);
        Serializer &operator=(const Serializer &serializer);
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
    private:
};
#endif