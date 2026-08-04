#include <iostream>

using namespace std;
class Veiculo{
   protected:
   string marca;
   string modelo;
   int ano;

    public:
    Veiculo(){
    setMarca("nada");
    setModelo("nada");
    setAno(0);
    }
    Veiculo(string marca, string modelo, int ano){
    setMarca(marca);
    setModelo(modelo);
    setAno(ano);
    }

    void setMarca(string ma){
    if(ma.length() >= 2) marca=ma;
    else cout<<"ERROR";
    }
    void setModelo(string m){
    if(m.length() >= 2) modelo = m;
    else cout<<"ERROR";
    }
    void setAno(int a){
    if(a >= 1800 || a == 0) ano = a;
    else cout<<"ERROR";
    }
    string getMarca(){
    return marca;
    }
    string getModelo(){
    return modelo;
    }
    int getAno(){
    return ano;
    }

    void exibePai(){
    cout<<"MARCA: "<<getMarca()<<endl<<"MODELO: "<<getModelo()<<endl<<"ANO: "<<getAno()<<endl;
    }
};
class Carro : public Veiculo{
    private:
    int quantPortas;

    public:
    Carro(): Veiculo(){
    setQPortas(0);
    }
    Carro(int q, string marca, string modelo, int ano): Veiculo(marca,modelo,ano){
    setQPortas(q);
    }
    void setQPortas(int portas){
    if(portas >= 0) quantPortas = portas;
    else cout<<"ERROR";
    }
    int getPortas(){
    return quantPortas;
    }
    void exibe(){
    exibePai();
    cout<<"QUANTIDADE DE PORTAS: "<<getPortas()<<endl;
    }
};
void preenche(Carro *car){
    string marcaAux,modeloAux;
    int anoAux, pAux;

    cout<<"Marca: ";
    cin>>marcaAux;
    car->setMarca(marcaAux);
    cout<<"Modelo: ";
    cin>>modeloAux;
    car->setModelo(modeloAux);
    cout<<"Ano: ";
    cin>>anoAux;
    car->setAno(anoAux);
    cout<<"Quantidade de portas: ";
    cin>>pAux;
    car->setQPortas(pAux);
}
int main()
{
    Carro car;

    preenche(&car);
    car.exibe();
    return 0;
}
