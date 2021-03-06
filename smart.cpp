#include "smart.h"

using namespace std;

MyArray::MyArray(size_t size){
    this->size = size;
    myarray = std::shared_ptr<float>(new float[size]);
}

float MyArray::operator[](const size_t idx) const{
    return myarray.get()[idx];
}

MyValue::MyValue(std::shared_ptr<MyArray> arr, const size_t idx) : MyArray(1){
    myarray = std::make_shared<float>((*arr)[idx]);
}


int main(int argc, char* argv[]){

    auto arr = make_shared<MyArray>(10);
    auto val = make_shared<MyValue>(arr, 5);

    cout<<"Returning."<<endl;
    return 0;
}