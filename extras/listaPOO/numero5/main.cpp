#include <iostream>

using namespace std;
class Pessoa{
    protected:
    string nome;
    int idade;

    public:
    Pessoa(){
    nome = "nada";
    idade = 0;
    }
    Pessoa(string n,int id){
    setNome(n);
    setIdade(id);
    }
    void setNome(string n){
    if(n.length()>= 2) nome = n;
    else cout<<"Erro";
    }
    void setIdade(int id){
    if(id >= 0) idade = id;
    else cout<<"Erro";
    }
    string getNome(){
    return nome;
    }
    int getidade(){
    return idade;
    }
    void exibe(){
    cout<<"Nome: "<<getNome()<<endl;
    cout<<"Idade: "<<getidade()<<endl;
    }
};
class Aluno: public Pessoa{
    private:
    int matricula;
    double media;

    public:
    Aluno():Pessoa(){
    setMatricula(0);
    setMedia(0);
    }
    Aluno(int matricula,double media):Pessoa(nome,idade){
    setMatricula(matricula);
    setMedia(media);
    }

    void setMatricula(int mat){
    if(mat >= 0)matricula = mat;
    else cout<<"ERRO";
    }
    void setMedia(int m){
    if(m >= 0)media = m;
    else cout<<"ERRO";
    }
    int getMatricula(){
    return matricula;
    }
    double getMedia(){
    return media;
    }
    void exibirDadosAluno(){
    Pessoa :: exibe();
    cout<<"Matricula: "<<getMatricula();
     cout<<"Media: "<<getMedia();
    }
};

int main()
{
    Aluno alu1; // criei um obj aluno e chamou o construtor sem parametros
    int idadeAux, matriculaAux;
    double mediaAux;
    string nomeAux;

    cout<<"Digite o nome: ";
    cin>>nomeAux;
    alu1.setNome(nomeAux);
    cout<<"Digite a idade: ";
    cin>>idadeAux;
    alu1.setIdade(idadeAux);
    cout<<"Digite a matricula: ";
    cin>>matriculaAux;
    alu1.setMatricula(matriculaAux);
    cout<<"Digite a media: ";
    cin>>mediaAux;
    alu1.setMedia(mediaAux);

    alu1.exibirDadosAluno();
    return 0;
}
