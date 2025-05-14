#include "cliente.h"

// Cliente iniciliazando vazio
Cliente::Cliente() {
  this->nome = "";
  this->cpf = "";
}

// Cliente iniciliazando com nome e cpf
Cliente::Cliente(string nome, string cpf) {
  this->nome = nome;
  this->cpf = cpf;
}

// Retornar dados privados
string Cliente::GetCPF() { return this->cpf; }
string Cliente::GetNome() { return this->nome; }
