#ifndef INCLUDED_CONVERSION
#define INCLUDED_CONVERSION


class Figi{
	
	public:
		Figi(const char& figi);
		
		Figi(const Figi& figi);
		
		Figi& operator=(const Figi& figi);
	
	private:
		char d_char;

};

#endif
