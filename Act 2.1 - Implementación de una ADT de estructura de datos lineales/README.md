# add
### Análisis de complejidad temporal
El algoritmo recorre n pasos, ya que usa un ciclo while que recorrera los n elementos de la lista hasta llegar a su ultima posicion
y añadira el elemento pasado como parametro de la funcion en la lista,
ademas en el caso de contar con una lista vacia la funcion addFirst añadira este valor comp primer elemento de la lista,
por lo que su complejidad temporal es O(n) o lineal para el peor de los casos debido a la compejidad O(n) del ciclo y la complejidad O(1) de la funcion addFirst.

# remove
### Análisis de complejidad temporal
El algoritmo recorre n pasos, ya que recibe como parametro un valor entero como indice, el cual es buscado mediante un while que recorre la lista hasta hallar su posicion dentro de la lista,
se remuve el elemento contenido en esa posicion y se acomoda la lista.
La funcion removeFirst es utilizada en caso de que el indice sea cero, se remuve el primer elemento contenido en la lista o se arroja un aviso en caso de estar ya vacia.
Con esto podemos decir qu la complejidad temporal del algoritmo es O(n) o lineal para el peor de los casos debido a la complejidad O(n) del ciclo y la complejidad O(1) de la funcion removeFirst.

# update
### Análisis de complejidad temporal
El algoritmo recorre n pasos, ya que recibe como parametro un indice y un valor, este indice es buscado mediante un while que recorre la lista hasta hallar su posicion dentro de la lista,
se actualiza el elemento contenido en esa posicion por el valor pasado como parametro de la funcion,
por lo que su complejidad temporal es O(n) o lineal para el peor de los casos debido a que solo se recorre n elementos de la lista.

# find
### Análisis de complejidad temporal
El algoritmo busca la posicion de un numero dentro de una lista recorriendo n pasos, ya que usa un ciclo while que que recorre la lista hasta hallar su posicion,
devolviendo su numero de posicion o -1 si no se ha encontrado, por lo que su complejidad temporal es O(n) o lineal para el peor de los casos debido a que solo se recorre n elementos de la lista.
