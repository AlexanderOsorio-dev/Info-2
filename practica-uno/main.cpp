#include <iostream>
#include <cctype>
using namespace std;

int devolverResiduo( int numero1, int numero2){
    return numero1%numero2;
}
int imprimirNumeroMayor(int numero1, int numero2){
    if(numero1 > numero2){
        std::cout<<"El mayor es: "<<numero1;
    }
    if(numero2 > numero1){
        std::cout<<"El mayor es: "<<numero2;
    }
    else{
        std::cout<<numero1<<" y "<<numero2<<" son iguales";
    }
    return 0;
}

float redondearDivision(float numero1, float numero2){
    
    return numero1/numero2;
}

int sumatoriaHastaN(int n){
    int sumatoria = 0;
    for(int sumando = 0; sumando <= n; sumando++){
        sumatoria += sumando;
    }
    return sumatoria;
}

float perimetroYAreaCirculoRadioN( float radio){
    float pi =  3.1416;
    float perimetro = (2*pi)*radio;
    float area = pi*(radio*radio);
    std::cout<<"El perimetro del circulo con radio "<<radio<<" es: "<<perimetro<<endl;
    std::cout<<"El area del circulo con radio "<<radio<<" es: "<<area;
    return perimetro, area;
}

int tablaDeMultiplicarDeN( int n){
    for(int multiplo = 1; multiplo <= 10; multiplo++){
        std::cout<<multiplo<<"x"<<n<<" = "<<multiplo*n<<endl;
    }
    return 0;
}

int imprimirDivisoresDeN( int n){
    std::cout<<"Los divisores de "<<n<<" son: ";
    for(int divisor = 1; divisor <= n; divisor++){
        if(n%divisor == 0){
            std::cout<<divisor<<endl;
        }
    }
    return 0;
}

int sumatoriaParadaEnCero(){
    int sumatoria = 0;
    int numero;
    std::cout<<"Ingrese un numero: ";
    std::cin>>numero;
    while(numero != 0){
        sumatoria += numero;
        std::cout<<"Ingrese un numero: ";
        std::cin>>numero;
    }
    std::cout<<"La sumatoria es: "<<sumatoria;
    return sumatoria;
}

int imprimirMayor(){
    int mayor;
    int numero;
    std::cout<<"Ingrese un numero: ";
    std::cin>>numero;
    mayor = numero;
    while(numero != 0){
        std::cout<<"Ingrese un numero: ";
        std::cin>>numero;
        if(numero > mayor){
            mayor = numero;
        }
    }
    std::cout<<"El numero mayor fue: "<<mayor;
    return mayor;
}

char convertirUpperLower(char letra){
    if(!isalpha(letra)){
        std::cout<<"no es una letra... ";
        return 0;
    }
    if(toupper(letra) == letra){
        char letraConvertida = tolower(letra);
        std::cout<<"letra convertida: "<<letraConvertida;
    }
    else{
        char letraConvertida = toupper(letra);
        std::cout<<"letra convertida: "<<letraConvertida;
    }
    return 0;
}
int cantidadDigitos(int numero){
    int digito = 0;
    int numeroOriginal = numero;
    while( numero >=1){
        numero /= 10;
        digito++;
    }
    std::cout<<numeroOriginal<<" tiene "<<digito<<" digitos";
    return 0;
}
int calculadora(){
    float numero1;
    float numero2;
    char operacion;
    std::cout<<"Ingrese el primer numero: "<<endl;
    std::cin>>numero1;
    std::cout<<"Ingrese la operacion a realizar: "<<endl;
    std::cin>>operacion;
    std::cout<<"Ingrese el segundo numero: ";
    std::cin>>numero2;
    
    switch(operacion){
        case '+':
            std::cout<<numero1<<'+'<<numero2<<'='<<numero1+numero2;
            break;
        case '-':
            std::cout<<numero1<<'-'<<numero2<<'='<<numero1-numero2;
            break;
        case '*':
            std::cout<<numero1<<'*'<<numero2<<'='<<numero1*numero2;
            break;
        case '/':
            std::cout<<numero1<<'/'<<numero2<<'='<<numero1/numero2;
            break;
        default:
            std::cout<<"La operacion no es correcta...";
            break;
    }
    return 0;
}


bool comprobarSiEsConsonante(char letter)
    {
        return isalpha(letter);
    }
bool verificarDiasDelMes(int monthNumber){
    switch(monthNumber){
        case 4: return true;
            break;
        case 6: return true;
            break;
        case 9: return true;
            break;
        case 11: return true;
            break;
        default: return false;
    }
}
 bool verificarMes(int monthNum){
     if(monthNum >=1 && monthNum <=12){
         return true;
     }
     else{
         return false;
     }
 }
