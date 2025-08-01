#include <assert.h>
#include <iostream>
using namespace std;

/*bool batteryIsOk(float temperature, float soc, float chargeRate) {
  if(temperature < 0 || temperature > 45) {
    cout << "Temperature out of range!\n";
    return false;
  } else if(soc < 20 || soc > 80) {
    cout << "State of Charge out of range!\n";
    return false;
  } else if(chargeRate > 0.8) {
    cout << "Charge Rate out of range!\n";
    return false;
  }
  return true;
}*/


bool isInRange(float value, float min, float max) {
  return value >= min && value <= max;
}

bool batteryIsOk(float temperature, float soc, float chargeRate) {
  bool tempOk = isInRange(temperature, 0, 45);
  bool socOk = isInRange(soc, 20, 80);
  bool chargeOk = isInRange(chargeRate, 0, 0.8);

  return tempOk && socOk && chargeOk;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7) == true);
  assert(batteryIsOk(50, 85, 0) == false);
}
