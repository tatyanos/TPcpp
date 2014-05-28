#include "PlusOrMinusCard.h"

std::string PlusOrMinusCard::toString() {
	return (price < 0 ? "-" : "+") + convertToString(price);
}
