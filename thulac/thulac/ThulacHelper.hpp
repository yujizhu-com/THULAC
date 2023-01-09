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
    static string deal(string sentence)
    {
        static string model_path = "/Users/yujizhu/Documents/Git/GithubCpp/AIHelper/THULAC/models";
        static THULAC* Lac = NULL;
        static THULAC_result* Result = NULL;
        if(!Lac)
        {
            Lac = new THULAC();
            Lac->init(model_path.c_str(),NULL,0,0,0,' ');
            Result = new THULAC_result();
        }
        Lac->cut(sentence, *Result);
        return Lac->toString(*Result);
    }
};

#endif /* ThulacHelper_hpp */
