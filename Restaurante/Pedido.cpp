#include "Pedido.h"

Pedido::Pedido()
{
    this->numero = 0;
    this->descricao = "";
    this->quantidade = 0;
    this->preco = 0.0;
}

Pedido::~Pedido()
{
    //dtor
}

void Pedido::setNumero(int numero){
    this->numero = numero;
}

void Pedido::setDescricao(std::string descricao){
    this->descricao = descricao;
}

void Pedido::setQuant(int quantidade){
    this->quantidade = quantidade;
}

void Pedido::setPreco(float preco){
    this->preco = preco;
}

int Pedido::getNumero(){
    return this->numero;
}

std::string Pedido::getDescricao(){
    return this->descricao;
}

int Pedido::getQuant(){
    return this->quantidade;
}

float Pedido::getPreco(){
    return this->preco;
}
