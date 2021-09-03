#include<iostream>
#include "Book.hh"
#include "Stack.hh"

int main()
{
  Book* book1{new Book("book1", "nombrels", 300)};
  Book* book2{new Book("book2", "castro", 500)};
  Book* book3{new Book("book3", "luna", 1000)};
  Book* book4{new Book("book4", "jorge", 100)};

  Stack* stack{new Stack()};
  stack->Push(book1);
  stack->Push(book2);
  stack->Push(book3);
  stack->Push(book4);
  stack->Print();

  stack->Pop();
  //stack->Pop();
  //stack->Pop();
  //stack->Pop();

  stack->Print();

  std::cout << "Book top name: " << stack->GetTop()->GetBook()->GetName() << std::endl;

  std::cin.get();

  delete stack;
  return EXIT_SUCCESS;//es igual que poner return 0, esto es de c++
}