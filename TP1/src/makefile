# Nombre de la aplicación
BIN = "Tabla de conversiones"

# Archivo objeto
OBJ = tablaDeConversiones.o

# Compilador
CC = gcc

# Opciones de compilación
CFLAGS = -std=c11 -Wall -pedantic-errors -m32 -D __DEBUG__ -g3

# Bibliotecas utilizadas (si es necesario)
LDLIBS =

# Regla principal para generar el ejecutable
$(BIN): $(OBJ)
	$(CC) $(OBJ) -o $(BIN) $(CFLAGS) $(LDLIBS)

# Regla para compilar el archivo fuente en un archivo objeto
tablaDeConversiones.o: tablaDeConversiones.c conversion.h
	$(CC) -c tablaDeConversiones.c -o tablaDeConversiones.o $(CFLAGS)

.PHONY: clean
clean:
	rm -f $(OBJ) $(BIN)
