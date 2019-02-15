#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;

class Fecha
{
    public:
        Fecha(int day, int month, int year)
        {
            setDay(day);
            setMonth(month);
            setYear(year);
        }
           
            void setDay(int day)
            {
                    Dia = day;
            }

            int getDay()
            {
                return Dia;
            }

                void setMonth(int month)
                {
                    if(month>=1 && month<13)
                    {
                        Mes = month;
                    }
                    else
                    {
                        month = 0;
                        Mes = month;
                    }
                }
                int getMonth()
                {
                    return Mes;
                }

                    void setYear(int year)
                    {
                        Mil = year;
                    }
                    int getYear()
                    {
                        return Mil;
                    }
                        
            void mostrarFecha()
            {
                cout << "Hoy es: "<< getDay() <<"/"<< getMonth() <<"/"<< getYear() << endl;
            }
                        
            
    private:
        int Dia;
        int Mes;
        int Mil;
};

int main()
{
    Fecha hoy (22, 3, 1998);

    hoy.mostrarFecha();
        
        return 0;
}