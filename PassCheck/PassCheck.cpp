#include <iostream>

int main()
{
    std::string password;
    std::cout << "Choose a password:\n";
    std::cin >> password;
    const int minim = 12;
    if (password.length() < minim)
        std::cout << "Insufficient number of characters\n";
    bool haveDigits = false;
    bool haveUppercase = false;
    bool haveSymbols = false;
    for (int i = 0; i < password.length()-1; i++)
    {
        if (password[i] >= 48 && password[i] <= 57) 
        {
            haveDigits = true; 
        }
        else if ((password[i] >= 33 && password[i] <= 47) || (password[i] >= 58 && password[i] <= 64) || (password[i] >= 91 && password[i] <= 96) || (password[i] >= 123 && password[i] <= 126))
        {
            haveSymbols = true;
        }
        else if (password[i] > 64 && password[i] < 91)
        {
            haveUppercase = true; 
        }
    }

    if (haveDigits == true && haveUppercase == true && haveSymbols == true)
    {
        std::cout << "Valide password";
    }
    else if (haveDigits == false && haveUppercase == true && haveSymbols == true)
    {
        std::cout << "Password must contain at least one digit\n";
    }
    else if (haveDigits == true && haveUppercase == false && haveSymbols == true)
    {
        std::cout << "Password must contain at least one uppercase letter\n";
    }
    else if (haveDigits == true && haveUppercase == true && haveSymbols == false)
    {
        std::cout << "The password must contain at least one special character\n";
    }
    else if (haveDigits == false && haveUppercase == false && haveSymbols == true)
    {
        std::cout << "The password must contain at least one digit and a capital letter\n";
    }
    else if (haveDigits == false && haveUppercase == true && haveSymbols == false)
    {
        std::cout << "The password must contain at least one number and a special symbol\n";
    }
    else if (haveDigits == true && haveUppercase == false && haveSymbols == false)
    {
        std::cout << "The password must contain at least one capital letter and one symbol\n";
    }
    else if (haveDigits == false && haveUppercase == false && haveSymbols == true)
    {
        std::cout << "The password must contain at least one capital letter and one digit\n";
    }
    else
        std::cout << "The password must contain at least one capital letter, a special character and a number\n";
}