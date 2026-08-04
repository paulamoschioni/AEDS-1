#include <iostream>
using namespace std;

class Aluno{
    private:
    string nome;
    int matricula;
    double nota[2];
    public:
    Aluno(){
        setNome("Nada");
        setMatricula(0);
        for(int p = 0; p < 2; p++){
            setNota(p,0);
        }
    }
    void setNome(string n){
        if(n.length()>= 2) nome = n;
        else cout<<"Erro.";
    }
    void setMatricula(int m){
        if(m >= 0) matricula = m;
        else cout<<"Erro.";
    }
    void setNota(int p, double n){
        if(n >= 0 && p >= 0 && p < 2) {
            nota[p] = n;
        }
    }
    string getNome(){
        return nome;
    }
    int getMatricula(){
        return matricula;
    }
    double* getNotas(){
        return nota;
    }
    void exibe(){
        cout << "NOME: " << getNome() << endl
             << "MATRICULA: " << getMatricula() << endl
             << "NOTAS: " << getNotas()[0] << " " << getNotas()[1] << endl;
    }
};

void preenche(Aluno *ptrAlu){
    int mAux;
    double notaAux;
    string nomeAux;

    cout << "Digite o nome do aluno: " << endl;
    getline(cin, nomeAux);
    ptrAlu->setNome(nomeAux);

    cout << "Digite a matricula: " << endl;
    cin >> mAux;
    ptrAlu->setMatricula(mAux);

    for(int i = 0; i < 2; i++){
        cout << "Digite a nota " << (i+1) << ": ";
        cin >> notaAux;
        ptrAlu->setNota(i, notaAux);
    }
}

int main()
{
    Aluno *alu = new Aluno();
    preenche(alu);
    alu->exibe();

    delete alu;
    return 0;
}
