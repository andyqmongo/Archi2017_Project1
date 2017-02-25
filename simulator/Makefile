CC = g++ -std=c++11 -w

RO_SRCS = ./*.cpp

single_cycle: RO
	$(CC) -o $@ *.o

RO: $(RO_SRCS)
	$(CC) -c $(RO_SRCS)

.PHONY: clean
clean:
	rm -f single_cycle *.o
