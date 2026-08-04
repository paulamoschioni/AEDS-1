#include <iostream>

using namespace std;
class Produto{
private:
    string nome;
    double preco;
    int qtde;

public:
    Produto(){
    setNome("nada");
    setPreco(0);
    setQtde(0);
    }
    Produto(string nome, double preco, int qtde){
    setNome(nome);
    setPreco(preco);
    setQtde(qtde);
    }

    void setNome(string n){
    if(n.length() >= 2) nome = n;
    else cout<<"ERRO.";
    }
    void setPreco(double p){
    if(p>=0) preco = p;
    else cout<< "ERRo";
    }
    void setQtde(int q){
    if(q>=0) qtde = q;
    else cout<< "ERRo";
    }
    string getNome(){
    return nome;
    }
    double getPreco(){
    return preco;
    }
    int getQtde(){
    return qtde;
    }
    void exibe(){
    cout<<"NOME: "<<getNome()<<endl<<"PRECO: "<<getPreco()<<endl<<"Quantidadde: "<<getQtde()<<endl;
    cout<<"VALOR TOTAL: "<<calcularValorTotal()<<endl;
    }
    double calcularValorTotal(){
    return (getPreco() * getQtde());
    }

};
void preenche(Produto *produto, int p){
    int qtdeAux;
    string nomeAux;
    double precoAux;

    cout<<"Digite o nome:";
    getline(cin,nomeAux);
    (*(produto+p)).setNome(nomeAux);
    cout<<"Digite a quantidade:";
    cin>>qtdeAux;
    (produto+p)->setQtde(qtdeAux);
    cout<<"Digite o preco: ";
    cin>>precoAux;
    (*(produto+p)).setPreco(precoAux);
    cin.ignore();
}
int main()
{
    Produto produto[3];
    for(int p = 0; p < 3; p++){
    preenche(produto,p);
    }
    for (int e = 0; e < 3; e++){
    (*(produto+e)).exibe();
    }
    return 0;
}
