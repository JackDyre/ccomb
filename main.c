#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("Hello world");
  return 0;
}

typedef struct Expression {
  struct Term *terms;
  size_t size;
  size_t cap;
} Expression;

typedef struct Element {
  char name[16];
} Element;

typedef struct Abstraction {
  struct Term *term;
  char var[16];
} Abstraction;

typedef enum TermType {
  EXPRESSION,
  ELEMENT,
  ABSTRACTION,
} TermType;

typedef struct Term {
  TermType type;
  union {
    struct Abstraction abstraction;
    struct Expression expression;
    struct Element element;
  } data;
} Term;



