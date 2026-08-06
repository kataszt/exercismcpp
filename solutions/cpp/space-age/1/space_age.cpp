#include "space_age.h"

namespace space_age {

space_age::space_age(long age_in_seconds) : seconds_{age_in_seconds} {
}

long space_age::seconds() const {
    return seconds_;
}

double space_age::years_on(double orbital_period) const {
    double earth_years = seconds_ / 31557600.0;
    return earth_years / orbital_period;
}

double space_age::on_earth() const {
    return years_on(1.0);
}

double space_age::on_mercury() const {
    return years_on(0.2408467);
}

double space_age::on_venus() const {
    return years_on(0.61519726);
}

double space_age::on_mars() const {
    return years_on(1.8808158);
}

double space_age::on_jupiter() const {
    return years_on(11.862615);
}

double space_age::on_saturn() const {
    return years_on(29.447498);
}

double space_age::on_uranus() const {
    return years_on(84.016846);
}

double space_age::on_neptune() const {
    return years_on(164.79132);
}

}  // namespace space_age