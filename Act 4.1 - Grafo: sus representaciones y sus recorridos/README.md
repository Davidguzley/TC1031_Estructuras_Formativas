# Análisis de complejidad temporal

## loadGraphMat
Al algoritmo le toma V+E pasos cargar los arcos de un grafo para posteriormente almacenarlos en una matriz de adyacencia, ya que que recibe como parametro V igual a numero de vertices y E igual a numero de arcos, por lo que su complejidad temporal es O(V+E) para el peor de los casos.

## loadGraphList
Al algoritmo le toma V+E pasos cargar los arcos de un grafo para posteriormente almacenarlos en una lista de adyacencia, ya que que recibe como parametro V igual a numero de vertices y E igual a numero de arcos, por lo que su complejidad temporal es O(V+E) para el peor de los casos.

## DFS
El algoritmo le toma V+E pasos guardar en un string una lista de nodos visitados y el path de el Recorrido DFS (Profundidad) de un grafo a partir de un nodo inicial y un nodo meta pasados como parametro de la funcion, donde V es igual al numero de vertices y E igual al numero de arcos que existen en el grafo, por lo que su complejidad temporal es O(V+E) para el peor de los casos.

## BFS
El algoritmo le toma V+E pasos guardar en un string una lista de nodos visitados y el path de el Recorrido BFS (Anchura) de un grafo a partir de un nodo inicial y un nodo meta pasados como parametro de la funcion, donde V es igual al numero de vertices y E igual al numero de arcos que existen en el grafo, por lo que su complejidad temporal es O(V+E) para el peor de los casos.
