#include <iostream>
#include <string>
#include <Windows.h>



class Worker 
{
private:
    std::string name;
    std::string surname;
    int experience;
    double hourlySalary;
    int hoursWorked;


public:
    void EnterInfo() 
    {
        std::cout << "Введите имя: ";
        std::cin >> name;
        std::cout << "\nВведите фамилию: ";
        std::cin >> surname;
        std::cout << "\nВведите стаж: ";
        std::cin >> experience;
        std::cout << "\nВведите Часовую зарплату: ";
        std::cin >> hourlySalary;
        std::cout << "\nВведите кол-во отработанных часов: ";
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
        std::cout << "\n\nИмя: " << name << "\n";
        std::cout << "Фамилия: " << surname << "\n";
        std::cout << "Стаж: " << experience << " Лет" << "\n";
        std::cout << "Часовая зп: " << hourlySalary << "\n";
        std::cout << "Кол-во отработанных часов: " << hoursWorked << "\n";
        std::cout << "Зарплата: " << calculateSalary() << "\n";
        std::cout << "Премия: " << calculateBonus() << "\n";
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
