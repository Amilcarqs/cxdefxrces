### Pasos para implementar la recursión···

- Paso 1 – Definir un caso base: Identifique el caso más simple (o base) para el cual la solución es conocida o trivial. Esta es la condición de detención de la recursión, ya que evita que la función se llame a sí misma infinitamente.

- Paso 2 – Definir un caso recursivo: Defina el problema en términos de subproblemas más pequeños. Divida el problema en versiones más pequeñas de sí mismo y llame a la función de forma recursiva para resolver cada subproblema.

- Paso 3 – Asegúrese de que la recursión finalice: Asegúrese de que la función recursiva finalmente llegue al caso base y no entre en un bucle infinito.

- Paso 4 – Combinar las soluciones: Combina las soluciones de los subproblemas para resolver el problema original.


> Tenga en cuenta que cada programa recursivo se puede escribir de forma iterativa y viceversa también es cierto.

### Ventajas de la recursión a C++
- Hace que nuestro código sea más corto y limpio.
- La recursión es necesaria en problemas relacionados con estructuras de datos y algoritmos avanzados, como Graph y Tree Traversal.
- Algunos problemas son inherentemente recursivos como recorridos por árboles, Torre de Hanoi, etc. Para tales problemas, se prefiere escribir código recursivo. También podemos escribir dichos códigos de forma iterativa con la ayuda de una estructura de datos de pila. Por ejemplo, consulte Recorrido de árbol en orden sin recursión, Torre iterativa de Hanoi.

### Desventajas de la recursión a C++
- Ocupa mucho espacio de pila en comparación con un programa iterativo.
- Utiliza más tiempo de procesador.
- Puede resultar más difícil de depurar en comparación con un programa iterativo equivalente.

## Aplicaciones comunes de la recursión
- Recorrido de árboles y gráficos: Se utiliza para explorar sistemáticamente nodos/vértices en estructuras de datos como árboles y gráficos.
- Algoritmos de ordenación: Algoritmos como quicksort y merge sort dividen los datos en submatrices, los ordenan recursivamente y los fusionan.
- Algoritmos de divide y vencerás: Algoritmos como la búsqueda binaria dividen los problemas en subproblemas más pequeños mediante recursividad.
- Generación fractal: La recursión ayuda a generar patrones fractales, como el conjunto de Mandelbrot, aplicando repetidamente una fórmula recursiva.
- Algoritmos de retroceso: Se utiliza para problemas que requieren una secuencia de decisiones, donde la recursividad explora todos los caminos y retrocesos posibles cuando es necesario.
- Memoización: Implica almacenar en caché los resultados de llamadas a funciones recursivas para evitar volver a calcular subproblemas costosos.


