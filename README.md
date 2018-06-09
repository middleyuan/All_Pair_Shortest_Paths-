# All_Pair_Shortest_Paths-
> ## Description
> * Convert the nonzero digits of the matrix into a graph
> * Print out the shortest path of each pair of nodes and cost.
> * Each cell in the matrix contains a digit value (ranged from 0 to 9)
> * 0 represents no edge between two nodes
> * Nonzero digits represents the weights of two node

> ## Input
> * Given the number of vertices.
>   > * 2 ≦ Number of vertices ≦ 100
> * A matrix contains a digit value (ranged from 0 to 9)

> ## Output
> * Print out the shortest path with row major order and the corresponding cost for each pair.
>   > Path(from,to):from->...->...->to
>   > Cost:xxx
> * If the cost of the multiple paths are equivalent, select the one which the string of path is smaller (string comparison). 
>   > * EX: (three paths with the same cost)
>      > * path A: 1->2->3->4->5
>      > * path B: 1->3->2->4->5
>      > * path C: 1->4->5
>      > * You need to print path A.

