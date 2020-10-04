#include <iostream>
using namespace std;

class Invoice
{
private:
    string _partNumber;
    string _description;
    int _quantity;
    double _price;

    //getter
    string getPartNumber(){
        return _partNumber;
    }
    string getDescription(){
        return _description;
    }
    int getQuantity(){
        return _quantity;
    }
    double getPrice(){
        return _price;
    }

    // setters
    void setPartNumber(string partNumber){
        _partNumber = partNumber;
    }
    void setDescription(string description){
        _description = description;
    }
    void setQuantity(int quantity){
        _quantity = quantity;
    }
    void setPrice(double price){
        _price = price;
    }

    double getInvoiveAmount(){
        double invoice = getQuantity() * getPrice();
        return invoice;
    }
    
public:
    Invoice(/* args */);
    ~Invoice();
};

Invoice::Invoice(/* args */)
{
    _partNumber = _description = "default";
    _quantity = 0;
    _price = 0;
}

Invoice::~Invoice()
{
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
