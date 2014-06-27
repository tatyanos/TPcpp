#ifndef CARD_H
#define CARD_H
class Card
{
public:
	Card();
	
	virtual int getPrice() = 0;
	virtual Card *extract(const int &) = 0;
	virtual void add(Card *) = 0;
	virtual Card *get(const int &) = 0;
	virtual void print() = 0;

	~Card(void);
};

#endif

