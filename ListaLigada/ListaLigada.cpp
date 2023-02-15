
// ListaLigada.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <ctype.h>
#include <ListaNodo.h>
#include <ListaLigada.h>

#define KEY_ESC 27
#define KEY_UP 72
#define KEY_DOWN 80


int main()
{
    int a = 0;
    //lista ligada de palabras
    string p1 = "hola";
    string p2 = "mundo";
    string p3 = "pan";
    string p4 = "enjuanada";
    string p5 = "nohanks";

    ListaNodo<string>* s1 = new ListaNodo<string>(&p1);
    ListaNodo<string>* s2 = new ListaNodo<string>(&p2);
    ListaNodo<string>* s3 = new ListaNodo<string>(&p3);
    ListaNodo<string>* s4 = new ListaNodo<string>(&p4);
    ListaNodo<string>* s5 = new ListaNodo<string>(&p5);

    s2->InsertAfter(s1);
    s3->InsertAfter(s2);
    s4->InsertAfter(s3);
    s5->InsertAfter(s4);
    s1->InsertAfter(s5);
    //convertir en lista ligada

    //prueba de iterador
    ListaNodo<string>* iter = s1;
    ListaNodo<string>* primerItems = s1;
    do {
        cout << *(iter->data) << endl;
        iter = iter->next;

    } while (iter != primerItem);

    //prueba con clase lista ligada
    int x = 79;
    ListaLigada<int>* lista = new ListaLigada<int>(&x);
    int y = 100;
    lista->Insert(&y);

    cout << *lista->GetHeader()->data >> endl;

    //ciclo de update
    ListaNodo<string>* currentItem = s1;
    int keypressed = 0;

    while (keypressed != KEY_ESC) {
        keypressed = _getch();
        //cout <<"keypressed:" << keypressed << endl;}
        if (keypressed == KEY_DOWN) {
            currentItem = currentItem->next;
            cout << "Item selected:" << *currentItem->data << endl;
        }
        if (keypressed == KEY_UP) {
            currentItem = currentItem->prev;
            cout << "Item selected:" << *currentItem->data << endl;
        }
    }
    return 0;
}

