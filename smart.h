#include <iostream>
#include <memory>

class MyValue;

class MyArray{
    
    public:
        MyArray(size_t size);
        float operator[](const size_t idx) const;
    
    protected:
        std::shared_ptr<float> myarray;
        uint64_t size;
};

class MyValue : public MyArray{

    public:
        MyValue(const std::shared_ptr<MyArray> arr, const size_t idx);

};





