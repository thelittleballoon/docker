#include <iostream>
#include <memory>
#include <utility>


class Car{

};

int getCar(std::unique_ptr<Car> car_sp){

	return 5008;

}

int main(){

	std::unique_ptr<Car> _5008(new Car);
	std::cout << _5008.get() << std::endl;
//	int model = getCar(_5008);

//	std::unique_ptr<Car> copy = _5008;

//	std::unique_ptr<Car> copy1 = Car(_5008);

	std::unique_ptr<Car> newCar(std::move(_5008));
	std::cout << _5008.get() << static_cast<bool>(_5008.get()) << _5008.get()==false  << std::endl;
	std::cout << newCar.get() << std::endl;
}
