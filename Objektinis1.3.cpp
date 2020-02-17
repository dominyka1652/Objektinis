#include <iostream>
#include <string>

void Print(int tarpaiVienojePuseje, std:: string pasisveikinimas){
    for (int i=0;i<tarpaiVienojePuseje; i++){
        std:: cout <<  "* " << std::string(pasisveikinimas.size(), ' ') << " *" << std:: endl;
    }
}

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

std:: cout << "Iveskite remelio ploti" << std:: endl;
int plotis;
std:: cin >> plotis;
int tarpaiVienojePuseje = (plotis - 3) / 2;

std:: cout << "**" << std::string(pasisveikinimas.size(), '*') << "**" << std:: endl;
Print(tarpaiVienojePuseje, pasisveikinimas);
std:: cout << "* " << pasisveikinimas << " *" << std:: endl;
Print(tarpaiVienojePuseje, pasisveikinimas);
std:: cout << "**" << std::string(pasisveikinimas.size(), '*') << "**" << std:: endl;

}