bool verificarNumeroPrimo(int numero){
    int mitadNumero = (numero-1)/2;
    if(numero == 2){
        return true;
    }
    if(numero%2 == 0){
        return false;
    }
    if(numero <= 1){
        return false;
    }
    for(mitadNumero; mitadNumero > 1; mitadNumero--){
        if(numero%mitadNumero == 0 && mitadNumero != 1 && mitadNumero > 1){
            return false;}
        if(numero%mitadNumero == 0 && mitadNumero != 1){
            return false;}
        if(mitadNumero == 1){
        return true;
        }
    }
    return 0;
    }
    
    int calcularMCD(int a, int b){
            while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;}
        
        if(a == b){
            return a;
        }
    return a;
    }

int calcularDivisores(int numero){
    int mitadNumero;
    if(numero%2 == 0){
        mitadNumero = numero/2;
    }
    else{
        mitadNumero = (numero-1)/2;
    }
    
    int divisores = 1;
    for(mitadNumero; mitadNumero >= 1; mitadNumero--){
        if(numero%mitadNumero == 0){
            divisores++;
        }
    }
    return divisores;
    }
    
int elevarNumeroAsiMismo(int numero){
    if(numero == 2){
        return numero*numero;
    }
    if(numero == 1){
        return 1;
    }
    int potencia = numero*numero;
    for(int iteracion = 2; iteracion <numero;iteracion++){
        potencia *= numero;
    }
    return potencia;
}


