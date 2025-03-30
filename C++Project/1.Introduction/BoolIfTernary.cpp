#include<iostream>
#include<cstdint>

int main(){
    bool b1 = false;
    bool b2 = true;

    bool b3 =  (b1||b2)&&b2;

    if(b1 == true){
        std::cout << "Print Print";
    }else{
        std::cout << "Oye Oye";
    }
    std::int32_t result = b1 == true ? 10 : -10;// ternary

}
