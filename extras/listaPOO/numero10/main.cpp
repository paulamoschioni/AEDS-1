#include <iostream>
#include <stdexcept>
using namespace std;
class Pessoa{
    protected:
    string nome;
    string cpf;
    int idade;

    public:
    Pessoa(){
    inicializa("Nada","0000000000000",0);
    }
    Pessoa(string n, string cpf, int id){
    inicializa(n,cpf,id);
    }
    void inicializa(string n, string cpf, int id){
    try {  // Tratamento de excessao
    setNome(n);
    setCPF(cpf);
    setIdade(id);
    } catch (invalid_argument &eObj){
    cerr<<"ERROR";
     }
    }
    void setNome(string n){
    if(n.length() >= 2) nome = n;
    else throw invalid_argument("ERROR");
    }
    void setCPF(string cpf){
    if(cpf.length() >= 11 && cpf.length() <= 14) this->cpf = cpf;
    else throw invalid_argument("ERROR");
    }
    void setIdade(int id){
    if(id >= 0) idade = id;
    else throw invalid_argument("ERROR");
    }
    string getNome(){
    return nome;
    }
    string getCPF(){
    return cpf;
    }
    int getIdade(){
    return idade;
    }
    void exibePai(){
    cout<<"NOME: "<< getNome()<<endl<<"CPF: "<<getCPF()<<endl<<"IDADE: "<<getIdade()<<endl;
    }

};
class Aluno : public Pessoa{
    private:
    int matricula;
    double media;

    public:
    Aluno() : Pessoa(){
    setMatricula(0);
    setMedia(0);
    }
    Aluno(string n, string cpf, int id, int matricula, double media) : Pessoa(n, cpf, id){
    setMatricula(matricula);
    setMedia(media);
    }
    void setMatricula(int m){
    if(m >= 0) matricula = m;
    else cout<<"erro";
    }
    void setMedia(double me){
    if(me >= 0) media = me;
    else cout<<"erro";
    }
    int getMatricula(){
    return matricula;
    }
    double getMedia(){
    return media;
    }
    void exibeAluno(){
    exibePai();
    cout<<"MATRICULA: "<<getMatricula()<<endl<<"MEDIA: "<<getMedia()<<endl;
    }
};
class Professor : public Pessoa{
    private:
    string Disciplina;
    double Salario;

    public:
    Professor() : Pessoa(){
    setDisciplina("nada");
    setSalario(0);
    }
    Professor(string n, string cpf, int id, string Disciplina, double Salario) : Pessoa(n,cpf,id){
    setDisciplina(Disciplina);
    setSalario(Salario);
    }
    void setDisciplina(string d){
    if(d.length() >= 4) Disciplina = d;
    else cout<<"erro";
    }
    void setSalario(double me){
    if(me >= 0) Salario = me;
    else cout<<"erro";
    }
    string getDisciplina(){
    return Disciplina;
    }
    double getSalario(){
    return Salario;
    }
    void exibeProfessor(){
    exibePai();
    cout<<"DISCIPLINA: "<<getDisciplina()<<endl<<"Salario: "<<getSalario()<<endl;
    }
};
void preencheAluno(Aluno *ptrAl, int posi){
     int idAux, matAux;
     string nomeAux, cpfAux;
     double Media;
     cout<<"Digite o nome: ";
     getline(cin,nomeAux);
     cout<<"Digite o cpf: ";
     getline(cin,cpfAux);
     cout<<"Digite a idade: ";
     cin>>idAux;
     cout<<"Digite a matricula: ";
     cin>>matAux;
     cout<<"Digite a media: ";
     cin>>Media;

     (ptrAl+posi)->inicializa(nomeAux,cpfAux,idAux);
     (ptrAl+posi)->setMatricula(matAux);
     (ptrAl+posi)->setMedia(Media);
}
void preencheProf(Professor *prof, int posi){
     int idAux;
     string discAux, nomeAux, cpfAux;
     double salAux;
     cout<<"Digite o nome: ";
     getline(cin,nomeAux);
     cout<<"Digite o cpf: ";
     getline(cin,cpfAux);
     cout<<"Digite a idade: ";
     cin>>idAux;
     cin.ignore();
     cout<<"Digite a disciplina: ";
     getline(cin,discAux);
     cout<<"Digite o salario: ";
     cin>>salAux;

     (prof+posi)->inicializa(nomeAux,cpfAux,idAux);
     (prof+posi)->setSalario(salAux);
     (prof+posi)->setDisciplina(discAux);
}
int main()
{
    Professor prof[3];
    Aluno al[2];


    cout<<"DIGITE AS INFORMACOES DOS ALUNOS"<<endl;
    // Preenche Alunos
    for(int i = 0; i < 2; i++){
        preencheAluno(al,i);
    }
    for(int j = 0; j < 3; j++){
        preencheProf(prof,j);
    }
    for(int p = 0; p < 2; p++){
        al[p].exibeAluno();
    }
    for(int h = 0; h < 3; h++){
        prof[h].exibeProfessor();
    }
    return 0;
}
