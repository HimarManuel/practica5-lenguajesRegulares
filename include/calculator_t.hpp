#pragma once

#include "language_t.hpp"
#include <ctype.h>

class calculator_t {
private:
  language_t l1_;
  language_t l2_;
  language_t result_;
  string input_;

public:

  calculator_t (void);
  ~calculator_t (void);

  void reverse (void);
  void concatenation (void); //ampliada para trabajar con expresiones regulares
  void join (void);
  void intersection (void);
  void difference (void);
  void sublanguage (void);
  void equal (void);
  void power (void);
  void kleene (void);

  void show_result (void);
private:
  bool is_regular_expression (string s);
  language_t split (const string& s);
  bool is_integer (void);
  void choose1 (void);
  void choose2 (void);
};
