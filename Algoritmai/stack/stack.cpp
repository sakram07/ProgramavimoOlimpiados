// Stackas (lietuviškai dar vadinamas krūva) yra abstrakti duomenų struktūra
// Ji seka "Last In First Out" (LIFO) principą.
// Tai reiškia paskutinis įdėtas elementas bus išimtas pirmas
// Įsivaizduokite knygų krūvą - naują knygą dėsime ant viršaus
// Jeigu nuimsime knygą -taip pat nuimsime tą, kuri tuo pat metu yra ant viršaus

// stack<duomenu_tipas> stacko_pavadinimas; // sukuria naują stacką
// stack.push(5); // uždėda naują elementą ant viršaus (šiuo atveju 5)
// stack.pop(); // nuima viršutinį elementą
// stack.top(); // pasižiūri koks yra viršutinis elementas
// stack.empty(); // gražina true jeigu stackas tuščias. Jei ne - false
// stack.size(); // gražina elementų stacke skaičių

#include <iostream>

// C++ turi biblioteką leidžiančią kūrti stackus
// Galima ir patiems gana paprastai jį parašyti nuo nulio,
// Tačiau nėra prasmės švaistyti laiką
#include <stack>

using namespace std;

// Funkcija kuri išspausdina visus stacko elementus
void show_stack(stack<int> s) {

    // Susikuriam duotojo stacko kopiją
    stack<int> stackas = s;

    // Pradžioje išspausdiname jo ilgį
    // Spausdiname jo viršutinį elementą, ir tada jį nuimame,
    // Kartojame iki kol stackas tuščias

    cout << "Stacke yra " << stackas.size() << " elementu. Elementai: ";
    while (!stackas.empty()) {
        cout << stackas.top() << " ";
        stackas.pop();
    }
    cout << endl;
}

// Pavyzdys kaip jis veikia
int main() {

    stack<int> s;
    show_stack(s);

    s.push(69);
    show_stack(s);

    s.push(1337);
    show_stack(s);

    s.push(42);
    show_stack(s);

    s.pop();
    show_stack(s);

    s.push(100);
    show_stack(s);

    s.pop();
    show_stack(s);

    s.pop();
    show_stack(s);

    s.pop();
    show_stack(s);
}

// Naudojimo pavyzdys:
// Daugybė programų vartotojo veiksmų istoriją laiko stack pavidalu
// Pavyzdžiui, kai spaudžiame Ctrl + Z, atliekama action_history.pop() funkcija
// Taip pat, implementuojant nemažai algoritmų, patogu naudoti stack (pvz DFS)
