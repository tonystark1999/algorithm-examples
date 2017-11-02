// Fraction operations
#include <iostream>


int main()
{
    
    
    std::cout << "Fraction operations\n";
    std::cout << "---------------------\n\n";
    
    // num: numerator
    // denom: denominator
    // res: result
    int num1 = 0, num2 = 0, denom1 = 0, denom2 = 0, res_num = 0, res_denom = 0;
    
    std::cout << "Enter the first numerator: ";
    std::cin >> num1;
    
    while (!std::cin)
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Invalid input. Only integers are accepted\n";
        std::cout << "Please re-enter: ";
        
        std::cin >> num1;
    }
    
    
    
    
    std::cout << "Enter the first denominator: ";
    std::cin >> denom1;
    
    while (!std::cin)
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Invalid input. Only integers are accepted\n";
        std::cout << "Please re-enter: ";
        
        std::cin >> denom1;
    }
    
    while (denom1 == 0)
    {
        std::cout << "Denominator cannot be 0. Re-enter value: ";
        std::cin >> denom1;
    }
    
    
    
    
    std::cout << "Enter the second numerator: ";
    std::cin >> num2;
    
    while (!std::cin)
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Invalid input. Only integers are accepted\n";
        std::cout << "Please re-enter: ";
        
        std::cin >> num2;
    }
    
    
    
    
    std::cout << "Enter the second denominator: ";
    std::cin >> denom2;
    
    while (!std::cin)
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Invalid input. Only integers are accepted\n";
        std::cout << "Please re-enter: ";
        
        std::cin >> denom2;
    }
    
    while (denom2 == 0)
    {
        std::cout << "Denominator cannot be 0. Please re-enter: ";
        std::cin >> denom2;
    }
    
    
    char a = '+';
    char d = '/';
    char m = '*';
    char s = '-';
    
    // op: operation to be performed on the fractions.
    char op;
    
    std::cout << "Enter the operation you wish to perform (+, -, *, /): ";
    
    std::cin >> op;
    
    while (op != a && op != d && op != m && op != s)
    {
        std::cout << "Cannot perform that operation.\n";
        std::cout << "Enter one of the four operations: ";
        
        std::cin >> op;
    }
    
    
    switch (op)
    {
    case 42:    // Multiplication
        res_num = num1 * num2;
        res_denom = denom1 * denom2;
        break;
    case 43:    // Addition   
        if (denom1 != denom2)
        {
            res_num = (num1 * denom2) + (num2 * denom1);
            res_denom = (denom1 * denom2);
        }
        else
        {
            res_denom = denom1;
            res_num = num1 + num2;
        }
        break;
    case 45:    // Subtraction
        if (denom1 != denom2)
        {
            res_num = (num1 * denom2) - (num2 * denom1);
            res_denom = (denom1 * denom2);
        }
        else
        {
            res_denom = denom1;
            res_num = num1 - num2;
        }
        break;
    case 47:    // Division 
        res_num = num1 * denom2;
        res_denom = denom2 * num2;
        break;
    }
    
    std::cout << "( " << num1 << " / " << denom1 << " ) " << op 
              << " (" << num2 << " / " << denom2 << " ) = " 
              << "( " << res_num << " / " << res_denom <<  " ) \n";
    
    
    std::cout << "Press RETURN to exit the program...\n";

    std::cin.get(); 
    
    return 0;
}
