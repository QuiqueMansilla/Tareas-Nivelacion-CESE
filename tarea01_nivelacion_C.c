/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*Claculo de depreciacion por tres metodos diferentes*/

#include <stdio.h>
#include <stdint.h>

void main()
{
    //printf("Hello World");
    /*Definicion de variables locales-ambito en funcion main*/
    int n = 0; /*n = n° de años por los que se deprecia el objeto*/

    int anual = 0; /*anual = contador que tomara valores de 1 a n*/

    int eleccion = 0;/*eleccion = selecciona el metodo de depreciacion a usar en el calculo*/

    float val, aux, deprec; /*val = valor original del objeto / aux = valor actual del objeto*/
    
    /*Comienzo del ciclo while que resuelve el objetivo del programa*/
    
    while (eleccion != 4)
    {
        /*Lee los datos de entrada*/
        printf("Métodos de depreciación disponibles:\n1-LR: Línea Recta\n2-BD: Balance Doble Declinante\n3-SDA: Suma Digitos Años\n\n");
        
        printf("\nSeleccione metodo de depreciación:\t (1-LR \t2-BD \t3-SDA \t4-Fin) ");
        
        printf("\nMétodo: ");
        
        scanf ("%2d", &eleccion); /*Lee el contenido de la direccion de la varable eleccion*/
        
        //printf("\nEl método seleccionado es:%2d, \n\n");
        /*Si se selecciona un metodo valido carga valores de valor original del objeto y años de depreciación*/
        if(eleccion >= 1 && eleccion <=3)
        {
            printf("\nValor original del objeto: ");
            
            scanf("%f",&val);
            
            printf("Numero de años: ");
            
            scanf("%d",&n);
        }
        
        /*Procesa el metodo seleccionado direvando a la rutina que resuelve el mismo*/
        switch(eleccion)
        {
            case 1: /*Desarrollo Metodo de la Linea Recta*/
            
            printf("\nMetodo de la linea recta\n\n");
            
            deprec = val / n;
            
            for (anual = 1; anual <= n; ++anual) 
            {
                val -= deprec;
                
                printf("Fin de año %2d", anual);
                
                printf(" - Depreciacion: %7.2f", deprec);
                
                printf(" - Valor actual: %8.2f\n", val);
                
            }
            
            break;
            
            case 2: /*Desarrollo del Metodo de balance Doblemente Declinante*/
            
            printf("\nMetodo de balance doblemente declinante\n\n");
                
            for (anual = 1; anual <= n; ++anual) 
            {
                deprec = 2*val/n;
                    
                val -= deprec;
                    
                printf("Fin de año %2d", anual);
            
                printf(" - Depreciacion: %7.2f", deprec);
                    
            printf(" - Valor actual: %8.2f\n", val);
            }
            break;
            
            case 3: /*Desarrolo del Metodo de la suma de los digitos*/
            
            printf("\nMetodo de la suma de los digitos");
            
            printf("de los años\n\n");
            
            aux = val;
            
            for (anual = 1; anual <= n; ++anual) 
            {
                deprec = (n-anual+1)*aux / (n*(n+1)/2);
                
                val -= deprec;
                
                printf("Fin de año %2d", anual);
                
                printf(" - Depreciacion: %7.2f", deprec);
                
                printf(" - Valor actual: %8.2f\n", val);
            }
             
            break;
            
            case 4: /*Opción para finalizar el programa*/
            
            printf("\nFin del programa, que tenga un buen dia\n");
            
            break;
            
            default:/*Opcio si la entrada no toma un valor válido(0, 1, 2, 3, 4)*/
            
            printf("\nEntrada de datos incorrecta");
            
            printf(" - Repita entrada por favor\n");
            
        } /*Fin de switch*/
        
    }/*Fin del while*/

    //return 0; Como la funcion main es de tipo "void" no es necesario usar return al final ya que no devuelve nada
}/*Fin del código*/

