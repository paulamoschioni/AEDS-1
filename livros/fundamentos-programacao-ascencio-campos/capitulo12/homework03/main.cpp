#include <iostream>
/*AUTORA: Paula Moschioni
DATA: 23/06/2026
*/
using namespace std;
class Cargo{
    private:
    int nmrCodigo;
    int valorHora;

    public:
    Cargo(){
    setNcargo(0);
    setValorH(0);
    }
    Cargo(int nmrCodigo, int valor){
    setNcargo(nmrCodigo);
    setValorH(valor);
    }

    void setNcargo(int cod){
        if(cod >= 0) nmrCodigo = cod;
        else cout<<"ERRO";
    }
    void setValorH(int v){
        if(v >= 0) valorHora = v;
    }

    int getNcodigo(){
    return nmrCodigo;
    }
    int getValorH(){
    return valorHora;
    }

};

class Funcionario{


    private:
    int codigoCargo;
    char sexo;
    int qtdeHoras;

    public:
    Funcionario(){
    inicializa(0,'o',0);
    }
    Funcionario(int c, char s, int q){
    inicializa(c,s,q);
    }
    void inicializa(int c, char s, int q){
    setCodigo(c);
    setSexo(s);
    setQtdeH(q);
    }
    void setCodigo(int c){
    if (0 <= c) codigoCargo = c;
    else cout<<"ERRO no codigo do cargo"<<endl;
    }
    void setSexo(char s){
    if(s == 'M' || s == 'm' || s == 'f'|| s == 'F') sexo = s;
    else cout<<"ERRO no sexo"<<endl;
    }
    void setQtdeH(int q){
    if(q >= 0) qtdeHoras = q;
    else cout << "ERRO na quantidade de horas"<<endl;
    }
    int getCodigoCargo(){
    return codigoCargo;
    }
    char getSexo(){
    return sexo;
    }
    int getQtdeH(){
    return qtdeHoras;
    }

    float calculaSalario(int valorH, char sexo){
        float sal;
        if(sexo == 'f' || sexo == 'F') {
        sal = 1.2 * (getQtdeH() * valorH);
        } else {
        sal = (getQtdeH() * valorH);
        }
    return sal;
    }
};
int main()
{
    // Criando objetos
    Cargo cargo1(1,15), cargo2(2,20), cargo3(3,32);
    Funcionario func1;
    int codAux, qtdeAux;
    char sexoAux;

    // Preenchendo objetos
    cout<<"Digite o codigo do cargo: ";
    cin>>codAux;

    while(codAux != 1 && codAux != 2 && codAux != 3){
        cout<<"Codigo de cargo invalido. Digite novamente: ";
        cin>>codAux;
    }
     func1.setCodigo(codAux);

    cout<<"Digite o sexo: ";
    cin>>sexoAux;
    while(sexoAux != 'M' && sexoAux != 'm' && sexoAux != 'f'&& sexoAux!= 'F'){
        cout<<"Sexo invalido. Digite novamente: ";
        cin>>sexoAux;
    }
    func1.setSexo(sexoAux);

    cout<<"Digite a quantidade de horas trabalhadas: ";
    cin>>qtdeAux;
    func1.setQtdeH(qtdeAux);
        // Enviando infos para calcular salario final
    if(codAux == 1){
        float valorH = cargo1.getValorH();
        cout<< func1.calculaSalario(valorH,sexoAux);
    } else if (codAux == 2){
        float valorh = cargo2.getValorH();
        cout<<func1.calculaSalario(valorh,sexoAux);
    } else if (codAux == 3){
        float valo = cargo3.getValorH();
        cout<<func1.calculaSalario(valo,sexoAux);
    }

    return 0;
}
