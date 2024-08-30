#pragma once

#include "cpu-base.h"
#include "cpu-shader-object-layout.h"

namespace rhi::cpu {

class ShaderProgramImpl : public ShaderProgramBase
{
public:
    RefPtr<RootShaderObjectLayoutImpl> layout;

    ~ShaderProgramImpl() {}
};

} // namespace rhi::cpu