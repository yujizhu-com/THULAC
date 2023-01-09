//
//  ThulacHelper.hpp
//  thulac
//
//  Created by 余纪柱 on 2023/1/9.
//

#ifndef ThulacHelper_hpp
#define ThulacHelper_hpp

#include "thulac.h"
#include <string>

using namespace std;

class ThulacHelper
{
public:
    ThulacHelper()
    {
        lac.init(model_path.c_str(),NULL,0,0,0,' ');
    }
    string deal(string sentence)
    {
        lac.cut(sentence, result);
        return lac.toString(result);
    }
protected:
    THULAC lac;
    string model_path = "/Users/yujizhu/Documents/Git/GithubCpp/AIHelper/THULAC/models";
    THULAC_result result;
};

#endif /* ThulacHelper_hpp */
