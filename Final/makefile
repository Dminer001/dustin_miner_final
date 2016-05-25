titantest: titan.o CinReader.o
	g++ -Wall -g -o titantest titan.o CinReader.o
	
saturntest: saturn.o CinReader.o rocketship.o
	g++ -Wall -g -o saturntest rocketship.o saturn.o CinReader.o
	
juspitertest: jupiter.o CinReader.o rocketship.o
	g++ -Wall -g -o juspitertest rocketship.o jupiter.o CinReader.o
	
marstest: mars.o CinReader.o specialrocketship.o
	g++ -Wall -g -o marstest specialrocketship.o mars.o CinReader.o rocketship.o
	
earthtest: earth.o	CinReader.o activator.o
	g++ -Wall -g -o earthtest activator.o earth.o CinReader.o

megaweapon: megaweapon.o CinReader.o
	g++ -Wall -g -o megaweapon megaweapon.o CinReader.o
	
rocket: rocketship.cpp rocketship.h
	g++ -Wall -g -c rocket rocketship.cpp
	
specialRocket: specialrocketship.cpp specialrocketship.h
	g++ -Wall -g -c specialRocket specialrocketship.cpp
	
activator: activator.cpp activator.h
	g++ -Wall -g -c activator activator.cpp
	
clean:
	rm titantest saturntest