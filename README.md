[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)
# Archivo . gitignore
## ¿Por que es coveniente incluir el archivo .gitignore?
El archivo **.gitignore** es útil porque permite excluir ciertos archivos y directorios del control de versiones en Git. Esto ayuda a evitar que archivos innecesarios, sensibles o específicos del entorno se suban al repositorio.

## ¿Cuando se debe hacer?
El archivo **.gitignore** debe configurarse desde el inicio del proyecto para evitar que archivos innecesarios sean rastreados por Git. Sin embargo, si un archivo ya ha sido añadido al repositorio antes de estar en _.gitignore_, se debe eliminar manualmente con **git rm --cached <archivo>**.

## ¿Como configuraria el archivo .gitignore?
El archivo **.gitignore** se configura especificando patrones de archivos y carpetas a ignorar. Ejemplos de reglas comunes:
-Ignorar archivos de sistema
.DS_Store
Thumbs.db

-Ignorar archivos de compilación
/build/
/dist/

-Ignorar dependencias
node_modules/

-Ignorar archivos sensibles
.env
config/secrets.yml

-Ignorar archivos específicos
ignorado.txt

## Regla para ignorar un archivo llamado `ignorado.txt`
Para ignorar un archivo específico llamado _ignorado.txt_, basta con agregar la siguiente línea en el _.gitignore_:
```
ignorado.txt
```
Esto evitará que Git rastree ese archivo en el repositorio.

## Respuesta del tp1_1.c
###  ¿a qué se debe?
punt contiene la direccion de memoria de x (*punt = &x), por lo tanto ambos muestran la misma direccion de memoria

### ¿Qué obtiene en el punto 4? ¿Es igual a los anteriores? ¿Por qué?
te da la dirrecion de memoria donde esta almacenada el puntero. No . El puntero _(punt)_ es otra variable (que almacena una dirección), y por lo tanto ocupa su propio espacio en memoria. 

