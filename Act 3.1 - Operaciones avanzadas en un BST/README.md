# Análisis de complejidad temporal

## visit
El algoritmo recorre n pasos, ya solo ordena los datos dentro de un string con los cuatro recorridos de las funciones preorder(), postorder(), inorder() y levelorder() separados por un salto de linea. Cada funcion utiliza recursion implementada mediante ifs para recorrer todos los elementos del arbol sin utilizar algun tipo de ciclo for o while, por lo que su complejidad temporal es O(n) o lineal para el peor de los casos.

## height
El algoritmo recorre n pasos, ya que accede a cada una de las ramas del arbol (izquierdas, derechas) mediante recursion implementada con ifs, sumando 1 en cada nivel y cada lado en el que se encuentre del arbol (leftLevel,rightLevel), hallando el nivel mas alto es como se obtiene la altura del arbol.
Debido a la anterior su complejidad tenporal es O(n) o lineal para el peor de los casos.

## ancestors
El algoritmo recorre n pasos, ya que recibe como parametro un valor del arbol valido, el cual mediante recursion implementada con ifs accedera al arbol para encontrar todos los nodos que esten arriba del que fue pasaddo como parametro hasta llegar a la raiz y desplegara cada uno de ellos dentro de un string, por lo que su comlejidad temporal es O(n) o lineal para el peor de los casos.

## whatlevelamI
El algoritmo busca el nivel en el que se encuentra un dato dentro de un arbol recorriendo n pasos, ya que usa recursion implementada mediante ifs que recorren el arbol para devolver su nivel o en caso de que no encontralo devolver -1, por lo que su complejidad temporal es O(n) o lineal para el peor de los casos.
