#include <iostream>

using namespace std;

class Theme_park {
protected:
    float entry_fee;
public:
    Theme_park() {
        entry_fee = 0;
    }
    void collect_entry_fee() {
        cout << "Enter the entry fee: ";
        cin >> entry_fee;
    }
};

class Kingdom : public Theme_park {
protected:
    float snow_kingdom_fee;
    float marine_kingdom_fee;
    float universal_kingdom_fee;
public:
    Kingdom() {
        snow_kingdom_fee = 0;
        marine_kingdom_fee = 0;
        universal_kingdom_fee = 0;
    }
    void collect_kingdom_fee() {
        cout << "Enter the fee for Snow Kingdom: ";
        cin >> snow_kingdom_fee;
        cout << "Enter the fee for Marine Kingdom: ";
        cin >> marine_kingdom_fee;
        cout << "Enter the fee for Universal Kingdom: ";
        cin >> universal_kingdom_fee;
    }
};

class Parking : public Theme_park {
protected:
    float parking_fee;
public:
    Parking() {
        parking_fee = 0;
    }
    void collect_parking_fee() {
        cout << "Enter the parking fee: ";
        cin >> parking_fee;
    }
};

class Result : public Kingdom, public Parking{
public:
    void calculate_total_amount() {
        float total_amount = entry_fee + snow_kingdom_fee + marine_kingdom_fee + universal_kingdom_fee + parking_fee;
        cout << "Total amount spent by Ankit: " << total_amount << endl;
    }
};

int main() {
    Result r;
    r.collect_entry_fee();
    r.collect_kingdom_fee();
    r.collect_parking_fee();
    r.calculate_total_amount();
    return 0;
}