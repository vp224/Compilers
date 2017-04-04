tinyc: lex.yy.c y.tab.c y.tab.h ass6_14CS30031_target_translator.h ass6_14CS30031_target_translator.cxx libmyl.a
	g++ lex.yy.c y.tab.c ass6_14CS30031_target_translator.cxx -lfl -o tinyc
	# Usage: tinyc <file> <executable_name>
	# Or simply "make run" to make executables for all 5 test files

y.tab.h: ass6_14CS30031.y
	yacc -dtv ass6_14CS30031.y 
y.tab.c: ass6_14CS30031.y
	yacc -dtv ass6_14CS30031.y 
lex.yy.c: ass6_14CS30031.l y.tab.h
	flex ass6_14CS30031.l

libmyl.a: myl.o
	ar -rcs libmyl.a myl.o

myl.o: myl.c myl.h
	gcc -Wall -c myl.c

clean:  
	rm tinyc y.tab.h y.tab.c lex.yy.c y.output test0 test1 test2 test3 test4 test0.s test1.s test2.s test3.s test4.s myl.o libmyl.a
run:
	# genereating code for test file 0
	./tinyc < ass6_14CS30031_test0.c  test0
	./tinyc < ass6_14CS30031_test1.c  test1
	./tinyc < ass6_14CS30031_test2.c  test2
	./tinyc < ass6_14CS30031_test3.c  test3
	./tinyc < ass6_14CS30031_test4.c  test4

    
    
