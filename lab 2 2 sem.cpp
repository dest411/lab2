#include <iostream>
#include <cmath>



// �������� ������� ��� ������������ ������ � �������
double radians_to_degrees(double radians) {
    setlocale(LC_CTYPE, "ukr");
    double pi = 3.14;
    return radians * (180.0 / pi);
}

// ������ ������� ��� ������������ ������ � �������
template<typename T>
T convert_radians_to_degrees(T radians) {
    double pi = 3.14;
    return radians * (180.0 / pi);
}

int main() {
    
    double angle_radians = 1.57; // 90 ������� � �������

    // �������� �������
    double angle_degrees_normal = radians_to_degrees(angle_radians);
    std::cout << "��� � �������� (�������� �������): " << angle_degrees_normal << std::endl;

    // ������ �������
    double angle_degrees_template = convert_radians_to_degrees(angle_radians);
    std::cout << "��� � �������� (������ �������): " << angle_degrees_template << std::endl;

    return 0;
}