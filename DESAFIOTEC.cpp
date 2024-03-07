#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string nome;
    int idade, senha;
    char usuario;
    double curtidas;
    float comentarios;
    cout << ("~~~HISTORIA~~~") << endl;
    cout << ("Cansado de apenas trapacear na corrida maluca, Dicky Vigarista decide que e hora de encontrar um alguem que o complete.\nMuttley, seu fiel amigo canino, decide ajudar nessa missao.") << endl;
    cout << ("E ai que encontram a rede social Orkut") << endl;
    cout << ("~~~PERFIL~~~") << endl;
    cout << ("Adicione seu nome: ") << endl;
    cin >> nome;
    cout << ("Adicione sua idade: ") << endl;
    cin >> idade;
    if (idade <= 13) {
        cout << (" EI! Voce nao tem idade pra isso.") << endl;
    }
    else {
        cout << ("Adicione seu nome de usuario: ") << endl;
        cin >> usuario;
        cout << ("Adicione sua senha: ") << endl;
        cin >> senha;
        cout << ("Enquanto voces mexem no Orkut, Dicky decide postar uma foto.") << endl;
        cout << ("Adicione o numero de curtidas: ") << endl;
        cin >> curtidas;
        cout << ("Adicione o numero de comentarios; ") << endl;
        cin >> comentarios;
    }
}