#%.o: %.cpp
#	g++ -c -o $@ $< -I../include 

time: time3.o time.o 
	g++ -o time time3.o time.o

clean:
	rm -rf *.o time a.out
