#include <iostream>
#include "primerQT.hpp"

primerQT::primerQT()
{
    std::cout<<"Constructor Called!..."<<std::endl;
    getValue();
}

primerQT::~primerQT()
{
    std::cout<<"Distructor Called!..."<<std::endl;
}

void primerQT::getValue()
{
    std::cout<<"getValue Called!...."<<std::endl;
}

void primerQT::testElse(primerQT * funcObj) const
{
    std::cout<<"Test Function Called!..by address"<< funcObj <<std::endl;
}
