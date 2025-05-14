#include "contabancaria.h"
#include <iostream>
using namespace std;

ContaBancaria::ContaBancaria(int numero, Cliente titular) {
  this->numero = numero;
  this->titular = titular;
  this->saldo = 0.0;
}

ContaBancaria::ContaBancaria(int numero, Cliente titular, double saldo) {
  this->numero = numero;
  this->saldo = saldo;
  this->titular = titular;
}

void ContaBancaria::transferir(double valor, ContaBancaria &destino) {
  if (this->saldo >= valor) {
    this->saldo -= valor;
    destino.depositar(valor);
  } else {
    cout << "Saldo insuficiente para transferência." << endl;
  }
}

void ContaBancaria::transferir(double valor, ContaBancaria &destino,
                               ContaBancaria &destino2) {
  if (this->saldo >= valor) {
    this->saldo = this->saldo - valor;
    destino.depositar(valor / 2.0);
    destino2.depositar(valor / 2.0);
  } else {
    cout << "Saldo insuficiente para transferência." << endl;
  }
}

void ContaBancaria::depositar(double valor) { this->saldo += valor; }

void ContaBancaria::sacar(double valor) {
  if (this->saldo >= valor) {
    this->saldo -= valor;
  } else {
    cout << "Saldo insuficiente para saque." << endl;
  }
}

void ContaBancaria::exibirInformacoes() {
  cout << "Conta: " << this->numero << endl;
  cout << "Titular: " << this->titular.GetNome() << endl;
  cout << "CPF: " << this->titular.GetCPF() << endl;
  cout << "Saldo: R$" << this->saldo << endl;
  cout << endl;
}

void ContaBancaria::exibirSaldo() {
  cout << "Saldo da conta " << this->numero << ": R$" << this->saldo << endl;
}
