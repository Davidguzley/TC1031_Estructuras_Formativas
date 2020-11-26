# Análisis de complejidad temporal

## chain.h

### put
El algoritmo varia su complejidad, ya que utiliza condicionales para determinar la accion que se llevara acabo. Gracias a la funcion indexOf() se puede saber el indice o pocision de la llave, por lo que si el vector keys no tiene nada en esa posicion agrega la llave y el vector en sus correspondientes vectores y en caso de que no un ciclo for verificara si la llave ya existe para solo agregarle mas valores a la misma. Por lo que su complejidad temporal para el peor de los casos es O(n) o lineal ya que se debe comparar la llave con todas las llaves de la tabla hash, pero para el mejor de los casos su complejidad temporal sera O(1) o constante debido a que solo se agregaran valores a los vectores.
