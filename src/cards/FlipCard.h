#ifndef FlipCard_H
#define FlipCard_H

#include "Card.h"

class FlipCard : public Card {
private:
  size_t value1;
  size_t value2;
public:
  FlipCard ();
private:
  int cardAction ();
};

#endif
