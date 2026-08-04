#include <iostream>
using namespace std;

class Elevador {
    private:
    int andarAtual;
    int totalAndares;
    int capacidade;
    int pessoasPresentes;

    public:
    Elevador(){
        inicializa(0,0);
    }
    Elevador(int cap, int tAndares){
        inicializa(cap, tAndares);
    }


    void inicializa(int cap, int tAndares){
        setCapacidade(cap);
        setTotalAndares(tAndares);
        setPessoasPresentes(0);
        setAndarAtual(0);
    }

    void setAndarAtual(int aAtual){
        if(aAtual >= 0) andarAtual = aAtual;
        else cout << "ERRO" << endl;
    }

    void setTotalAndares(int tAndares){
        if(tAndares >= 0) totalAndares = tAndares;
        else cout << "ERRO" << endl;
    }

    void setCapacidade(int cap){
        if(cap >= 0) capacidade = cap;
        else cout << "ERRO" << endl;
    }

    void setPessoasPresentes(int pPresentes){

        if(pPresentes >= 0 && pPresentes <= capacidade) pessoasPresentes = pPresentes;
        else cout << "ERRO" << endl;
    }

    int getAndar(){
        return andarAtual;
    }

    int getTotalAndares(){
        return totalAndares;
    }

    int getCapacidade(){
        return capacidade;
    }

    int getPessoasPresentes(){
        return pessoasPresentes;
    }


    void entra(){
        if(pessoasPresentes < capacidade){
            pessoasPresentes++;
        } else {
            cout << "ERRO: elevador cheio!" << endl;
        }
    }


    void sai(){
        if(pessoasPresentes > 0){
            pessoasPresentes--;
        } else {
            cout << "ERRO: nao ha pessoas no elevador!" << endl;
        }
    }

    // Move o elevador um andar para cima
    void sobe(){
        if(andarAtual < totalAndares){
            andarAtual++;
        } else {
            cout << "ERRO: elevador ja esta no ultimo andar!" << endl;
        }
    }

    // Move o elevador um andar para baixo
    void desce(){
        if(andarAtual > 0){
            andarAtual--;
        } else {
            cout << "ERRO: elevador ja esta no andar mais baixo!" << endl;
        }
    }
};

int main()
{
    int capacidade, tAndares, acoes, numElevador;
    string ac;

    cout << "Digite a capacidade e o total de andares" << endl;
    cin >> capacidade >> tAndares;

    // Criando os dois elevadores com os mesmos dados do predio
    Elevador ele1(capacidade, tAndares);
    Elevador ele2(capacidade, tAndares);

    cout << "Digite a quantidade de acoes a serem realizadas: ";
    cin >> acoes;

    for(int i = 0; i < acoes; i++){
        cout << "Digite a acao desejada (entrar, sair, subir, descer): ";
        cin >> ac;

        cout << "Digite o elevador (1 ou 2): ";
        cin >> numElevador;
        Elevador *elevadorEscolhido;
        if(numElevador == 1){
            elevadorEscolhido = &ele1;
        } else {
            elevadorEscolhido = &ele2;
        }


        if(ac == "entrar"){
            elevadorEscolhido->entra();
        } else if(ac == "sair"){
            elevadorEscolhido->sai();
        } else if(ac == "subir"){
            elevadorEscolhido->sobe();
        } else if(ac == "descer"){
            elevadorEscolhido->desce();
        } else {
            cout << "Acao invalida!" << endl;
        }


        cout << "Andar atual: " << elevadorEscolhido->getAndar() << endl;
        cout << "Pessoas presentes: " << elevadorEscolhido->getPessoasPresentes() << endl;
    }

    return 0;
}
