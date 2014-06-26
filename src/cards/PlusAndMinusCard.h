#ifndef PlusAndMinusCard_H
#define PlusAndMinusCard_H

#include "Card.h"
 
class PlusAndMinusCard : public Card {
private:
  size_t value1;
  size_t value2;
  size_t tie_flag;
public:
  PlusAndMinusCard ();
  std::string toString();
};

#endif
