#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    //constants for gravity then conversiosn between ft and meters
    const double g = 9.81;
    const double feetToMeter = 0.3048;
    const double meterToFeet = 3.28;

    //variables for user input 
    string unit;
    double alpha, v0, target_distance;
    //ask user to input units 
    cout << "Enter units (m for meters, ft for feet): "; 
    cin >> unit;
    //make sure unit is ft or m
    if (unit != "ft" && unit != "m") {
        cout << "Not a valid unit please enter 'm' for meters or 'ft' for feet.";
        return 0;
    }
    //launch angle input
    cout << "Enter launch angle (between 0 and 90 degrees): ";
    cin >> alpha;
    //muzzle velo input
    cout << "Enter muzzle velocity (" << (unit == "ft" ? "ft/s" : "m/s") << "): ";
    cin >> v0;
    //target distance input
    cout << "Enter target distance (" << unit << "): ";
    cin >> target_distance;
    //converstion to meters 
    if (unit == "ft") {
        v0 *= feetToMeter;
        target_distance *= feetToMeter;
    }
    //convert degrees to radians then calculate the flight time max height and the distance
    double alpha_radians = alpha * M_PI / 180.0;
    double flightTime = (2 * v0 * sin(alpha_radians)) / g;
    double heightMax = (pow(v0, 2) * pow(sin(alpha_radians), 2)) / (2 * g);
    double distance = (pow(v0, 2) * sin(2 * alpha_radians)) / g;
    double maxRange = (pow(v0, 2)) / g;
    //see if the target distance is within range 
    bool withinRange = target_distance <= distance;
    //output 
    cout << fixed << setprecision(2);
    cout << "Flight time: " << flightTime << "  seconds" << endl;
    cout << "Max height: " << heightMax << " meters (" << heightMax * meterToFeet << " feet)" << endl;
    cout << "Distance: " << distance << " meters (" << distance * meterToFeet << " feet)" << endl;
    cout << "Max range possible: " << maxRange << " meters (" << maxRange * meterToFeet << " feet)" << endl;
    cout << "Target is " << (withinRange ? "within range." : "out of range.") << endl;

    return 0;
}
