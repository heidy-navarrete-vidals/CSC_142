#include <iostream> 

enum class Operation {
    Add,
    Subtract,
    Multiply,
    Divide
};

struct Calculator {
    public:
    Calculator(Operation operation);
    
    int calculate(int a, int b);

    Operation get_operation() {
        return m_operation;
    }

    private:
    Operation m_operation;

};

Calculator::Calculator(Operation operation): m_operation{operation} {}

int Calculator::calculate(int a, int b) 
{
    switch(get_operation()) 
    {
        case Operation::Add: 
        {
            return a + b;
        }
    
        case Operation::Subtract:
        {
            return a - b;
        }
        case Operation::Multiply:
        {
            return a * b;
        }
        case Operation::Divide:
        {
            return a / b;
        }
        default:
        {
            std::cout<<"Unknown";
            break;
        }

    }
}



int main() {
    Calculator problem1 = {Operation::Add};
    std::cout<<"2 + 2: "<<problem1.calculate(2, 2)<<std::endl;

    Calculator problem2 = {Operation::Subtract};
    std::cout<<"7 - 2: "<<problem2.calculate(7, 2)<<std::endl;

    Calculator problem3 = {Operation::Multiply};
    std::cout<<"3 * 3: "<<problem3.calculate(3, 3)<<std::endl;

    Calculator problem4 = {Operation::Divide};
    std::cout<<"6 / 3: "<<problem4.calculate(6, 3)<<std::endl;


    return 0;
}