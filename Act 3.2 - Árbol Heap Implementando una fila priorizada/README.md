# Análisis de complejidad temporal

## push
El algoritmo recibe como parametro un valor T para ser agregado a la fila priorizada, haciendo uso de un ciclo while cada valor que se quiera insertar sera de izquierda a derecha y por niveles en el arbol, checando que el hijo siempre sean mas chico que su padre, por lo que su complejidad temporal es O(log n), es decir, logaritmica, para el peor de los casos.

## pop
El algoritmo remueve la raiz del arbol data[0] y
ordena de nuevo el arbol con el uso de heapify() para signar sus respectivos hijos a cada valor, por lo que su complejidad temporal es O(log n) o logaritmica para el peor
de los casos por el uso de esta funcion, pero si solo se removiera el elemento entonces estariamos hablando que su complejidad seria de O(1) o constante para el peor de los casos porque siempre removeria el valor de dicha posicion.

## top
El algoritmo únicamente obtiene del arreglo data su primer valor el cual es la raíz del árbol, como estas instruccion siempre es la misma para todos los casos su complejidad temporal es O(1) o constante para el peor de los casos.

## empty
El algoritmo simplemente checa si el atributo count es igual a cero, entonces develve un valor boleano que dice si la fila priorizada esta vacía o tiene datos, por lo tanto como siempre solo se va ha checar este atributo su
complejidad temporal es O(1) o constante para el peor de los casos.

## size
El algoritmo solamente devuelve el valor del atributo count la cual contiene la cantidad actual de datos almacenados, por lo que al ser siempre una simple consulta de una variable
su copomplejidad temporal es O(1) o constante para el peor de los casos.
