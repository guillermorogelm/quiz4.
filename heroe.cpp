#include <iostream>
#include <string>
using namespace std;

void mostrarEstado(string nombre, int hp, int maxHP) {
    cout << nombre << " - HP: " << hp << "/" << maxHP << endl;
}

void recibirDanio(int& hp, int danio) {
    hp -= danio;
    if (hp < 0) hp = 0;
}

void curar(int& hp, int cantidad, int maxHP) {
    hp += cantidad;
    if (hp > maxHP) hp = maxHP;
}

int main() {
    string nombre = "Arthas";
    int hp = 100, maxHP = 100;

    cout << "=== Estado del Heroe ===" << endl;
    mostrarEstado(nombre, hp, maxHP);

    cout << nombre << " recibe 30 de danio" << endl;
    recibirDanio(hp, 30);
    mostrarEstado(nombre, hp, maxHP);

    cout << nombre << " recibe 50 de danio" << endl;
    recibirDanio(hp, 50);
    mostrarEstado(nombre, hp, maxHP);

    cout << nombre << " se cura 40 puntos" << endl;
    curar(hp, 40, maxHP);
    mostrarEstado(nombre, hp, maxHP);

    cout << nombre << " recibe 80 de danio" << endl;
    recibirDanio(hp, 80);
    mostrarEstado(nombre, hp, maxHP);

    return 0;
}
