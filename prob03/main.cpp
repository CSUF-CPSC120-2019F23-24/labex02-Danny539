#include <iostream>

int main()

{
  double mealcost;
    double tax= mealcost * .0775;
    double Tip;
    double TotalBill= mealcost+tax+Tip;



  std::cout << "It was a pleasure being your server. Come back soon!" <<std::endl;
  std::cout << "what is the total meal cost:"<<std::endl;
  std::cin >> mealcost;

  tax= mealcost*.0775;
Tip= mealcost*0.20;
  std::cout<<"tax: ";
  std:: cout<<tax<<std::endl;

std::cout<<"Tip:";
std::cout<<Tip<<std::endl;
return 0;
}


// This program calculates the tax and tip on a restaurant bill.
