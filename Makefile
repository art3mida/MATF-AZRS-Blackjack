TARGET = blackjack
CXX = gcc
CXXFLAGS = -Wall -Wextra -std=c99

$(TARGET): main.c
	$(CXX) $(CXXFLAGS) -o $@ $^

.PHONY: clean

clean:
	rm -r $(TARGET) *.o