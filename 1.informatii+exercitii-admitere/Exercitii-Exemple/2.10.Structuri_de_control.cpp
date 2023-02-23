#include <iostream>
using namespace std;
// Structuri de control (instrucţiunea compusă, structuri alternative şi repetitive) 

int main () {
    // A. Structura liniară se transcrie în C/C++ prin două instrucţiuni: 
    // A.1. Instrucţiunea de atribuire care are sintaxa: 
    cout<< "A.1. versiunea 1" << endl;
    int a = 3, b = 5, c = 7;
    c = (a >= b);           // afiseaza 0 (fals)
    cout<< c << endl;
    c = (a * b - c);        // afiseaza 15
    cout<< c << endl;

    //varianta 2 ** Atribuirea multipla (se face de la dr la stanga)
    cout<< "versiunea 2" << endl;
    int x, y, z;
    a=2; 
    x = (y=a-1) = z = a; 
    cout<< "x este " << x << endl;  // x = 2

    //varianta 3
    cout<< "versiunea 3" << endl;
    a=7; 
    a+=5;
    cout<< " a+=5 este" << a << endl; // a=a+5

    // A.2. Instrucţiunea compusă care are sintaxa: 
    a = 5, b = 2;
    if(a > b){
        a = a + b;
        c = a + b;
    }
    cout<< "A.2. a = " << a << ", c = " << c << endl;  // a = 7, c = 9

    // B Structura alternativă se transcrie în C/C++ prin două instrucţiuni: 
    // B.1. Instrucţiunea de decizie simplă (transcrie din pseudocod instrucţiunea dacă… atunci) 
    // Determinarea valorii maxime intre 2 valori a si b (cu else)
    a = 2, b = 4;
    if(a > b){
        cout<< "mai mare este: " << a << endl;
    } else {
        cout<< "mai mare este: " << b << endl;
    }
    // Determinarea valorii maxime intre 2 valori a si b (fara else)
    cout<< "Introdu 2 valori: ";
    cin >> a >> b;
    int max = a;
    if(max < b){
        max = b;
    }
    cout<< "max este " << max;

    // Evitarea unei asocieri nedorite pentru ramura de else se poate realiza în două moduri: 
    // **cu ramură de else vidă 
    // int a,b,c;
    // cin>>a>>b>>c;
    // if(a>b)
    //     if(b>c)
    //     cout<<a;
    //     else; //instr. vidă – nu execută nimic
    // else
    // cout<<”a este mai mic decât b”;

    // **cu instrucţiune compusă
    // int a,b,c;
    // cin>>a>>b>>c;
    // if(a>b)
    //     {
    //         if(b>c)
    //         cout<<a;
    //     }
    // else
    //     cout<<”a este mai mic decât b”;

    // B.2. Instrucţiunea de decizie multiplă (switch) 
    // switch (expresie) 
    // { 
        // case constanta_1: instr_1;   break; 
        // … 
        // case constanta_n : instr_n;  break; 
        // [default: instr;] 
    // } 

    // C. Structura repetitivă se transcrie în C/C++ prin 3 instrucţiuni: 
    // C.1. Instrucţiuni repetitive - cu număr necunoscut de paşi 
    
    // cu test iniţial ( while) 
    // while(conditie){
    //     instructiune
    // }

    // cu test final (do…while) 
    //  do
    // {
        // instrucţiuni;
    // } while(condiţie);

    // C.2. Instrucţiune repetitivă cu număr cunoscut de paşi (for)
    // for(expresie1;expresie2;expresie3){
    //     instructiune;
    // }



    return 0;
}

