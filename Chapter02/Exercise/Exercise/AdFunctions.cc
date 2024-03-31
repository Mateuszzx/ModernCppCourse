#include <cmath>
#include <cstdint>
#include <iostream>

#include "AdConstants.h"
#include "AdFunctions.h"

namespace Ad
{
namespace Utils
{

float kph_to_mps(const float kph)
{
    return kph/3.6f;
}

} // namespace Utils

namespace Data
{

Ad::Types::VehicleType init_ego_vehicle(){

    // First option
    // Ad::Types::VehicleType ego_vechicle;
    // ego_vechicle.id = -1;
    // ego_vechicle.speed_mps = 135;
    // ego_vechicle.lane = Ad::Types::LaneAssociationType::Center;
    // ego_vechicle.distance_m = 0.0f;
    // return ego_vechicle;

    // Second - better in c++20
    return Ad::Types::VehicleType{
        .id = Ad::Constants::EGO_VEHICLE_ID,
        .lane = Ad::Types::LaneAssociationType::Center,
        .speed_mps = Ad::Utils::kph_to_mps(135.0f),
        .distance_m = 0.0f,
    };
}

} // namespace Data

namespace Visualize
{

void print_vehicle(const Ad::Types::VehicleType vehicle){
    std::cout << "Vechicle ID: " << vehicle.id << std::endl;
    std::cout << "Vechicle Speed: " << vehicle.speed_mps << std::endl;
    std::cout << "Vechicle Distance: " << vehicle.distance_m << std::endl;
    std::cout << "Vechicle Lane: "  << static_cast<std::uint16_t>(vehicle.lane) << std::endl;
}

} // namespace Visualize

} // namespace Ad
