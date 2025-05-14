#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

#include "cliente.h"

class ContaBancaria {
private:
  int numero;
  double saldo;
  Cliente titular;

public:
  ContaBancaria();
  ContaBancaria(int numero, Cliente titular);
  ContaBancaria(int numero, Cliente titular, double saldo);
  void depositar(double valor);
  void sacar(double valor);

  void exibirInformacoes();
  void exibirSaldo();

  void transferir(double valor, ContaBancaria &destino);
  void transferir(double valor, ContaBancaria &destino,
                  ContaBancaria &destino2);
};

#endif
