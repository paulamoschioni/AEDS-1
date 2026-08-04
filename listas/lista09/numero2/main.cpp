#include <iostream>

using namespace std;
string calculaProx(int horas, int minutos, int segundos);

class Relogio{
    private:
    int horas, minu, seg;

    public:
    /// Construtores com e sem parametro
    Relogio(){
    inicializa(0,0,0);
    }
    Relogio(int horas, int minu, int seg){
    inicializa(horas, minu, seg);
    }
    void inicializa(int horas, int minu, int seg){
    setH(horas);
    setM(minu);
    setS(seg);
    }
    /// Setters
    void setH(int nHoras){
    if(00 <= nHoras && nHoras <=23) horas = nHoras;
    else cout<<"Erro, horas invalidas";
    }
    void setM(int nMinu){
    if(00 <= nMinu && nMinu <=59) minu = nMinu;
    else cout<<"Erro, minutos invalidos\n";
    }
    void setS(int nSeg){
    if(00 <= nSeg && nSeg <=59) seg = nSeg;
    else cout<<"Erro, segundos invalidos";
    }
    ///Getters
    int getH (){
    return horas;
    }
    int getM (){
    return minu;
    }
    int getS (){
    return seg;
    }
    ///Exibe
    void exibe(){
    cout << "Horario inicial :" << getH() << ":" << getM() << ":" << getS() << endl;
    cout << "Novo horario: ";
    cout << calculaProx(getH(),getM(),getS());
    }
};

string calculaProx(int horas, int minutos, int segundos){
    // Segundos
    segundos++;
    if (segundos == 60) {
    segundos = 00;
    minutos++;
    }

    // Minutos
    if (minutos == 60){
        minutos = 00;       // 22:59:59 -- 22:00:00
        horas++;
    }

    // Horas
    if(horas == 24) horas = 00;

     string resultado = to_string(horas) + ":" + to_string(minutos) + ":" + to_string(segundos);
        return  resultado;
}

int main()
{
    int N, valHoras, valMinu, valSegu;
    cout<<"Digite o numero:";
    cin>>N;
    Relogio *rlg = new Relogio[N];

    for(int  i = 0; i < N; i++){
        cout<<"Digite as horas, os minutos e os segundos: ";
        cin>>valHoras;
        (rlg+i)->setH(valHoras);
        cin>>valMinu;
        (rlg+i)->setM(valMinu);
        cin>>valSegu;
        (rlg+i)->setS(valSegu);
    }

    for(int j = 0; j < N; j++){
        (rlg+j)->exibe();

    }

    return 0;
}
