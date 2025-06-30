all: main

CXX = clang++
override CXXFLAGS += -g -Wall -Werror

SRCS = $(shell find . -name '.ccls-cache' -type d -prune -o -type f -name '*.cpp' -print | sed -e 's/ /\\ /g')
HEADERS = $(shell find . -name '.ccls-cache' -type d -prune -o -type f -name '*.h' -print)

main: main.cpp cookie_calculator.cpp compound_interest.cpp math_tutor.cpp
	$(CXX) $(CXXFLAGS) -o main main.cpp cookie_calculator.cpp compound_interest.cpp math_tutor.cpp

test: test_calculators.cpp cookie_calculator.cpp compound_interest.cpp math_tutor.cpp
	$(CXX) $(CXXFLAGS) -o test test_calculators.cpp cookie_calculator.cpp compound_interest.cpp math_tutor.cpp

main-debug: $(SRCS) $(HEADERS)
	NIX_HARDENING_ENABLE= $(CXX) $(CXXFLAGS) -O0  $(SRCS) -o "$@"

clean:
	rm -f main main-debug test