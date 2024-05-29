#include <iostream>
#include "ParkFacade.h"

int main() {
    setlocale(LC_CTYPE, "ukr");

    ParkFacade park;

    park.addAttraction("�i��� ���", "���� �������", 12, "09:00", "18:00", true);
    park.addRestaurant("����i���", "��i��� ��������������", 4.5, "����������");
    park.addToilet("���� ������ ������", "��� ���� �����, �����");
    park.addAttraction("�i��� �����", "���", 8, "10:00", "19:00", false);
    park.addRestaurant("�� ����� �������", "��� � ��i�i �������", 4.2, "���������");

    cout << "�� ���i � :" << endl;
    park.displayPark();

    return 0;
}
