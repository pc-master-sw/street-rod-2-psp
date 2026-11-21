# Compilar Street Rod 2 para PSP

En Linux o WSL, instalá PSPSDK y agregá sus binarios al `PATH`.
Desde la raíz del repositorio, ejecutá `make psp`. El binario queda
en `.build/psp/EBOOT.PBP`. Las fuentes de `engine/` incluyen los
cambios de portabilidad aplicados a la revisión indicada en el
[README](../README.md).

El ZIP publicado incluye las mismas fuentes y una receta de compilación
en `source/BUILD.txt`. El EBOOT de v0.1.0 tiene SHA-256 `b9cd69c2a11fa6f9e860c2470c62874b1ccbf2ea4e1121ad67ff01796e363779`.
