#include <iostream>

using namespace std;
class Autor{
    private:
    string nomeAut;

    public:
    Autor(){
    setNome("Nada");
    }
    Autor(string nomeAut){
     setNome(nomeAut);
    }

    void setNome(string nAut){
    if(nAut.length() >= 2) nomeAut = nAut;
    }
    string getNome(){
    return nomeAut;
    }
    void exibe(){
    cout<<"Autor: "<<getNome()<<endl;
    }
};

class Livro{
    private:
    string titulo;
    int anoP;
    Autor *aut = new Autor();

    public:
    Livro (){
    inicializa("Nulo",1500,0);
    }
    Livro(string titulo, int anoP, Autor* aut){
    inicializa(titulo,anoP,aut);    /*ATENCAO: mandar ponteiro por parametro é sem *, pq se mandar com * manda o valor armazenado*/
    }

    void inicializa(string titulo, int anoP, Autor* aut){
    setTitulo(titulo);
    setAno(anoP);
    setAutor(aut);
    }

    void setTitulo(string nTitulo){
    if(nTitulo.length()>=2) titulo = nTitulo;
    else cout<<"Erro";
    }

    void setAno(int anop){
    if(anop >= 1500) anoP = anop;
    else cout<<"Erro";
    }
    void setAutor(Autor *nAutor){
    *(aut)= *nAutor;
    }
    string getTitulo(){
    return titulo;
    }
    int getAno(){
    return anoP;
    }
    Autor getAutor(){
    return *(aut);
    }
    void exibe(){
    cout << "Titulo: " << getTitulo() << endl;
    cout << "Ano de Publicacao: " << getAno() << endl;
    }
};

int main()
{
    Livro book;
    string tit,atr;
    int anop;
    cin>>tit;
    cin>>anop;
    cin>>atr;

    cout<< "Detalhes do livro: "<<endl;
    book.exibe();

    delete aut;
    return 0;
}
