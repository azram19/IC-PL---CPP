vehicleMain: dieselCar.o petrolCar.o lorry.o bus.o date.o ChargingBeast.o printingParrot.o tree.o map.o Map.o vehicle.o
	g++ -O2 -g dieselCar.o petrolCar.o lorry.o bus.o date.o ChargingBeast.o printingParrot.o tree.o map.o Map.o vehicle.o -o main

dieselCar.o: dieselCar.cpp dieselCar.hpp
	g++ -O2 -g -c dieselCar.cpp

petrolCar.o: petrolCar.cpp petrolCar.hpp
	g++ -O2 -g -c petrolCar.cpp

lorry.o: lorry.cpp lorry.hpp
	g++ -O2 -g -c lorry.cpp

bus.o: bus.cpp bus.hpp
	g++ -O2 -g -c bus.cpp

date.o: date.cpp date.hpp
	g++ -O2 -g -c date.cpp

ChargingBeast.o: ChargingBeast.cpp ChargingBeast.hpp
	g++ -O2 -g -c ChargingBeast.cpp

printingParrot.o: printingParrot.cpp printingParrot.hpp
	g++ -O2 -g -c printingParrot.cpp

tree.o: tree.cpp tree.hpp
	g++ -O2 -g -c tree.cpp

map.o: map.cpp map.hpp
	g++ -O2 -g -c map.cpp

Map.o: Map.cpp Map.hpp
	g++ -O2 -g -c Map.cpp

vehicle.o: vehicle.cpp vehicle.hpp
	g++ -O2 -g -c vehicle.cpp
