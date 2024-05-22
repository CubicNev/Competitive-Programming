# Ejemplo: Sumar números del 1 al n

| Constructs | Value |
| :---: | :---: |
| Time limit per test | S seconds |
| Memory limit per test | B Megabytes |
| input | standard input |
| output | standard output |

Realiza un programa que según se ingrese un número **n**, haga la suma de 1 hasta el número ingresado.

## Entradas

Cada caso de prueba contiene el número n hasta dónde se hará la suma. La primera contiene el número de casos de prueba (*test cases*) **t**, donde, $ t : (1 \leq t \leq 100) $. Sigue la descripción de cada caso de prueba.

Un caso de pruebas consiste en una sola línea, conteniendo un entero **n**, *i.e.* $ n : (1 \leq n \leq 10^{12}) $

## Salidas

Por cada caso de prueba imprime una respuesta en una línea separada.

## Ejemplo

Entrada:

```text
4
10
100
200
1000000
````

Salida:

```text
45
4950
19900
704982704
```

## Notas

En el primer caso la suma $1+2+3+4+5+7+8+9+10$ es igual a 45

En el segundo caso la suma $1+2+3+...+99+100$ es 4,950

En el tercer caso $1+2+3+...+200 = 19,900$

En el cuarto caso $1+2+3+...+1000000 = 704,982,704$

## Solución

Se usa la suma gaussiana.

$$
\displaystyle\sum_{i=1}^{n} t_i = \frac{n(n-1)}{2}
$$

### Observaciones

- La suma de uno a uno es muy tardada.
- **n** tiene valor máximo de $10^{12}$ (Un trillón, ver [notación](./../../Theory/Notación%20Cientifíca.md)), por lo que se tiene que ocupar un entero que pueda almacenar esa cantidad. El `unsigned int`solo guarda hasta 4 millones (aproximadamente), necesitamos usar `unsigned long long` ya que nos permite llegar aproximadamente a $1.8\times10^{16}$ (más de un cuatrillón)
