PROBLEM_ID:=ITP2_8_A

.PHONY: all
all:  
	@g++ -std=c++11 main.cpp
	@./a.out<input.txt

debug:
	@g++ -g -O0 -std=c++11 main.cpp


submit:
	aojcli submit ${PROBLEM_ID} C++11 main.cpp

status:
	aojcli status ${PROBLEM_ID} 
