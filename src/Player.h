#ifndef Player_H
#define Player_H

#include <string>
#include <vector>
#include "cards/Card.h"

class Player {
private:
  std::string name;
  size_t money;
  std::vector<Card *> cards;
public:
	
  bool addCard(Card *);
  void printCards() const;

  void nextCard();
  void stop();
  void chooseCard();
  Player();
  ~Player();
};

#endif
