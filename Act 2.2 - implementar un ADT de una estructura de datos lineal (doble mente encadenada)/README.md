# add
### Análisis de complejidad temporal
El algoritmo simplemente verfica con un if si la lista esta vacia o no, si esta vacia dentro del if se añade el valor pasado como paramatro de la funcion y se le asigna el head y el tail,
en caso de contar con elementos en la lista dentro de un else se acomodara el valor pasado como parametro de la funcion al final de la lista, respetando la estructura de la misma.
Por lo tanto su complejidad temporal es O(1) o dicho de otro modo constante para el peor de los casos, puesto que solo le siempre los mismos pasos al algoritmo añadir un elemento a la lista.

# remove
### Análisis de complejidad temporal
El algoritmo recorre n pasos, ya que recibe como parametro un valor entero de indice, el cual es buscado mediante un while que recorre la lista hasta hallar su posicion dentro de la lista,
se remueve el elemento de la lista en base en donde se encuentre el indice, es decir si esta en una posicion de en medio o al final de la lista y se acomodan los demas.
La funcion removeFirst es utilizada en caso de que el indice sea cero, arroja un aviso en caso de estar ya vacia, si el head y el tail son iguales entonces la lista se vulve vacia y si no entonces se remueve el primer elemento de la lista y se acomodan los demas.
Con esto podemos decir qu la complejidad temporal del algoritmo es O(n) o lineal para el peor de los casos debido a la complejidad O(n) del ciclo while y la complejidad O(1) de la funcion removeFirst.

# update
### Análisis de complejidad temporal
El algoritmo recorre n pasos, ya que recibe como parametro un indice y un valor, este indice es buscado mediante un while que recorre la lista hasta hallar su posicion dentro de la lista,
se actualiza el elemento contenido en esa posicion por el valor pasado como parametro de la funcion,
por lo que su complejidad temporal es O(n) o lineal para el peor de los casos debido a que solo se recorre n elementos de la lista.

# find
### Análisis de complejidad temporal
El algoritmo busca la posicion de un numero dentro de una lista recorriendo n pasos, ya que usa un ciclo while que que recorre la lista hasta hallar su posicion,
devolviendo su numero de posicion o -1 si no se ha encontrado, por lo que su complejidad temporal es O(n) o lineal para el peor de los casos debido a que solo se recorre n elementos de la lista.
