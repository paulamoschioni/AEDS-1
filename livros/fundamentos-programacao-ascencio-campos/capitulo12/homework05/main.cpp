#include <iostream>

using namespace std;
class Padrao{
    protected:
    int codigo;
    string descricao;
    float preco;

    public:
    Padrao(){
    inicializa(0,"nada",0);
    }
    Padrao(int codigo,string descricao,float preco){
    inicializa(codigo,descricao,preco);
    }
    void inicializa(int codigo,string descricao,float preco){
    setCodigo(codigo);
    setDescricao(descricao);
    setPreco(preco);
    }
    void setCodigo(int c){
    if(c >= 0) codigo = c;
    else cout<< "ERROR";
    }
    void setDescricao(string d){
    if(d.length() >= 4) descricao = d;
    else cout<<"ERROR";
    }
    void setPreco(float p){
    if(p >= 0) preco = p;
    else cout<<"ERROR";
    }
    int getCodigo(){
    return codigo;
    }
    string getDescricao(){
    return descricao;
    }
    float getPreco(){
    return preco;
    }
    void exibePai(){
    cout<<"CODIGO: "<<getCodigo()<<endl<<"DESCRICAO: "<<getDescricao()<<endl<<"PRECO: "<<getPreco()<<endl;
    }
};
class Medicamento: public Padrao{
    private:
    float percLucro;
    string dataVenc;

    public:
    Medicamento():Padrao(){
    setPercL(0);
    setDataV("00/00/00");
    }
    Medicamento(float percLucro, string dataVenc): Padrao(codigo,descricao,preco){
    setPercL(percLucro);
    setDataV(dataVenc);
    }

    void setPercL(float pl){
    if(pl >= 0) percLucro = pl;
    else cout<<"ERROR";
    }
    void setDataV(string dv){
    if(dv.length() >= 0) dataVenc = dv;
    else cout<<"ERROR";
    }
    float getPercL(){
    return percLucro;
    }
    string getDataV(){
    return dataVenc;
    }
    void exibeMed(){
    exibePai();
    cout<<"DATA DE VENCIMENTO: "<<getDataV()<<endl<<"PERCENTUAL DE LUCRO: "<<getPercL()<<endl;
    }
};

class ProdutoHigiene: public Padrao{
    public:
    ProdutoHigiene() : Padrao(codigo,descricao,preco){  }

};
int main()
{
    string stringAux;
    int i = 0;
    Padrao **prod= new Padrao*[15];


    do{ // Criando o array com o tipo correto
    cout<<"Digite o tipo de produto a ser cadastrado: ";

    getline(cin,stringAux);
    if(stringAux == "produtos de higiene") {
    *(prod+i) = new ProdutoHigiene();
    } else if(stringAux == "medicamentos") {
    *(prod+i) = new Medicamento();
    } else {
    cout<<"TIPO INVALIDO. Digite Novamente: ";
    }
    cin>>stringAux;
    i++;
    }while(stringAux != "fim");

    return 0;
}
