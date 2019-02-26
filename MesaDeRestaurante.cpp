#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante(){
}

MesaDeRestaurante::~MesaDeRestaurante(){}

void MesaDeRestaurante::adicionaAoPedido(int numero, std::string descricao, int quantidade, float preco){
    int i;

    for(i = 0; i < pedido.size(); i++){
        if(this->pedido[i].getNumero() == numero || !descricao.compare(this->pedido[i].getDescricao())){
            int quant = this->pedido[i].getQuant();
            this->pedido[i].setQuant(quant + quantidade);
        }else{
            this->pedido[i].setNumero(numero);
            this->pedido[i].setDescricao(descricao);
            this->pedido[i].setQuant(quantidade);
            this->pedido[i].setPreco(preco);
        }
    }
}

void MesaDeRestaurante::zeraPedidos(){
    pedido.clear();
}

float MesaDeRestaurante::calculaTotal(){
    int i;
    float total = 0;

    for(i = 0; i < this->pedido.size(); i++){
        total += this->pedido[i].getPreco() * this->pedido[i].getQuant();
    }

    return total;
}
