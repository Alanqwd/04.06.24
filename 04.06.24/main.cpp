#include <iostream>
#include <string>
#include <Windows.h>



class Worker 
{
private:
    std::string name_surname = " ";
    int experience;
    double hourlySalary;
    int hoursWorked;


public:
    void EnterInfo()
    {
        std::cout << "������� ��� � �������: ";
        std::getline(std::cin, name_surname);
        std::cout << "\n������� ����: ";
        std::cin >> experience;
        std::cout << "\n������� ������� ��������: ";
        std::cin >> hourlySalary;
        std::cout << "\n������� ���-�� ������������ �����: ";
        std::cin >> hoursWorked;
    }

    double calculateSalary() 
    {
        return hourlySalary * hoursWorked;
    }


    double calculateBonus() 
    {
        double bonus = 0;

        if (experience < 1) 
        {
            bonus = 0;
        }
        else if (experience < 3) 
        {
            bonus = 0.05;
        }
        else if (experience < 5) 
        {
            bonus = 0.08;
        }
        else
        {
            bonus = 0.15;
        }

        return bonus * calculateSalary();
    }

    void displayInfo()
    {
        std::cout << "\n\n��� � �������: " << name_surname << "\n";
        std::cout << "����: " << experience << " ���" << "\n";
        std::cout << "������� ��: " << hourlySalary << "\n";
        std::cout << "���-�� ������������ �����: " << hoursWorked << "\n";
        std::cout << "��������: " << calculateSalary() << "\n";
        std::cout << "������: " << calculateBonus() << "\n";
    }
};

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Worker Worker;
    Worker.EnterInfo();
    Worker.displayInfo();

    return 0;
}
