CC = g++
CC_FLAGS = -std=c++11 -Wall -g

EXES = helloworld sum r2 average secondlastdigit quadrantselection fibonacci \
powers lastfactorialdigit harshadnumbers palindrome.v1

OBJS = helloworld.o sum.o r2.o average.o secondlastdigit.o quadrantselection.o \
fibonacci.o powers.o lastfactorialdigit.o harshadnumbers.o palindrome.v1.o

SRCS = helloworld.cpp sum.cpp r2.cpp average.cpp secondlastdigit.cpp \
quadrantselection.cpp fibonacci.cpp powers.cpp lastfactorialdigit.cpp \
harshadnumbers.cpp palindrome.v1.cpp

all: $(EXES)

helloworld: helloworld.o
	$(CC) helloworld.o -o helloworld

helloworld.o: helloworld.cpp
	$(CC) -c helloworld.cpp $(CC_FLAGS)

sum: sum.o
	$(CC) sum.o -o sum

sum.o: sum.cpp
	$(CC) -c sum.cpp $(CC_FLAGS)

r2: r2.o
	$(CC) r2.o -o r2

r2.o: r2.cpp
	$(CC) -c r2.cpp $(CC_FLAGS)

average: average.o
	$(CC) average.o -o average

average.o: average.cpp
	$(CC) -c average.cpp $(CC_FLAGS)

secondlastdigit: secondlastdigit.o
	$(CC) secondlastdigit.o -o secondlastdigit

secondlastdigit.o: secondlastdigit.cpp
	$(CC) -c secondlastdigit.cpp $(CC_FLAGS)

quadrantselection: quadrantselection.o
	$(CC) quadrantselection.o -o quadrantselection

quadrantselection.o: quadrantselection.cpp
	$(CC) -c quadrantselection.cpp $(CC_FLAGS)

fibonacci: fibonacci.o
	$(CC) fibonacci.o -o fibonacci

fibonacci.o: fibonacci.cpp
	$(CC) -c fibonacci.cpp $(CC_FLAGS)

powers: powers.o
	$(CC) powers.o -o powers

powers.o: powers.cpp
	$(CC) -c powers.cpp $(CC_FLAGS)

lastfactorialdigit: lastfactorialdigit.o
	$(CC) lastfactorialdigit.o -o lastfactorialdigit

lastfactorialdigit.o: lastfactorialdigit.cpp
	$(CC) -c lastfactorialdigit.cpp $(CC_FLAGS)

harshadnumbers: harshadnumbers.o
	$(CC) harshadnumbers.o -o harshadnumbers

harshadnumbers.o: harshadnumbers.cpp
	$(CC) -c harshadnumbers.cpp $(CC_FLAGS)

palindrome.v1: palindrome.v1.o
	$(CC) palindrome.v1.o -o palindrome.v1

palindrome.v1.o: palindrome.v1.cpp
	$(CC) -c palindrome.v1.cpp $(CC_FLAGS)

clean:
	rm -f $(EXES) $(OBJS)