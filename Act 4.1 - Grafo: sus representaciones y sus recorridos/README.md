# Análisis de complejidad temporal

## loadGraphMat
El algoritmo le toma n pasos agregar un dato al splay tree debido a que utiliza dos funciones cuando el arbol no se encuentra vacio, la primera conecta el valor pasado como parametro de la funcion principal al arbol para pocisicionarlo en su debido sitio y la segunda (splay()) ordena el arbol con el nuevo valor como su raiz para que los demas valores se comparen en base a este, por lo que su complejidad temporal es O(n) o lineal para el peor de los casos.

## loadGraphList
El algoritmo recorre n pasos para eliminar un dato del splay tree, debido a que emplea una serie de ifs para remover el valor pasado como parametro de la funcion poniendolo en la pocision de la raiz y removiendolo, para posteriormente poner como nueva raiz su sucesor, por lo que su complejidad temporal es O(n) o lineal para el peor de los casos.

## DFS
El algoritmo recorre n pasos para encontrar un valor entero pasado como parametro de la funcion y devolver un boleeano que representa si el dato se encontro o no, debido a que emplea ifs de manera recursiva, si este es encontrado pasara a ser la nueva raiz y mediante una funcion (splay()) se ordenara el arbol en base al valor encontrado, por lo que su complejidad temporal es O(n) o lineal para el peor de los casos.

## BFS
El algoritmo recorre n pasos para desplegar en inrorder el contenido del Splay Tree en un string, debido a que emplea ifs de manera recursiva hasta haber recorrrido y almacendo todo el contenido del arbol, por lo que su complejidad temporal es O(n) o lineal para el peor de los casos.
