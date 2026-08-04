#include <iostream>

using namespace std;
class Imoveis{
    protected:
    int quadra;
    int lote;
    int area;
    float valorVenda;
    int situacao;
    float valorCom;

    public:
    Imoveis(){
    inicializa(0,0,0,0,0,0);
    }
    Imoveis(int quadra, int lote, int area, float valorVenda, int situacao, float valorCom){
    inicializa(quadra,lote,area,valorVenda,situacao,valorCom);
    }
    void inicializa( int quadra, int lote, int area, float valorVenda, int situacao, float valorCom){
    setQuadra( quadra);
    setLote( lote);
    setArea( area);
    setValorV( valorVenda);
    setSituacao( situacao);
    setValorCom( valorCom);
    }

    void setQuadra(int q){
    if (q >= 0) quadra = q;
    else cout<<"Erro na quadra";
    }
    void setLote(int l){
    if(l >= 0) lote = l;
    else cout<<"Erro no lote";
    }
    void setArea(int a){
        if(a >= 0) area = a;
        else cout<<"Erro na area";
    }
    void setValorV(float v){
    if (v >=0) valorVenda = v;
    else cout<<"Erro no valor de venda";
    }
    void setSituacao(int s){
    if (s >=0) situacao=s;
    else cout<<"Erro na situacao";
    }
    void setValorCom(float vC){
    float valorMax = getValorV() * 0.1;
    float valorReal = getValorV() * vC;

    if (valorReal <= valorMax) valorCom = valorReal;
    else cout<<"Erro no valor de comissao";
    }

    int getQuadra(){
    return quadra;
    }
    int getLote(){
    return lote;
    }
    int getArea(){
    return area;
    }
    float getValorV(){
    return valorVenda;
    }
    int getSituacao(){
    return situacao;
    }
    float getValorCom(){
    return valorCom;
    }

    virtual float CalculaIPTU() = 0;     // Aqui indica que é um metodo implementado por uma classe filha
};

class Casas: public Imoveis{ // Criando a primeira classe filha. Nao tem atributos novos;
    public:
    /// Construtor da filha
    Casas():Imoveis(){/*Nao tem atributos p inicializa*/}     /// Casas():Imoveis = quando casa for criado, execute o construrtor de imoveis primeiro

    Casas(int quadra, int lote, int area, float valorVenda, int situacao, float valorCom):Imoveis(quadra,lote,area,valorVenda,situacao,valorCom){
    }

    float CalculaIPTU () override{
    return (0.01 * getValorV());
    }
};


class Terrenos: public Imoveis{ // Criando a segunda classe filha. Nao tem atributos novos;
    public:
    /// Construtores da filha
    Terrenos():Imoveis(){/*Nao tem atributos p inicializa*/}

    Terreno(int quadra, int lote, int area, float valorVenda, int situacao, float valorCom): Imoveis(quadra,lote,area,valorVenda,situacao,valorCom){}
    float CalculaIPTU () override{
    return (0.02 * getValorV());
    }
};
int main()
{
    Imoveis **im = new Imoveis*[30];    // Aqui cria-se um ponteiro fingindo ser do tipo imoveis, mas na verdade ele aponta para CASAS ou TERRENO. No caso aponta para um ponteiro de imoveis
    int i = 0, quadraAux, loteAux, areaAux, sitAux, tipoAux;
    float valorAux, percAux, acumuValoresVenda = 0;


cout<<"Digite a quadra";
    cin>>quadraAux;
    while(quadraAux >= 0){
    cout<<"Digite o lote: ";
    cin>>loteAux;

    cout<<"Digite o tipo do imovel: ";
    cin>>tipoAux;
    while(tipoAux != 1 && tipoAux != 2){
    cout<<"Tipo invalido. Digite novamente: ";
    cin>>tipoAux;
    }
    if(tipoAux == 1) {// Se for do tipo 1(TERRENO), crie o objeto TERRENO
    *(im+i) = new Terrenos(quadraAux, loteAux, areaAux, valorAux, sitAux, 0.0);
    } else if (tipoAux == 2){
    *(im+i) = new Casas(quadraAux, loteAux, areaAux, valorAux, sitAux, 0.0);
    }
    cout<<"Digite a area";
    cin>>areaAux;

    cout<<"Digite a situacao";
    cin>>sitAux;
    while(sitAux != 1 && sitAux != 2 && sitAux!= 3){
        cout<<"Situacao invalida. Digite novamente: ";
        cin>>sitAux;
    }
    if(sitAux == 1 || sitAux == 3){ // Decidindo comicao
    (*(im+i)).setValorCom(0.0);
    } else if (sitAux == 2){
    cout<< "Digite o percentual para o calculo da comissao: ";
    cin>>percAux;
    (*(im+i)).setValorCom(percAux);
    }


    acumuValoresVenda += (im+i)->getValorV();
    acumuComissoes += (im+i)->getValorCom();
    i++;
    cout<<"Digite a quadra";
    cin>>quadraAux;
    }
    cout<<"Somatorio dos valores dos imoveis: "<<acumuValoresVenda<<endl;
     cout<<"Somatorio das comissoes: "<<acumuComissoes<<endl;
    return 0;
}
