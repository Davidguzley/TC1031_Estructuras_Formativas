#ordenaSeleccion
**Análisis de complejidad temporal**
El algoritmo ordena los numeros de un vector en orden ascendente mediante dos ciclos for que estan sujetos entre si en n pasos cada uno, buscando primmero la posicion del valor mas pequeño e intercabia
este valor con la funcion swap por el que se encuentra en la primera posicion (i) dentro de una conjunto que ya esta ordenado, para insertar cada elemento en su posicion correcta e imponer un desplazamiento
de todo el vector desde el lugar de insercion. Por la cantidad de n pasos de cada ciclo for la complejidad temporal es O(n^2) o cuadratico para el peor de los casos.

#ordenaBurbuja
**Análisis de complejidad temporal**
El algoritmo ordena los numeros de un vector en orden ascendente mediante dos ciclos for que estan sujetos entre si, buscando el valor mas grande e intercambiando su valor con la funcion swap
por el que se encuentra en la ultima posicion (j+1), repitiendo el proceso con cada uno de los valores restantes del vector excluyendo los ya acomodados.
Debido a los n pasos que le toma a cada ciclo for su complijidad es n(n+1/2) y su complejidad temporal es O(n^2) o cuadratico para el peor de los casos.

#ordenaMerge
**Análisis de complejidad temporal**
El algoritmo ordena los numeros de un vector en orden ascendente llamando la funcion margesplit, la cual situandose en mid se llamara asi misma hasta que high-low sea menor que uno,
siendo la funcion margeArray la que ordenara cada numero de cada subgrupo generado por la recursion y  mediante copyArray se guardaran en el vector temporal los numeros que se vayan ordenando
El algoritmo divide entre 2 n pasos de manera gradual y recorre n pasos para poder ordenar, por lo que su complejidad temporal es O(n log(n)) o n log(n) para el peor de los casos. 

#busqSecuencial
**Análisis de complejidad temporal**
El algoritmo busca la posicion de un numero dentro de un vector recorriendo n pasos, ya que usa un ciclo for que va de i=0 hasta n numero de elementos que hay en dicho vector,
devolviendo su numero de posicion o -1 si no se ha encontrado, por lo que su complejidad temporal es O(n) o lineal para el peor de los casos.

#busqBinaria
**Análisis de complejidad temporal**
El algoritmo busca la posicion de un numero o la posicion en donde deberia estar este en un vector ordenado en orden ascendente, para ello se situa en el mid del vector y comprueba contra el nuemro,
si el numero<v[mid] se busca entre bot y mid-1, si el numero>v[mid] se busca entre mid+1 y top, dividiendo entre 2 n pasos de manera gradual.
Por lo que su complejidad temporal es O(log(n)) o logaritmico para el peor de los casos.
