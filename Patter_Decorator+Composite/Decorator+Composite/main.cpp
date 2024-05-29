#include <iostream>
#include "Attraction.h"
#include "AttractionDecorator.h"

int main() {
    AttractionGroup* group = new AttractionGroup();
    group->add(new ConcreteAttraction("ride helow",  "open", "2004-06-21"));
    group->add(new ConcreteAttraction("ride gav", "closed", "2004-06-22"));
    group->add(new ConcreteAttraction("ride meow",  "open", "2004-06-23"));
    group->add(new ConcreteAttraction("kva ride", "open", "2004-06-21"));
    group->add(new ConcreteAttraction("ride goose", "closed", "2004-06-21"));
    group->add(new ConcreteAttraction("ride pes", "open", "2004-06-24"));

    cout << "All attractions:" << endl;
    group->showInfo();

    AttractionGroup* filteredByStatusGroup = new AttractionGroup();
    for (auto attraction : group->getAttractions()) {
        filteredByStatusGroup->add(new FilterByStatus(attraction, "open"));
    }

    cout << "\nFiltered by status (open):" << endl;
    filteredByStatusGroup->showInfo();

    AttractionGroup* filteredByDateGroup = new AttractionGroup();
    for (auto attraction : group->getAttractions()) {
        filteredByDateGroup->add(new FilterByDate(attraction, "2004-06-21"));
    }

    cout << "\nFiltered by date (2004-06-21):" << endl;
    filteredByDateGroup->showInfo();

    delete group;
    delete filteredByStatusGroup;
    delete filteredByDateGroup;

    return 0;
}
