#include <iostream>
/*AUTORA: Paula Moschioni
  DATA: 18/06/2026 */
using namespace std;
class Carro{
    private:    // Com private, apenas a classe mae consegue acessar. areas dee fora nao acessam
    int capacT;
    int consumoC;
    int qtdeC;
    int distP;

    public:
               // Construtores
     Carro(){    /// Aqui o construtor inicializa
    inicializa(0,0,0,0);
    }

     Carro(int capacT, int consumoC, int qtdeC, int distP){  /// Aqui o construtor recebe dados reais
    inicializa(capacT,consumoC,qtdeC,distP);
    }
               // Inicializa
    void inicializa(int capacT, int consumoC, int qtdeC, int distP){
    setCapacidade(50);
    setConsumo(15);
    setQuantidade(qtdeC);
    setDistancia(distP);
    }
               //Setters
     void setCapacidade(int nCapac){
     capacT = nCapac;
     }
     void setConsumo(int nConsu){
     consumoC = nConsu;
     }
     void setQuantidade(int nQtde){
     if (nQtde >=
          0) qtdeC = nQtde;
     else cout<<"ERRO. Quantidade invalida"<<endl;
     }
     void setDistancia(int nDista){
     if (nDista >= 0) distP = nDista;
     else cout<<"ERRO. Distancia invalida"<<endl;
     }
                // Getters
     int getCapacidade(){
       return (capacT);
     }
     int getConsumo(){
       return (consumoC);
     }
      int getQuantidade(){
       return (qtdeC);
     }
     int getDistancia(){
       return (distP);
     }
                // Abastecer: atualiza a qtde de combustivel
    int Abastece(int distOBJ){
    int novoC = (getQuantidade() - (distOBJ/15));
    setQuantidade(novoC);
    return getQuantidade();
    }

};
int main()
{
    int comb1, comb2, dist1, dist2;
    Carro car1, car2;   /// Objetos criados

    cout<<"Digite o comb de 1 e 2: "<<endl;
    cin>>comb1;
    cin>>comb2;
    cout<<"Digite a distancia de 1 e 2"<<endl;
    cin>>dist1;
    cin>>dist2;

    /// Mandar infos para o construtor com parametros
    car1 = Carro(50,15,comb1,dist1);
    car2 = Carro(50,15,comb2,dist2);
    ///  Manda calcular dist e comb
    cout<<"Carro 1:"<<endl;
    cout<<"Distancia percorrida:"<< car1.getDistancia()<<endl;
    cout<<"Combustivel restante:"<< car1.Abastece(dist1)<<endl;
    cout<<endl;
    cout<<"Carro 2:"<<endl;
    cout<<"Distancia percorrida:"<< car2.getDistancia()<<endl;
    cout<<"Combustivel restante:"<< car2.Abastece(dist2)<<endl;
    return 0;
}
