//Proyecto Unidad 3 Gualotuña_Vega
#include <conio.h>          // Incluye la biblioteca conio.h para usar la función _getch() para leer teclas sin esperar Enter.
#include <windows.h>        // Incluye la biblioteca windows.h para utilizar funciones relacionadas con el sistema operativo Windows.
#include <iostream>         // Incluye la biblioteca iostream para entrada y salida estándar.
#include <string>           // Incluye la biblioteca string para trabajar con cadenas de caracteres.
using namespace std;        // Usa el espacio de nombres estándar (std) para evitar tener que anteponer "std::" a las funciones y objetos estándar.

void muestraMenu(){         // Define una función llamada muestraMenu que no devuelve nada (void).
    printf("Menu de Opciones-Grupo\n");    // Imprime un encabezado del menú en la consola.
    printf("1. Piano \n");                    // Imprime la opción 1: Piano en la consola.
    printf("2. Sonido Guerra de las galaxias \n");  // Imprime la opción 2: Sonido Guerra de las galaxias en la consola.
    printf("3. Sonido Mario Bros \n");
    printf("4. Secreto \n");
    printf("5. Salir \n");                    // Imprime la opción 6: Salir en la consola.
}

int main() {                // Define la función principal main que devuelve un entero (int).
    int valor;              // Declara una variable entera llamada valor.

    do {                    // Inicia un bucle do-while que se ejecutará al menos una vez y continuará mientras valor no sea igual a 6.
        system("cls");      // Limpia la pantalla de la consola.
        muestraMenu();      // Llama a la función muestraMenu para mostrar el menú en la consola.
        scanf("%i", &valor);    // Lee un entero desde la entrada estándar (teclado) y lo almacena en la variable valor.

        switch (valor) {    // Inicia una estructura switch basada en el valor de la variable valor.
            case 1: {       // Caso 1: Piano
                system("cls");    // Limpia la pantalla de la consola.
                printf("Piano Virtual\n");   // Imprime un encabezado de Piano Virtual en la consola.
                printf("Presione la letra 'q' para salir\n");   // Imprime instrucciones para salir del piano.
                printf("Teclas de Control: a s d f g h j k l ;\n");    // Imprime las teclas de control del piano.

                char key;    // Declara una variable de tipo carácter llamada key para leer las teclas presionadas.
                while (true) {  // Inicia un bucle while que se ejecutará indefinidamente.
                    key = _getch();    // Lee una tecla presionada sin necesidad de presionar Enter y almacena el resultado en key.
                    if (key == 'q') {  // Comprueba si la tecla presionada es 'q'.
                        break;        // Si es 'q', sale del bucle while.
                    }
                    switch (key) {    // Inicia una estructura switch basada en el valor de la tecla presionada (key).
                        case 'a':
                            Beep(262, 100); // Produce un sonido (Beep) de 262 Hz durante 200 ms (nota C).
                            break;
                        case 's':
                            Beep(294, 200); // Produce un sonido de 294 Hz (nota D).
                            break;
                        // ... Repite los casos para otras teclas y notas musicales.
                        case 'd':
			                Beep(330, 200); // E
			                break;
			            case 'f':
			                Beep(349, 200); // F
			                break;
			            case 'g':
			                Beep(392, 200); // G
			                break;
			            case 'h':
			                Beep(440, 200); // A
			                break;
			            case 'j':
			                Beep(494, 200); // B
			                break;
			            case 'k':
			                Beep(523, 200); // C
			                break;
			            case 'l':
			                Beep(587, 200); // D
			                break;
			            case ';':
			                Beep(659, 200); // E
			                break;
                    }
                }
                break;    // Sale del switch después de que el usuario presiona 'q'.
            }
            
            case 2:
            	system("cls"); //Este comando borra la pantalla de la consola.
            	printf("Guerra de las galaxias");
				Beep(440, 500); /*  Esta línea usa la función Beep para generar un 
									tono con una frecuencia de 440 hercios (correspondiente a la nota musical A) 
									durante una duración de 500 milisegundos.*/
				//Se repitio el mismo proceso  de sonido (Beep) de X Hz durante X ms
			    Beep(440, 500); // A
			    Beep(440, 500); // A
			    Beep(349, 350); // F
			    Beep(523, 150); // C
			    Beep(440, 500); // A
			    Beep(349, 350); // F
			    Beep(523, 150); // C
			    Beep(440, 1000);// A			
			    Sleep(500);     //Esta línea pausa la ejecución del código durante 500 milisegundos (0.5 segundos).
			    Beep(659, 500); // E
			    Beep(659, 500); // E
			    Beep(659, 500); // E
			    Beep(698, 350); // F
			    Beep(523, 150); // C
			    Beep(415, 500); // G#
			    Beep(349, 350); // F
			    Beep(523, 150); // C
			    Beep(440, 1000); // A
			    system("pause");
            	break;
            case 3: //Sonido de Mario
            	system("cls"); 	//Este comando borra la pantalla de la consola.
            	printf("Super mario Bros");
				
				Beep(330, 100);
			    Sleep(100); 	//Esta línea pausa la ejecución del código durante 500 milisegundos (0.5 segundos).
			    //Se repitio el mismo proceso  de sonido (Beep) de X Hz durante X ms
				Beep(330, 100);
			    Sleep(300);		//Esta línea pausa la ejecución del código durante 500 milisegundos (0.3 segundos).
			    Beep(330, 100);
			    Sleep(300);
			    Beep(262, 100);
			    Sleep(100);
			    Beep(330, 100);
			    Sleep(300);
			    Beep(392, 100);
			    Sleep(700);
			    Beep(196, 100);
			    Sleep(700); // Sale del switch.
            	break;
            case 4: {       // Caso 2: Sonido Guerra de las galaxias
                system("cls");    // Limpia la pantalla de la consola.
                printf("Secreto");
                std::string youtube = "start https://youtu.be/dQw4w9WgXcQ";    // Crea una cadena de caracteres con un enlace a un video de YouTube.
                system(youtube.c_str());   // Ejecuta el comando para abrir el enlace en el navegador web predeterminado.
                // ... Produce una secuencia de sonidos utilizando la función Beep.
                system("pause");}    // Pausa el programa hasta que el usuario presione una tecla.
                break;    // Sale del switch después de reproducir el sonido.
			case 5:{         // Caso 5: Salir
                system("cls");    // Limpia la pantalla de la consola.
                printf("Se ha pulsado Salir\n");   // Imprime un mensaje indicando que se seleccionó la opción "Salir".
                std::string codigo = "start https://github.com/DalyOmar/PianoGProyect/blob/main/CodigoBasepiano.cpp";
				system(codigo.c_str());
				break;    // Sale del switch.
			}
            default:        // Caso por defecto (si valor no coincide con ningún caso anterior)
                printf("Esta opcion no se encuentra dentro del rango de 1 y 6 del menu de opciones\n");    // Imprime un mensaje de error.
                break;    // Sale del switch.
        }
    } while (valor != 5);    // Continúa ejecutando el bucle do-while mientras valor no sea igual a 6.

    return 0;   // Retorna 0 para indicar que el programa se ejecutó correctamente.
}
