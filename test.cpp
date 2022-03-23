#include "test.h"

basic_class::basic_class(){
    this->_a_ = 0 ;
    this->_b_ = 0 ;
}
void basic_class::in(){
    std::cout<<"a = "<<_a_<<std::endl;
    std::cout<<"b = "<<_b_<<std::endl;
}