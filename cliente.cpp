#include "cliente.h"

Cliente::Cliente() {
  this->nome = "";
  this->cpf = "";
}

Cliente::Cliente(string nome, string cpf) {
  this->nome = nome;
  this->cpf = cpf;
}

string Cliente::GetCPF() { return this->cpf; }
string Cliente::GetNome() { return this->nome; }
