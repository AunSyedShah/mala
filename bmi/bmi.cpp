#include <iostream>
using namespace std;

class BMICalculator
{
private:
    int _age;
    double _weight;
    double _height;
    char _gender;
    double _bmi;
public:
    BMICalculator(int, double, double);
    ~BMICalculator();

    //calcualte bmi
    void calculateBMI(){
        _bmi = _weight / (_height * _height);
    }
    void printBMI()
    {
        cout << "\nBMI is : " << _bmi << endl;
    }
    
    //setter
    void setAge(int age){
        _age = age;
    }
    void setWeight(double weight){
        _weight = weight;
    }
    void setHeight(double height){
        _height = height;
    }
    void setGender(char gender){
        _gender = gender;
    }

    //getter
    int getAge(){
        return _age;
    }
    double getWeight(){
        return _weight;
    }
    double getHeight(){
        return _height;
    }
    char getGender(){
        return _gender;
    }

};

BMICalculator::BMICalculator(int age = 0, double weight = 0.0, double height = 0.0)
{
    _age = age;
    _weight = weight;
    _height = height;
}

BMICalculator::~BMICalculator()
{
}

class BMICalcualtorTest
{
private:
    BMICalculator bmi;
public:
    BMICalcualtorTest(/* args */);
    ~BMICalcualtorTest();

    //taking inputs
    void userInput()
    {
        cout << "Enter weight in Kg: ";
        double weight;
        cin >> weight;
        bmi.setWeight(weight);
        
        cout << "Enter height in meters: ";
        double height;
        cin >> height;
        bmi.setHeight(height);

        bmi.calculateBMI();
        bmi.printBMI();
    }
};

BMICalcualtorTest::BMICalcualtorTest(/* args */)
{
}

BMICalcualtorTest::~BMICalcualtorTest()
{
}

int main(int argc, char const *argv[])
{
    BMICalcualtorTest b;
    b.userInput();
    return 0;
}
