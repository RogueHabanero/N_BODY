build:
	gcc -std=c11 ./src/*.c -o n_body.out -lraylib # -lopengl32 -lgdi32
	./n_body.out

debug:
	gcc -std=c11 -g ./src/*.c -o n_body.out -lraylib # -lopengl32 -lgdi32
	gdb ./n_body.out

clean:
	rm ./n_body.out
help:
	@echo "This make file supports the following commands:"
	@echo "'build' - the default command to compile the program"
	@echo "'debug' - compiles the program with the -g flag and runs the gdb-dedugger"
	@echo "'clean' - removes the binary executable file"
