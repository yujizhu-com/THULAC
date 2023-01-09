//
//  libthulac.cpp
//  libthulac
//
//  Created by 余纪柱 on 2023/1/9.
//

#include <iostream>
#include "libthulac.hpp"
#include "libthulacPriv.hpp"

void libthulac::HelloWorld(const char * s)
{
    libthulacPriv *theObj = new libthulacPriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void libthulacPriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

