# Compiler and flags
G = g++
GFLAGS = -Wall

programa: main.o contabancaria.o cliente.o
	$(G) $(GFLAGS) -o programa main.o contabancaria.o cliente.o

main.o: main.cpp contabancaria.h cliente.h
	$(G) $(GFLAGS) -c main.cpp

contabancaria.o: contabancaria.cpp contabancaria.h cliente.h # Include precisa estar nos arquivos
	$(G) $(GFLAGS) -c contabancaria.cpp

cliente.o: cliente.cpp cliente.h
	$(G) $(GFLAGS) -c cliente.cpp

clean:
	rm -f *.o programa
