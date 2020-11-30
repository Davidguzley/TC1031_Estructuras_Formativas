# Análisis de complejidad temporal

## chain.h
### put
Gracias a la funcion indexOf() se puede saber el indice o pocision de la llave. A partir de ello lo que se hace es agregar la llave y el valor pasados como parametro de la funcion sin importar si el espacio esta ocupado, ya que lo encadenara gracias al uso de vectores. Por lo que su complejidad temporal para el peor de los casos segun la literatura es O(n) o lineal, pero solo en caso de que la tabla hash se encuentra saturada, pero para la mayoria de los casos su complejidad temporal es O(1) o constante, debido a que solo se agregaran valores y llaves a los vectores.

## quadratic.h
### put
Gracias a la funcion indexOf() se puede saber el indice o pocision de la llave. A partir de ello lo que se hace es agregar la llave y el valor pasados como parametro de la funcion, y en caso de colision se movera cuadraticamente a la siguiente posicion. Por lo que su complejidad temporal para el peor de los casos segun la literatura es O(n) o lineal, pero solo en caso de que la tabla hash se encuentra saturada, pero para la mayoria de los casos su complejidad temporal es O(1) o constante, debido a que solo se agregaran valores y llaves a los indices de la tabla.
