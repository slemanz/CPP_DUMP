FILE_OUT = run

hello:
	g++ -Wall hello.cpp -o $(FILE_OUT)

# generates object file
hello_test:
	g++ -c -Wall hello.cpp

clean:
	rm *.out *.o