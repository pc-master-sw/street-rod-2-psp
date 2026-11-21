# Street Rod 2 para PSP

Port nativo de Street Rod 2 para Sony PSP. Usa un motor C compilado para Allegrex
(MIPS), video VGA de 320 × 200, controles de PSP y audio de AdLib mediante FMOPL.
Carga las tablas y recursos de una copia DOS del juego.

1. Descargá [Street-Rod-2-PSP.zip](https://github.com/pc-master-sw/street-rod-2-psp/releases/tag/v0.1.0).
2. Seguí el [manual de instalación](docs/instalacion.md).
3. Consultá el [manual de uso](docs/uso.md) para jugar, guardar y continuar.

## Desarrollo

La [guía de compilación](docs/compilacion.md) explica cómo generar el EBOOT
mediante PSPSDK. La [validación](docs/validacion.md) detalla las pruebas
de esta primera versión.

## Créditos

- Motor C de Krzysztof Kania (kylofon). [Street Rod 2 SDL3, revisión de origen](https://github.com/kylofon/street-rod-2-sdl3/tree/3e0fc082cd3ba3cd115431fcd01f7d669e1e1456) y [licencia MIT](engine/LICENSE).
- Adaptador y runtime de DOS2PSP Native bajo [GPL-2.0 o posterior](LICENSE).
- Audio AdLib basado en el YM3812 de DOSBox PSP. [Avisos y procedencia](engine/fmopl/provenance.json).
- Juego original de California Dreams / Logical Design Works. Cada jugador aporta sus propios archivos DOS.
