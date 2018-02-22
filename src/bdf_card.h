#ifndef _CNASTRAN__CARDS_BDFCARD_H_
#define _CNASTRAN__CARDS_BDFCARD_H_

#include <fstream> // std::ostream


class BDFCard {
	public:
		int data;
	public:
		BDFCard() {
			this->data = 1;
		}
		void write(std::ostream &out) {};
};


#endif // !_CNASTRAN__CARDS_BDFCARD_H_
