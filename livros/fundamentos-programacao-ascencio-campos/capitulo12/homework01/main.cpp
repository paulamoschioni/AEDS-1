#include <iostream>
/*AUTORA: Paula Moschioni
DATA: 22/06/2026
*/
using namespace std;
class Tipo{
    private:
    int codigo;
    int percent;

    public:
    Tipo(){
    codigo = 0;
    percent = 0;
    }
    Tipo(int cod, int perc){
    codigo = cod;
    percent = perc;
    }

    int getCodigo(){
    return codigo;
    }
    int getPercentual(){
    return percent;
    }
};

class Produto{
    private:
    string descricao;
    Tipo tp;
    float preco;
    float imposto;

    public:
    Produto(){
    inicializa("nada",Tipo(),0,0);      /*OBSERVACAO: para inicializar uma variavel do tipo Tipo, chama-se o construtor vazio*/
    }
    Produto(string descricao, Tipo tp, float preco, float imposto){
    inicializa(descricao,tp,preco,imposto);
    }

    void inicializa(string descricao,Tipo tp, float preco, float imposto){

    setDescricao(descricao);
    setTipo(tp);
    setPreco(preco);
    setImposto(imposto);
    }

    void setDescricao(string d){
    descricao = d;
    }
    void setTipo(Tipo t){
    tp = t;
    }
    void setPreco(float p){
    preco = p;
    }
    void setImposto(float i){
    imposto = i;
    }

    string getDescricao(){
    return descricao;
    }
    Tipo getTipo(){
    return tp;
    }
    float getPreco(){
    return preco;
    }
    float getImposto(){
    return imposto;
    }

    float precoFinal(){
    float preco, imp, pf;
    preco = getPreco();
    imp = getImposto();
    pf = preco+imp;
    return pf;
    }
};

int main()
{
    Tipo t1(1,10),t2(2,20);    // Aqui cria 2 espaco na memoria do tipo Tipo
    Produto prod;
    string descAux;
    int tipoAux;
    float precoAux, impAux;


    //Criando e preenchendo Produtos
    cout<<"Digite a descricao: ";
    cin>>descAux;
    prod.setDescricao(descAux);
    cout<<"Digite o preco do produto: ";
    cin>>precoAux;
    prod.setPreco(precoAux);
    cout<<"Digite o imposto do produto: ";
    cin>>impAux;
    prod.setImposto(impAux);
    cout<<"Digite o tipo do produto:";
    cin>>tipoAux;
     if (tipoAux == 1){
        prod.setTipo(t1); // Aqui vc deve mandar por parametro um objeto do tipo Tipo
    } else if (tipoAux == 2){
    prod.setTipo(t2);
    }
    else{
        while(tipoAux!= 1 || tipoAux != 2) {
        cout<<"erro no tipo do produto, digite novamente";
        cin>>tipoAux;
    }}


    cout<<"O preco final do produto e:"<<prod.precoFinal()<<endl;
    return 0;
}
