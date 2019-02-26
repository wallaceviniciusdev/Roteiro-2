#ifndef MESADERESTAURANTE_H_
#define MESADERESTAURANTE_H_
#include <vector>
#include "Pedido.h"

class MesaDeRestaurante{
     public:
        MesaDeRestaurante();
        virtual ~MesaDeRestaurante();
        void adicionaAoPedido(int numero, std::string descricao, int quantidade, float preco);
        void zeraPedidos();
        float calculaTotal();
        void todosPedidos();

        std::vector <Pedido> pedido;

};


#endif // MESADERESTAURANTE_H_
