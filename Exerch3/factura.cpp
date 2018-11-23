#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;

class Factura
{
    public:
        Factura(string numberPiece, string descriptionPiece, int quantity, int price )
        {
           setNumberPiece(numberPiece);
           setDescriptionPiece(descriptionPiece);
           setQuantity(quantity);
           setPrice(price);
        }

        void setNumberPiece( string numberPiece)
        {
            numeroPieza = numberPiece;
        }
        string getnumberpiece()
        {
            cout << "Numero de pieza: ";
            return numeroPieza;
        }

            void setDescriptionPiece(string descriptionPiece)
            {
                descripcionPieza = descriptionPiece;
            }
            string getDescriptionpiece()
            {
                cout << "Descripcion: ";
                return descripcionPieza;
            }

                void setQuantity( int quantity)
                {
                    if(quantity>=0)
                    {
                        cantidad = quantity;
                    }
                    if(quantity<0)
                    {
                    quantity = 0;
                    cantidad =quantity;
                    }
                }
                int getQuantity()
                {
                    cout << "Cantidad: ";
                    return cantidad;
                }
                
                    void setPrice(int price)
                    {
                            if(price>=0)
                            {
                            precio = price;
                            }
                            if(price<0)
                            {
                            price = 0;
                            precio = price;
                            } 
                    }
                    int getPrice()
                            {
                                cout << "precio: ";
                                return precio;
                            }
                    int obtenerMontoFactura()
                    {
                        cout << "Monto a pagar: ";
                        return precio*cantidad;
                    }
    private:
        string numeroPieza;
        string descripcionPieza;
        int cantidad;
        int precio;
};

int main()
{
Factura fac1("001", "Shidori", 10, 10);
cout << fac1.getnumberpiece() << endl;
cout << fac1.getDescriptionpiece() << endl;
cout << fac1.getQuantity() << endl;
cout << fac1.getPrice() << endl;
cout << fac1.obtenerMontoFactura() << endl;

    return 0;
}