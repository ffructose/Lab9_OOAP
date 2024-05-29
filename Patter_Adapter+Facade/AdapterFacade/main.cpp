#include <iostream>
#include "ParkFacade.h"

int main() {
    setlocale(LC_CTYPE, "ukr");

    ParkFacade park;

    park.addAttraction("гiрка пес", "дуже страшна", 12, "09:00", "18:00", true);
    park.addRestaurant("Вернiсаж", "елiтне обслуговування", 4.5, "Французька");
    park.addToilet("дуже крутий туалет", "там дуже чисто, чесно");
    park.addAttraction("гiрка жабка", "ква", 8, "10:00", "19:00", false);
    park.addRestaurant("за двома зайцями", "суп в хлiбi класний", 4.2, "Українська");

    cout << "На мапi є :" << endl;
    park.displayPark();

    return 0;
}
