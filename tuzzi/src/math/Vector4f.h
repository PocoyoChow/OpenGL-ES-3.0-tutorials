//
//  Vector4f.h
//  Tuzzi
//
//  Created by Lyn on 2020/9/13.
//  Copyright © 2019 Vin-Ex. All rights reserved.
//

#ifndef _TUZZI_MATH_VECTOR4F_H_
#define _TUZZI_MATH_VECTOR4F_H_

#include "Common.h"

NAMESPACE_TUZZI_ENGINE_BEGIN

struct Vector4f
{
public:
    Vector4f();
    
    Vector4f(float x, float y, float z, float w);
    
    float& operator [](int index) const;
    
    float x;
    float y;
    float z;
    float w;
};

NAMESPACE_TUZZI_ENGINE_END

#endif /* Vector4f_h */