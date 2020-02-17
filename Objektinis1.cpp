#include <iostream>
#include <string>

int main (){

std:: cout << "Iveskite savo varda: ";
std:: string vardas;
std:: cin >> vardas;
std:: cout << std:: endl;
std:: string pasisveikinimas = "Sveikas " + vardas + " !";
std:: string kiektarpu(pasisveikinimas.size(), ' ');
std:: string antraketvirta = "* " + kiektarpu + " *";
std:: string pirmapenkta(antraketvirta.size(), '*');
std:: cout << pirmapenkta << std:: endl;
std:: cout << antraketvirta << std:: endl;
std:: cout << "* " + pasisveikinimas + " *" << std:: endl;
std:: cout << antraketvirta << std:: endl;
std:: cout << pirmapenkta << std:: endl;
}
