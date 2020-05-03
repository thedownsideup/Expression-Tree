all: node.o operand.o add.o multiply.o not.o median.o tree.o main_expression.o
	g++ node.o operand.o add.o multiply.o not.o median.o tree.o main_expression.o

clean: clear all

clear:
	rm *.o

tree.o: src/tree.cpp
	g++ -c src/tree.cpp

node.o: src/node.cpp
	g++ -c src/node.cpp

operand.o: src/operand.cpp
	g++ -c src/operand.cpp

add.o: src/add.cpp
	g++ -c src/add.cpp

multiply.o: src/multiply.cpp
	g++ -c src/multiply.cpp

not.o: src/not.cpp
	g++ -c src/not.cpp

median.o: src/median.cpp
	g++ -c src/median.cpp

main_expression.o: src/main_expression.cpp
	g++ -c src/main_expression.cpp