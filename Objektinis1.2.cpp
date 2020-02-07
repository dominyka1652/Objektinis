#include <iostream>
#include <string>

int main (){

std:: cout << "Iveskite savo varda be lietuvisku raidziu: ";
std:: string vardas;
std:: cin >> vardas;
std:: cout << std:: endl;
std:: string pasisveikinimas;
if (vardas.back() == 's')
{
    pasisveikinimas = "Sveikas, " + vardas + " !";
}
else {
    pasisveikinimas = "Sveika, " + vardas + " !";
}
std:: string kiektarpu(pasisveikinimas.size(), ' ');
std:: string antraketvirta = "* " + kiektarpu + " *";
std:: string pirmapenkta(antraketvirta.size(), '*');
std:: cout << pirmapenkta << std:: endl;
std:: cout << antraketvirta << std:: endl;
std:: cout << "* " + pasisveikinimas + " *" << std:: endl;
std:: cout << antraketvirta << std:: endl;
std:: cout << pirmapenkta << std:: endl;
}
