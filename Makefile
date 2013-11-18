vm:
	find ./src -name "*.cc" | xargs g++ -pedantic -Wall -Werror -o ./bin/vm -I ./src
