#include <iostream>
#include <stdexcept>
using namespace std;
class Produto{
    protected:
    int codigo;
    string nome;
    float preco;

    public:
    Produto(){
    inicializa(0,"nada",0);
    }
    Produto(int codigo, string nome, float preco){
    inicializa(codigo,nome,preco);
    }
    void inicializa(int codigo, string nome, float preco){
    try{
    setCodigo(codigo);
    setNome(nome);
    setPreco(preco);
    } catch (invalid_argument &eObj){
    cerr<<"ERROR";
    }
    }
    void setNome(string n){
    if(n.length() >= 2) nome = n;
    else throw ("Erro no nome");
    }
    void setCodigo(int codigo){
    if(codigo >= 2) this->codigo = codigo;
    else throw ("Erro no codigo");
    }
    void setPreco(float p){
    if(p >= 0) preco = p;
    else throw ("Erro no preco");
    }
    int getCodigo(){
    return codigo;
    }
    string getNome(){
    return nome;
    }
    float getPreco(){
    return preco;
    }
    void exibePai(){
    cout<<"CODIGO: "<<getCodigo()<<endl<<"NOME: "<<getNome()<<endl<<"PRECO: "<<getPreco();
    }
};
class ProdutoPerecivel : public Produto{
    private:
    int diasValidade;

    public:
    ProdutoPerecivel() : Produto(){
    setDiasValidade(0);
    }
    ProdutoPerecivel(int codigo, string nome, float preco, int diasValidade) : Produto(codigo,nome,preco){
    try{
    setDiasValidade(diasValidade);
    } catch (invalid_argument &obj){
    cerr<<"Erro";
     }
    }
    void setDiasValidade(int d){
    if(d >= 0) diasValidade = d;
    else throw ("Erro nos dias de validade");
    }
    int getDias(){
    return diasValidade;
    }
    void estaVencido(){
    if(getDias() == 0) cout<<"Produto vencido";
    }
    void exibirFilha(){
    exibePai();
    cout<<"Data de vencimento: "<<getDias();
    }
};
int main()
{

    return 0;
}
