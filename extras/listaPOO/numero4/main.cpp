#include <iostream>

using namespace std;
class Funcionario{
    private:
    string nome;
    double salario;

    public:
    Funcionario(){      /// Construtor sem parametros: para iniciar com valores neutros
    setNome("nada");
    setSalario(0);
    }
    Funcionario(string nome, double salario){   /// Construtor com parametros: para iniciar com valores reais
    setNome(nome);
    setSalario(salario);
    }
    void setNome(string nome){      /// Set: acessar de forma indireta um atributo private
    if(nome.length() >= 2) this->nome = nome;
    else cout << "ERROR";
    }
    void setSalario(double salario){
    if(salario >= 0) this->salario = salario;
    else cout << "ERROR";
    }

    string getNome(){       /// Retornar um valor ja setado
    return nome;
    }
    double getSalario(){
    return  salario;
    }

    double aumentarSal(){
    float perc;
    cout<<"Digite o valor percentual desejado: ";
    cin>>perc;
    return (getSalario()*(perc/100.0))+getSalario();
    }

    void exibe(){       /// Exibir informacoes na tela
    cout<<"NOME: "<<getNome()<<endl<<"SALARIO: "<<getSalario()<<endl;
    }
};
void preenche(Funcionario *obj){        /// Aqui criei um modulo para preencher o objeto, passando o endereco dele na memoria, para que
    string nomeAux;         /// ele possa acessar e alterar dados de dentro de la
    double salAux;

    cout<<"Digite o nome: ";
    cin>>nomeAux;
    obj->setNome(nomeAux);       // ATENCAO: nao pode acessar construtor

    cout<<"Digite o salario: ";
    cin>>salAux;
    obj->setSalario(salAux);
}

int main()
{
    // Cria o objeto aqui
    Funcionario func;

    preenche(&func); // Se eu mandar  endereco de func pq assim pd alterar dados
    func.exibe();
    cout<<func.aumentarSal();
    return 0;
}
