#include <iostream>
using namespace std;

class Car {
    protected:
    string m_brand;
    string m_driveMode;
    
    public:
    Car(string brand, string driveMode) {
        m_brand = brand;
        m_driveMode = driveMode;
    }
    
    string get_brand() {
        return m_brand;
    }
    
    string get_driveMode() {
        return m_driveMode;
    }
};

class BMW_Car : public Car {
    public:
    BMW_Car() : Car("BMW", "No-wheel"){}
    
};
class AUDI_Car : public Car {
    public:
    AUDI_Car() : Car("AUDI", "Front-wheel") {}
};
class BENZ_Car : public Car {
    public:
    BENZ_Car() : Car("BENZ", "Front-wheel") {}
};

int main() {
    BMW_Car bmw;
    AUDI_Car audi;
    BENZ_Car benz;
    cout << "Construsting BMW_Car" << endl;
    cout << bmw.get_brand() << ": Drive Mode= " << bmw.get_driveMode() << endl;
    cout << "Constructing AUDI_Car" << endl;
    cout << audi.get_brand() << ": Drive Mode= " << audi.get_driveMode() << endl;
    cout << "Constructing BENZ_Car" << endl;
    cout << benz.get_brand() << ": Drive Mode= " << benz.get_driveMode() << endl;
    
    return 0;
}
