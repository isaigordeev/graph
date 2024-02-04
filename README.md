# Problem Description
Let T = (V, E) be a tree where V is the set of vertices and E is the set of edges. For every vertex v ∈ V , it has a weight w(v), which is a positive integer. Denote d(u, v) as the distance between u and v in the tree, i.e., the number of edges on the unique path connecting u and v. If u = v, then d(u, v) = 0.
The task is to find two vertices x and y in the tree, such that the following expression S(x, y) is minimized:
S(x, y) = \sum_v w(v) · min{d(v, x), d(v, y)}. v∈V
Such vertices x and y are the two centers in the tree.

# Build



mkdir build

cd build

cmake ..

make