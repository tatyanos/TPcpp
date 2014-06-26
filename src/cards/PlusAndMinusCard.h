#ifndef PlusAndMinusCard_H
#define PlusAndMinusCard_H

#include "CardBase.h"
 
class PlusAndMinusCard : public CardBase {
private:
  size_t value1;
  size_t value2;
  size_t tie_flag;
public:
  PlusAndMinusCard ();
  std::string toString();
};

#endif
