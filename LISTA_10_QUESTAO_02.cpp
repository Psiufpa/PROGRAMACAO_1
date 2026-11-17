#include <iostream> 
using namespace std;
struct Aluno 
{
    int matricula; 
    string nome; 
    float nota;
    string situacao; 
};

// Função para ler os dados de um aluno 
void lerAluno(Aluno &a) 
{
    cout << "Matricula: "; 
    cin >> a.matricula; 
    cin.ignore();
    cout << "Nome: "; 
    getline(cin, a.nome); 
    cout << "Nota final: "; cin >> 
    a.nota;
    if (a.nota >=7.0)
        a.situacao = "APROVADO";
    else
        a.situacao = "REPROVADO";
}

// Função para exibir os dados de um aluno 
void mostrarAluno(Aluno a) 
{
    cout << a.matricula << " - " << a.nome << " - Nota: " << a.nota << " - Situação: " << a.situacao << endl;
}

int main() 
{
    int N;
    cout << "Quantidade de alunos: "; 
    cin >> N;
    
    Aluno alunos[N];
    for (int i = 0; i < N; i++) 
    { 
        lerAluno(alunos[i]);
    }
    cout << "\nLista de alunos:\n"; 
    for (int i = 0; i < N; i++) {
        mostrarAluno(alunos[i]);
    }
return 0;
}