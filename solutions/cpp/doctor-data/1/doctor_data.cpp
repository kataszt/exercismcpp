#include "doctor_data.h"

namespace heaven {

    Vessel::Vessel(std::string name, int generation, star_map::System current_system)
        : name{name}, generation{generation}, current_system{current_system} {}

    Vessel Vessel::replicate(std::string new_name) {
        return Vessel(new_name, generation + 1, current_system);
    }

    void Vessel::make_buster() {
        ++busters;
    }

    bool Vessel::shoot_buster() {
        if (busters > 0) {
            --busters;
            return true;
        }
        return false;
    }

    std::string get_older_bob(Vessel v1, Vessel v2) {
        return v1.generation < v2.generation ? v1.name : v2.name;
    }

    bool in_the_same_system(Vessel v1, Vessel v2) {
        return v1.current_system == v2.current_system;
    }
}