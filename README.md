### Improved Approximation Algorithms for k-Submodular Maximization under a Knapsack Constraint
## The source code is organized as follows:
src:
- greedy.cpp: contains experimental algorithms, including Alg1, Alg2
- Streaming.cpp: contains experimental algorithms, including DS, RS

## To build our code, run:

```
	g++ -std=c++11 *.cpp -o ksub -DIL_STD -fopenmp -g
```

## After building, to run our code, run:

```
	./ksub -f <data filename> -c <cost filename>
		-V <size of V>
		-t <type of experiment, 0: influence maximization, 1: sensor placement>
		-k <value of k>
		-B <value of B>
		-b <value of beta>
		-r <value of rho>
		-e <value of epsilon>
		-n <value of eta - denoise step for RStream>
		-g <value of gamma>
		-a <algorithm, 0: Greedy, 1: DStream, 2: RStream, 3: SGr, 4: SampleRstream. Please use SSA source code for testing IM algorithm>
		-p <number of threads (OpenMP) to running algorithms>
```

## Dependencies
- GNU `g++`, `make`
