#include <bits/stdc++.h>
using namespace std;

struct CityRecord
{
    string name;
    uint64_t population;
    double lat, longitude;
};

int main()
{
    vector<CityRecord> cities;
    cities.emplace_back("Kolkata", 5000, 2.4, 19);
    cities.emplace_back("London", 5000, 2.4, 19);
    cities.emplace_back("Paris", 50300, 2.4, 19);
    cities.emplace_back("Death", 5000, 2.4, 19);
    cities.emplace_back("Pallet", 5000, 2.4, 19);

    for (const auto &i : cities)
    {
        if (i.name == "Paris")
        {
            cout << i.population;
            break;
        }
    }
}
