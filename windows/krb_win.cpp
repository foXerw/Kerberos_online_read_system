#include <iostream>
#include <tuple>
#include <string>

int main(int argc,char **argv) {
    std::tuple<int,int,std::string,std::string>test(1,1,"222","22222");
    std::string a=std::get<3>(test);
    std::cout<<a;
    return 0;
}