#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;

class Empleado
{
    public:
        Empleado(string name, string last, int salary)
        {
            setName(name);
            setLast(last);
            setSalary(salary);

        }
            void setName( string name)
            {
                Nombre = name;
            }
            string getName()
            {
                return Nombre;
            }

                void setLast( string last)
                {
                    Apellido = last;
                }
                string getLast()
                {
                    return Apellido;
                }

                    void setSalary( int salary)
                    {
                        if(salary>=0)
                        {
                            Salario = salary;
                        }
                        if(salary<0)
                        {
                        salary = 0;
                        Salario = salary;
                        }
                    }
                    int getSalary()
                    {
                        return Salario;
                    }
    private:
        string Nombre;
        string Apellido;
        int Salario;

};

int main()
{
    Empleado uno ("Raymundo", "Perez", 5000);
    Empleado dos ("Jeff", "Lepard", 10000 );

    int anual1 = uno.getSalary()*12;
    int anual2 = dos.getSalary()*12;

    cout<< "Salario Anual de " <<uno.getName()<< " " <<uno.getLast() << ": " << anual1<< endl;
    cout<< "Salario Anual de " <<dos.getName()<< " " <<dos.getLast() << ": " << anual2<< endl;

    uno.setSalary(anual1);
    dos.setSalary(anual2);

    cout << "Salario Anual de " <<uno.getName()<< " " <<uno.getLast() << " mas aumento del 10 percent : "<< (uno.getSalary()*.10)+uno.getSalary() << endl;
    cout << "Salario Anual de " <<dos.getName()<< " " <<dos.getLast() << " mas aumento del 10 percent : " << (dos.getSalary()*.10)+dos.getSalary()<< endl;
    return 0;
}
