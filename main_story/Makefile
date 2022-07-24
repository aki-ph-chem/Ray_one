CXX = g++

INCLUDE = ./include

f = main

${f}.out : ${f}.cpp     
	${CXX} $< -I ${INCLUDE} -o $@

run:
	./${f}.out > image.ppm

clean:
	rm *.out

.PHONY: clean run
