#include "Serializer.hpp"

int main(void)
{
    Data data;
    uintptr_t ptr = Serializer::serialize(&data);

    std::cout << "Data address: " << &data << std::endl;
    std::cout << "serialize Data " << ptr << std::endl;
    std::cout << "deserialize uintptr_t: " << Serializer::deserialize(ptr) << std::endl;

    return (0);
}