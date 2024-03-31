#pragma once

#include <cstdint>

#include "AdConstants.h"

namespace Ad
{

namespace Types{

enum class LaneAssociationType{
    Left,
    Center,
    Right,
    None,
};

struct VehicleType
{
    std::int16_t id;
    LaneAssociationType lane;
    float speed_mps;
    float distance_m;
};

} // namespace Types
} // namespace Ad


