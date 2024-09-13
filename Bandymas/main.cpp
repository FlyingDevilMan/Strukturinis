#include <iostream>
#include <string>
#include <iomanip> //biblioteka skirta tikslumui nustatyti
using namespace std;
int main() {
    cout<<"--------1 uzuotis-------"<<endl;
    //studijuprg - studiju programa
    string vardas, pavarde, grupe, kursas, studijuprg;
    int amzius;

    vardas = "Nojus";
    pavarde = "Rudys";
    grupe = "PI24";
    kursas = "1 kursas";
    studijuprg = "Programu sistemos";
    amzius = 20;

    cout << "Studento vardas: " <<vardas<<endl;
    cout << "Studento pavarde: " <<pavarde<<endl;
    cout << "Studento amzius: " <<amzius<<endl;
    cout << "Studento grupe: " <<grupe<<endl;
    cout << "Studento kursas: " <<kursas<<endl;
    cout << "Studento studiju programa: " <<studijuprg<<endl;


    cout<<"--------2 uzuotis-------"<<endl;
    // farena - futbolo arena
    // i_metai - ikurimo metai
    // vskacius - vietu skaicius
    string pavadinimas, savininkas, farena;
    int i_metai, vskaicius;

    pavadinimas = "Vilniaus zalgiris";
    savininkas = "Lietuvos futbolo federacija";
    farena = "Vilniaus FFL arena";
    i_metai = 1947;
    vskaicius = 5067;

    cout << "Komandos pavadinimas: " <<pavadinimas<<endl;
    cout << "Klubo savininas: " <<savininkas<<endl;
    cout << "Futbolo arena: " <<farena<<endl;
    cout << "ikurimo metai: " <<i_metai<<endl;
    cout << "vietu sakicius: " <<vskaicius<<endl;

    cout<<"--------3 uzuotis-------"<<endl;
    //pmetai - pagaminimo metai
    string marke, modelis, spalva, litrazas;
    int pmetai;

    marke = "Volkswagen";
    modelis = "golf plus";
    spalva = "sviesiai ruda";
    pmetai = 2012;
    litrazas = "1.4";

    cout << "Automobilis " <<marke <<" "<<modelis<<", kurio spalva - "
    <<spalva<<". Masiniukas buvo pagamintas "<<pmetai<<"-ais metais, sis grazuolis turi "
    <<litrazas<<"l turio varikliuka." <<endl;


    cout<<"--------4 uzuotis-------"<<endl;
    float a = 13;
    float b = 5;
    float c = 17.5;

    //arba float a, b, c;
    // a = 13;
    // b = 5;
    // c = 17.5;

    cout << a + b - c << endl;
    cout << 15 / 2 + c << endl;
    cout << a / static_cast<double>(b) + 2 * c << endl;
    cout << 14 % 3 + 6.3 + b / a << endl;
    cout << static_cast<int>(c) % 5 + a - b << endl;
    cout << 13.5 / 2 + 4.0 * 3.5 + 18 << endl;

    cout<<"--------5 uzuotis-------"<<endl;

    float d,e,f,g,h;

    cout << "iveskite 5 skaicius: " <<endl;
    cin >> d >> e >> f >> g >> h ;

    float vidurkis = (d+e+f+g+h) / 5;
    //isvedami 2 skaiciai po kablelio
    cout << fixed << setprecision(2);
    cout << "bendras vidurkis: " << vidurkis << endl;
}