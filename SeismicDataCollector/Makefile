all: Driver.o SeismicDataCollector.o SeismicEvent.o AcousticNoise.o AnthropogenicEvent.o EarthQuake.o Explosion.o MiningExplosion.o QuarryBlast.o
	g++ -Wall Driver.o SeismicDataCollector.o SeismicEvent.o AcousticNoise.o AnthropogenicEvent.o EarthQuake.o Explosion.o MiningExplosion.o QuarryBlast.o -o driver.out

SeismicDataCollector.o: SeismicDataCollector.cpp
	g++ -Wall -c SeismicDataCollector.cpp

SeismicEvent.o: SeismicEvent.cpp
	g++ -Wall -c SeismicEvent.cpp

AcousticNoise.o: AcousticNoise.cpp
	g++ -Wall -c AcousticNoise.cpp

AnthropogenicEvent.o: AnthropogenicEvent.cpp
	g++ -Wall -c AnthropogenicEvent.cpp

EarthQuake.o: EarthQuake.cpp
	g++ -Wall -c EarthQuake.cpp

Explosion.o: Explosion.cpp
	g++ -Wall -c Explosion.cpp

MiningExplosion.o: MiningExplosion.cpp
	g++ -Wall -c MiningExplosion.cpp

QuarryBlast.o: QuarryBlast.cpp
	g++ -Wall -c QuarryBlast.cpp

Driver.o: Driver.cpp
	g++ -Wall -c Driver.cpp

clean:
	rm -rf *.o
	rm -f *.out
	rm -f *~*.h.gch*#
 

run:
	./driver.out $(FILE)