int main()
{  
    /*Problema 1, identificar si un caracter es vocal o consonante */
    
    /*
    char letra;
    std::cout<<"Ingrese una letra para verificar si es una vocal o consonante: ";
    std::cin>>letra;
    letra = tolower(letra);

    switch(letra){
        case 'a': std::cout<<"Es una vocal";
            break;
        case 'e': std::cout<<"Es una vocal";
            break;
        case 'i': std::cout<<"Es una vocal";
            break;
        case 'o': std::cout<<"Es una vocal";
            break;
        case 'u': std::cout<<"Es una vocal";
            break;
        default: if(comprobarSiEsConsonante(letra)){
            std::cout<<"Es una consonante";
        }
            else{
                std::cout<<"No es una letra del alfabeto";
            }
        }
        */
    
    /*Problema 3, Se lee un mes y dia del año y se verifica si es una fecha posible*/
    
    /*
    int month;
    int day;
    
    std::cout<<"Ingrese el dia en numero que desea verificar: ";
    std::cin>>day;
    std::cout<<"Ingrese el mes en numero que desea verificar: ";
    std::cin>>month;
    
    if(month == 2 && day == 29){
        std::cout<<"Posible para año bisiesto, ";
    }
    
    
    if(verificarMes)
    {
        if(verificarDiasDelMes(month))
        {
            if(day >=1 && day <=30)
            {
                std::cout<<day<<"/"<<month<<" es una fecha valida";
            }
            else{
                std::cout<<day<<"/"<<month<<" es una fecha invalida";
            }
            
        }
        else
            {
               if(day >=1 && day <=31)
               {
                    std::cout<<day<<"/"<<month<<" es una fecha valida";
                }
    }
    }
    else
    {
        std::cout<<day<<"/"<<month<<" no es una fecha valida";
    }
    
    */

    /*Problema 5, crear figura a partir de un numero impar */
    
    /*
    int numeroTamaño;
    std::cout<<"Ingrese un numero impar para indicar el tamaño del rombo: ";
    std::cin>>numeroTamaño;
    while(numeroTamaño%2 == 0){
        std::cout<<"Ese no es un numero impar, ingrese otro de nuevo: ";
        std:cin>>numeroTamaño;
    }
    bool primeraParte = true;
    int contadorAsteriscos = 1;
    int contadorEspacios = (numeroTamaño -1)/2;
    for(int lineas = 0; lineas < numeroTamaño; lineas++){
        
        if(primeraParte){
        
        for(int espacios = 0; espacios < contadorEspacios; espacios++){
            std::cout<<" ";
        }
        
        for(int asteriscos = 0; asteriscos < contadorAsteriscos; asteriscos++){
            std::cout<<"*";
        }
        
        for(int espacios = 0; espacios < contadorEspacios; espacios++){
            std::cout<<" ";
        }
        
        contadorEspacios -= 1;
        contadorAsteriscos += 2;
        
        }
        
        else{
            
            
        for(int espacios = 0; espacios < contadorEspacios; espacios++){
            std::cout<<" ";
        }
        
        for(int asteriscos = 0; asteriscos < contadorAsteriscos; asteriscos++){
            std::cout<<"*";
        }
        
        for(int espacios = 0; espacios < contadorEspacios; espacios++){
            std::cout<<" ";
        }
        
        contadorEspacios += 1;
        contadorAsteriscos -= 2;
            
        }
        if(contadorAsteriscos == numeroTamaño + 2){
            contadorAsteriscos -= 4;
            contadorEspacios += 2;
            primeraParte = false;
        }
        
        std::cout<<endl;
    }
    */
    
    /*Problema 7, serie de fibonacci, hallar suma de numeros pares hasta n*/
    /*
    int numeroN;
    std::cout<<"Ingrese hasta que numero desea sumar los pares en la serie de Fibonacci: ";
    std::cin>>numeroN;
    int actual = 1;
    int anterior = 1;
    int nuevo = 1;
    int sumaDePares = 0;
    for(int suma = 0; suma <= numeroN;suma++){
        nuevo = actual + anterior;
        std::cout<<nuevo<<endl;
        anterior = actual;
        actual = nuevo;
        if(nuevo%2 == 0){
            sumaDePares += nuevo;
        }
    }
    std::cout<<"Esta es la suma de los pares: "<<sumaDePares;
        
    */
    
   /*Problema 9, Suma de todos los digitos de un numero n */ 
   
   /*
   int numeroN;
   std::cout<<"Ingrese un numero cualquiera para hallar la suma de sus digitos elevados a si mismo: ";
   std::cin>>numeroN;
   int sumatoriaDigitos = 0;
   int sumadigitos = 0;
   int digito;
   while(numeroN > 0){
       digito = numeroN%10;
       numeroN /= 10;
       std::cout<<digito<<endl;
       if(digito == 0){
           sumatoriaDigitos += 1;
       }
       else{
          sumatoriaDigitos += elevarNumeroAsiMismo(digito); 
       }
       
   }
   std::cout<<"La sumatoria de los digitos elevados asi mismos es: "<<sumatoriaDigitos;
   */
   
   /*Problema 11, Halla el mcm de todos los numeros entre 1 y un numero n*/
   /*
   int numeroMcm;
   std::cout<<"Ingrese un numero para hallar el mcm hasta dicho digito: ";
   std::cin>>numeroMcm;
   int resultado = 1;
   for (int numero = 1; numero <= numeroMcm; ++numero) {
        resultado = (resultado*numero)/calcularMCD(resultado, numero);
    }
   std::cout<<"El mcm de los numeros del 1 al "<<numeroMcm<<" es: "<<resultado;
   */
   
   
   
   /*Problema 13, calcule la suma de todos los numeros primos desde el 1 hasta un numero n*/
   
   /*
   std::cout<<"Ingrese un numero: ";
   int numeroSuma;
   std::cin>>numeroSuma;
   int sumatoriaPrimos = 0;
   for(int digito = 1; digito <= numeroSuma; digito++){
       if(verificarNumeroPrimo(digito) == true){
           sumatoriaPrimos = sumatoriaPrimos + digito;
       }
   }
   std::cout<<"La suma de los numeros primos desde el 1 hasta el "<<numeroSuma<<" es: "<<sumatoriaPrimos;
   */
   
   /*Problema 15, Encuentre la suma de las diagonales de una espiral n por n impar*/
   
   /*
   int numeroN;
   std::cout<<"Ingrese un numero para la espiral nxn: ";
   std::cin>>numeroN;
   int numeroMaximo = numeroN*numeroN;
   int diagonal = 1;
   int sumatoriaDiagonal = 0;
   int saltosDiagonal = 2;
   int contadorCambiosDimension = 0;
   while(diagonal <= numeroN*numeroN){
       sumatoriaDiagonal += diagonal;
       std::cout<<diagonal<<endl;
       contadorCambiosDimension++;
       diagonal += saltosDiagonal;
       if(contadorCambiosDimension == 4){
           saltosDiagonal +=2;
           contadorCambiosDimension = 0;
       }
   }
   std::cout<<"la sumatoria de la espiral "<<numeroN<<"x"<<numeroN<<" es: "<<sumatoriaDiagonal;
   
   */
   
   /*Problema 17, hallar el n numero triangular con mas de k divisores */
   /*
   int numeroK;
   std::cout<<"Ingrese un numero k para hallar el numero trangular con mas de k divisores: ";
   std::cin>>numeroK;
   int enesimo = 1;
   while(true){
       int numeroTriangular = enesimo*(enesimo+1)/2;
       if(calcularDivisores(numeroTriangular)>numeroK){
           std::cout<<"El numero triangular "<<numeroTriangular<<" tiene "<<calcularDivisores(numeroTriangular)<<" divisores";
           return calcularDivisores(numeroTriangular);
       }
       enesimo++;
   }
   */
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
    
    
    return 0;
}