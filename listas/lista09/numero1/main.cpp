#include <iostream>

using namespace std;
class Pessoa {
    private:    // Atributos
    string nome;
    int idade;
    float altura;

    public:
    /// Construtor sem parametros: para atribuir valores "neutros"
    Pessoa(){
    inicializa("Nenhum",0,0);
    }
    /// Construtor com parametros: para atribuir valores reais
    Pessoa(string nome, int idade, float altura){
    inicializa(nome,idade,altura);
    }
    /// Inicializa: preenche valores INDIRETAMENTE: chama os setters
    void inicializa(string nNome, int nIdade, float nAltura){
    setNome(nNome);
    setIdade(nIdade);
    setAltura(nAltura);
    }
    /// Blocos setters: para gravar no private
    void setNome(string nNome){
    if(nNome.length()>=2) nome = nNome;
    else cout << "ERRO, nome invalido";
    }
    void setIdade(int nIdade){
    if(nIdade >= 0) idade = nIdade;
    else cout << "ERRO, idade invalida";
    }
    void setAltura(float nAltura){
    if(nAltura >= 0) altura = nAltura;
    else cout << "ERRO, altura invalida";
    }
    /// Blocos getters: para retornar o valor gravado
    // Obs: deve vir sem parametros
    string getNome(){
    return nome;
    }
    int getIdade(){
    return idade;
    }
    float getAltura(){
    return altura;
    }
    /// Exibe: para printar de fato os dados
    void exibe(){
    cout "Dados da pessoa: "<<endl<< "Nome: " << getNome() <<endl<< "Idade: "<< getIdade()<<" anos" <<endl<< "Altura: "<< getAltura() << " metros" << endl;
    }
};



int main()
{
    int N;
    string textoNome;
    int valIdade;
    float valAltura;
   //cout<<"Digite o numero de pessoas: ";
    cin >> N;
    Pessoa *pss = new Pessoa[N];

    cin.ignore();
    for(int i = 0; i < N; i++){
    cout<<"Nome: ";
    getline(cin,textoNome);  // equivale ao token
    (pss+i)->setNome(textoNome);
    cout<<"Idade: ";
    cin>>valIdade;
    (pss+i)->setIdade(valIdade);
    cout<<"Altura: ";
    cin>>valAltura;
    (pss+i)->setAltura(valAltura);
    cin.ignore();
    }
    for(int j = 0; j < N; j++){
        (pss+j)->exibe();
    }


    return 0;
}
