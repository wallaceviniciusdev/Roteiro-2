#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>

class Pedido
{
    public:
        Pedido();
        virtual ~Pedido();
        int getNumero();
        std::string getDescricao();
        int getQuant();
        float getPreco();
        void setNumero(int);
        void setDescricao(std::string);
        void setQuant(int);
        void setPreco(float);


    private:
        int numero;
        std::string descricao;
        int quantidade;
        float preco;
};

#endif // PEDIDO_H
