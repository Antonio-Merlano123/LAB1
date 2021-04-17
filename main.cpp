#include <iostream>
#include <time.h>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
    unsigned short ejercicio;
    int A,B, ent;
    float div;
    cout << "Numero de ejercicio: ";
    cin>> ejercicio;

    switch(ejercicio){

        case 1:
    {
        int num1,num2;
        cout<<"Este programa imprime el residuo de la division de los numeros ingresado. "<<endl<<endl;

        cout <<"Ingrese primer numero: ";cin>>num1;

        cout<<"Ingrese segundo numero: ";cin>>num2;

        cout<<"El residuo de la division "<<num1<<"/"<<num2<<" es: "<<num1%num2<<endl;
        }
            break;
        case 2:
            {
            int numero;
            cout << "Indique un numero: ";
            cin >> numero;
            if ( numero % 2 == 0)
            cout << numero << " es par.  "<< endl;
            else
            cout << numero << " es impar.  "<< endl;
    }
            break;
        case 3:
            {
            cout << "Ingrese dos numeros A y B para determinar el numero mayor: ";
            cin >> A >> B;
            if (A>B)
            cout << "El mayor es " << A << endl;
            else
            cout << "El mayor es " << B << endl;
            }
            break;
        case 4:
          {
            cout << "Ingrese dos numeros A y B para determinar el numero menor: ";
            cin >> A >> B;
            if (A<B)
            cout << "El menor es " << A << endl;
            else
            cout << "El menor es " << B << endl;
           }
            break;
        case 5:
             {
             cout << "Ingrese dos numeros A y B para efectuar la operacion A/B con redondeo: ";
             cin >> A >> B;
             div=float(A)/B;
             ent = A/B;
             if(div-ent>=0.5 && div>0) ent++;
             else if (div-ent<=-0.5 && div<0) ent--;
             cout << "la operacion " << A << '/' << B << '=' << ent << " con redondeo" << endl;
            }
             break;
        case 6:
            {
             int num1,num2,resultado,aux,i=1;

             cout<<"Ingrese el numero un numero: "; cin>>num1;
             cout<<"Ingrese el numero de la potencia que desea: "; cin>>num2;
             aux=num1;

             if(num2==0)cout<<num1<<"^"<<num2<<"= 1"<<"->Por que todo numero elevado a 0 es igual 1"<<endl;

             else{
                while(i<num2){
                    aux=aux*num1;
                    i++;
                }

                    resultado=aux;
                    cout<<"El resultado de "<<num1<<"^"<<num2<<" es: "<<resultado<<endl;
              }
                 }
             break;
        case 7:
            {
            int num1,i=0,result=0;

            cout <<"Ingrese un numero: ";cin>>num1;

            while(i<=num1){
                result=result+i;
                i++;

            }

            cout<<"La sumatoria desde 0 hasta "<<num1<<" es: "<<result<<endl;
            }
             break;
        case 8:
        {
            int num1,i=1,result=1;

            cout <<"Ingrese un numero: ";cin>>num1;

            while(i<=num1){
                result=result*i;
                i++;

            }
            cout<<"El factorial de "<<num1<<"!"<<" es : "<<result<<endl;


         }
             break;
        case 9:
            {
            double perimetro,area,radio,pi=3.1416;


            cout <<"Ingrese El radio del circulo: ";cin>>radio;

            perimetro=2*pi*radio;
             cout <<"El Perimetro del ciruclo con radio "<<radio<<" es: "<<perimetro<<endl;
            area=pi*(radio*radio);
                cout <<"El Area del circulo con radio "<<radio<<" es: "<<area<<endl;
            }
             break;
        case 10:
    {
        int num,aux,result,i=1;
        cout<<"Ingrese el numero a evaluar: "; cin>>num;

        cout<<"Los multimos de "<<num<<" menores que 100 son: "<<endl;
        aux=num;

        while((aux>=1)&&(aux<=100)){
            result=num*i;
            i++;
            aux=result;
            if(result<=100){
               cout<<result<<endl;
            }
        }

    }
             break;
        case 11:
            {
               int num,i=1;

                cout <<"Ingrese el numero a evaluar: ";cin>>num;

                if(num==0){
                    cout<<"Todo numero multiplicado por 0 es = 0"<<endl;
                }
                else{
                    while(i<=10){
                        cout<<i<<"x"<<num<<"= "<<num*i<<endl;
                        i++;
                    }
                }

              }
             break;
        case 12:
        {
            int num,cont=1,aux;
            cout <<"Ingrese el numero a evaluar: ";cin>>num;
            aux=num;
            for(int i=1;i<=5;i++){
                if(i==1){
                    cout<<num<<"^"<<i<<"= "<<num<<endl;
                }
                else{
                    while(cont<i){
                        aux=aux*num;
                        cout<<num<<"^"<<i<<"= "<<aux<<endl;
                        cont++;
                    }
                }
            }

        }
             break;
        case 13:
        {
            int num;
            cout <<"Ingrese el numero a evaluar: ";cin>>num;
            cout<<"Los divisores de "<<num<<" son: "<<endl;

            for(int i=1;i<=num;i++)
                if(num%i==0){
                    cout<<i<<endl;
                }

        }
             break;
        case 14:
        {
             int columnados=50;

            for(int i=1;i<=50;i++){
                cout<<i<<"     "<<columnados<<endl;
                columnados--;
            }


        }
             break;
        case 15:
        {
            short int num,result=0;

            cout << "Ingrese un numero: ";cin>>num;
            while(num!=0){
                result+=num;
                cout << "Ingrese un numero: ";cin>>num;
            }

            cout << "El resultado de la sumatoria es: "<<result<<endl;

        }
             break;
        case 16:
        {
            short int num,suma=0,contador=0,promedio;

            cout << "Ingrese un numero: ";cin>>num;

            while(num!=0){
                suma+=num;
                contador++;
                cout << "Ingrese un numero: ";cin>>num;
            }

            promedio=(suma/contador);
            cout << "El promedio es: "<<promedio<<endl;


        }
             break;
        case 17:
        {

            int num1,num2=0;

            cout<<"Ingrese un numero: "; cin>>num1;

            while(num1!=0){
                if(num1>num2){
                    num2=num1;
                    cout<<"Ingrese otro numero: "; cin>>num1;
                }
                else{
                    cout<<"Ingrese otro numero: "; cin>>num1;
                }
            }

            if(num1>num2){
                cout<<"El numero mayor fue: "<<num1<<endl;
            }
            else{
                cout<<"El numero mayor fue: "<<num2<<endl;
            }

        }
             break;
        case 18:
        {

            short int num;
            bool encontrado=false;

            cout << "Ingresa un numero: ";cin>>num;

            for(int i=1;i<num;i++){

                if(i*i==num){
                    encontrado=true;
                    break;
                }
            }
            if(encontrado==true){
                cout<<num<<" ES un cuadrado perfecto!"<<endl;
            }
            else{
                cout<<num<<" NO es un cuadrado perfecto!"<<endl;
            }


        }
             break;
        case 19:
        {
            short int num,modulo=0,contador=0;

            cout<<"Ingrese el numero a evaluar: ";cin>>num;

            for(int i=1;i<=num;i++){

                modulo=num%i;
                if(modulo==0){
                    contador++;
                }
            }
            if(contador==2)cout<<"El numero "<<num<<" ES primo!"<<endl;
            else cout<<"El numero "<<num<<" NO es primo!"<<endl;
        }
             break;
        case 20:
        {
            int num,aux,resultado=0;

            cout<<"Ingrese el numero a evaluar: "; cin>>num;
            aux=num;

            while(num>0){
                resultado=resultado+num%10;
                resultado=resultado*10;
                num=num/10;
            }

            if(resultado/10==aux){
                cout<<"El numero "<<aux<<" ES palindromo!"<<endl;
            }
            else{
                cout<<"el numero "<<aux<<" NO es palindromo!"<<endl;
            }
        }
             break;
        case 21:
        {
            char letra;
            cout<<"Ingrese una letra: ";cin>>letra;

             if(letra>=65&&letra<=90){

                 for(int i=65;i<=90;i++){
                     if(i==letra){
                         letra=letra+32;
                         break;
                     }
                 }

               cout<<"Letra convertida: "<<letra<<endl;
             }
             else{
                 if(letra>=97&&letra<=122){

                     for(int i=97;i<=122;i++){
                         if(i==letra){
                             letra=letra-32;
                             break;
                         }
                     }
                 }

                cout<<"Letra convertida: "<<letra<<endl;
             }

        }
             break;
        case 22:
        {
            int num,horas=0,minutos=0,segundos=0,aux;

            cout<<"Ingrese el tiempo: ";cin>>num;
            aux=num;

            while(aux>0){
                segundos=num%60;
                aux=num/60;
                minutos=aux%60;
                aux=aux/60;
                horas=aux%60;
                aux=aux/60;
            }

            cout<<num<<" segundos son: "<<endl<<horas<<" horas con "<<minutos<<" minutos"<<" y "<<segundos<<" segundos"<<endl;

        }
             break;
        case 25:
        {
        int num,aux,num2,contador=0;
        cout << "Ingrese un numero: ";cin>>num;
        num2=num;
        while(num!=0){

            aux=num/10;
            contador++;
            num=aux;
        }

        cout<<"El numero "<<num2<<" tiene "<<contador<<" digitos!"<<endl;


    }
             break;
        case 26:
    {
        int a, b, c;

        cout << "\nPrimer lado: "; cin >> a;
        cout << "Segundo lado: "; cin >> b;
        cout << "Tercer lado: "; cin >> c;

        if (a == b && a == c)
            cout << "\nEs un triangulo Equilatero" << endl;
        else if (a == b || a == c || b == c)
            cout << "\nEs un triangulo Isosceles" << endl;
        else
            cout << "\nEs un triangulo Escaleno" << endl;


    }
             break;

        case 27:
        {
           cout << "Este programa funciona como una calculadora con las operaciones de suma(+), resta(-), "
                   "multiplicacion(*) y division(/) para 2 numeros ingresados" <<endl<< endl;

           double num1,num2,resultado;
           char operador;

           cout<<"Ingrese primer numero: ";cin>>num1;

           cout<<"Ingrese operaccion(+,-,*,/): ";cin>>operador;

           cout<<"Ingrese segundo numero: ";cin>>num2;



           switch (operador) {
           case '+':
               resultado=num1+num2;
               cout<<num1<<"+"<<num2<<"="<<resultado<<endl;
               break;
           case '-':
               resultado=num1-num2;
               cout<<num1<<"-"<<num2<<"="<<resultado<<endl;
               break;
           case '*':
               resultado=num1*num2;
               cout<<num1<<"*"<<num2<<"="<<resultado<<endl;
               break;
           case '/':
               if(num2==0.0){
                   cout<<"La divicion por 0 no existe!"<<endl;;
               }
               else{resultado=num1/num2;
               cout<<num1<<"/"<<num2<<"="<<resultado<<endl;
               }
               break;

           default:
               cout<<"El signo no es valido."<<endl;
               break;
           }
    }
             break;
        case 28:
           {
               float num,div=3;
               float pi=0;

               cout<<"Ingrese El numero de elementos a usar: ";cin>>num;

               for(int i=1;i<num;i++){
                   if(i%2==1){
                       pi=pi+(-1/div);
                       div=div+2;
                   }

                   if(i%2==0){
                       pi=pi+(1/div);
                       div=div+2;
                   }
               }
               pi=pi+1;
               pi=pi*4;

               cout<<"pi es apriximadamente: "<<pi<<endl;
    }
             break;
        case 29:

        {
                   int num1 = 0,limite_inferior=0,limite_superior=100;
                   char opcion;
                   bool aux=false;


                   srand(time(NULL));



                   cout<<"EL programa le dara un numero aleatorio y usted debe de decir si es mayor(>),menor(<) o igual(=)"
                         " al numero que usted penso!"<<endl<<endl;

                   while(aux==false){
                       num1 = limite_inferior + rand() % ((limite_superior + 1) - limite_inferior);
                       cout<<"EL numero "<<num1<<" es < , > , = : ";cin>>opcion;

                       if (opcion=='<'){
                           limite_inferior=num1+1;
                       }
                       if(opcion=='>'){
                           limite_superior=num1-1;
                       }
                       if(opcion=='='){
                           cout<<"El numero que usted tenia en mente era: "<<num1<<endl;
                           aux=true;
                       }

                   }
    }
             break;
        case 30:
           {
                           int num1 = 0,num2=0,contador=0,limite_inferior=0,limite_superior=100;
                           bool aux=false;

                           srand(time(NULL));

                           num1 = limite_inferior + rand() % ((limite_superior + 1) - limite_inferior);

                           while(aux==false){
                               cout<<"Ingrese un numero: ";cin>>num2;

                               if(num1<num2){
                                   cout<<num2<<" Es mayor,intentalo otra vez!"<<endl;
                                   contador++;
                               }
                               else if(num1>num2){
                                   cout<<num2<<" Es menor,intentalo otra vez!"<<endl;
                                   contador++;
                               }
                               else if(num1==num2){
                                   cout<<"Acertaste!! el numero era : "<<num1<<endl;
                                   aux=true;
                               }


                           }

                           cout<<"Y la canditad de intentos que tardaste en adivinar el numero fue: "<<contador<<endl;
                        }
                 break;
        case 32:
                           {
                               int lista[]={50000,20000,10000,5000,2000,1000,500,200,100,50,0},dinero,aux;

                               cout<<"Ingrese el dinero: ";cin>>dinero;
                               aux=dinero;

                               for(int i=0;lista[i]!=0;i++){
                                   dinero=aux/lista[i];
                                   aux=aux%lista[i];
                                   cout<<lista[i]<<": "<<dinero<<endl;

                               }
                               if(aux>0)cout<<"Resto: "<<aux<<endl;
                               else cout<<"Resto: "<<aux<<endl;
                    }
                 break;

        case 33:
                               {
                                   cout << "Este programa dice si la fecha ingresada es valida o invalida."<< endl<<endl;


                                   int meses, dias;
                                   bool bandera=true;
                                   cout<<"Ingrese el mes: ";cin>>meses;
                                   cout<<"Ingrese el dia: ";cin>>dias;
                                   cout<<dias<<"/"<<meses;

                                   if((meses>0 && meses<=12) && (dias>0 && dias<=31)){     //miro que el valor ingresado este dentro del rango
                                       if(meses==2 && dias>29){cout<<" Es una fecha invalida."<<endl;bandera=false; }      //considero el caso especial de febrero
                                       if(meses==2 && dias==29){cout<<" Es valida en bisiesto."<<endl;bandera=false;}      //considero el año bisiesto
                                       if((meses==4||meses==6||meses==9||meses==11) && dias>30){cout<<" Es una fecha invalida."<<endl;bandera=false;}      //considero el caso de los meses que solo tienen 30 dias

                                       else if(bandera==true){cout<<" Es una fecha valida"<<endl;}
                                   }
                                   else {cout<<" Es una fecha invalida"<<endl;}

                }
                 break;
        case 34:
                                   {
                                       int numero1=0 , numero2=0 , horas1=0 , minutos1=0 , horas2=0 , minutos2=0 , horast=0 , minutost=0;

                                       cout << "Ingrese el primer tiempo: ";cin >> numero1;

                                       minutos1=numero1%100;                                                                      //A la variable minutos1 se le lleva el residuo al aplicarle modulo 100 a numero1 ingresado por el usuario para tener las dos últimas cifras
                                       horas1=numero1/100;                                                                        //A la variable horas1 se le lleva el resultado al aplicarle división entera a numero1 entre 100 para tener las primeras cifras

                                       while ( (minutos1>=60) || (horas1>=24) ){                                                 //Ciclo que se ejecutará hasta que el usuario ingrese un número válido que no se salga del rango y el formato de las 24 horas
                                           cout << "El tiempo ingresado: " << numero1 << " no es válido , vuelva a intentarlo" << endl << endl;
                                           //
                                           cout << "Ingrese el primer tiempo: ";cin >> numero1;
                                           minutos1=numero1%100;                                                                 //A la variable minutos1 se le lleva el residuo al aplicarle modulo 100 a numero1 ingresado por el usuario para tener las dos últimas cifras
                                           horas1=numero1/100;                                                                   //A la variable horas1 se le lleva el resultado al aplicarle división entera a numero1 entre 100 para tener las primeras cifras
                                       }




                                       cout << "Ingrese el segundo tiempo: ";cin >> numero2;

                                       minutos2=numero2%100;                                                                     //A la variable minutos2 se le lleva el residuo al aplicarle modulo 100 a numero2 ingresado por el usuario para tener las dos últimas cifras
                                       horas2=numero2/100;                                                                       //A la variable horas2 se le lleva el resultado al aplicarle división entera a numero2 entre 100 para tener las primeras cifras

                                       while ((minutos2>=60) || (horas2>=24)){                                                   //Ciclo que se ejecutará hasta que el usuario ingrese un número válido que no se salga del rango y el formato de las 24 horas
                                           cout << "El tiempo ingresado: "<< numero2 << " no es válido , vuelva a intentarlo" << endl <<endl;
                                           //
                                           cout << "Ingrese el segundo tiempo: ";cin >> numero2;
                                           minutos2=numero2%100;                                                                 //A la variable minutos2 se le lleva el residuo al aplicarle modulo 100 a numero2 ingresado por el usuario para tener las dos últimas cifras
                                           horas2=numero2/100;                                                                   //A la variable horas2 se le lleva el resultado al aplicarle división entera a numero2 entre 100 para tener las primeras cifras
                                       }


                                       minutost=minutos1+minutos2;                                                               //A la variable minutost se le lleva la suma entre minutos1 y minutos2
                                       horast=horas1+horas2;                                                                     //A la variable horast se le lleva la suma entre horas1 y horas2

                                       if (minutost>=60){                                                                        //Condicional que se ejecuta si los minutost son mayores o iguales a 60
                                           horast++;                                                                             //La variable horast se incrementa en 1
                                           minutost=minutost%60;                                                                 //A la variable minutost se le lleva el residuo al aplicarle modulo 60 a minutost, en el caso de que minutost sea igual a 60 a esté se le llevará un cero


                                           if (horast>24){                                                                       //Condicional que se ejecuta si horast superán las 24 horas y entra al ciclo a imprimir que un mensaje de error
                                               cout << endl << "Tiempo1: " << horas1 << ":" << minutos1 << endl;
                                               cout <<"Tiempo2: " << horas2 << ":" << minutos2 << endl;
                                               cout << "la suma de los tiempos no es válido ya que superan el formato de las 24 horas" << endl;
                                               return 0;
                                           }

                                           else if (horast==24)                                                                 //Condicional que se ejecuta si las horast son iguales a 24
                                               horast=0;                                                                        //A la variable horast se le lleva un cero que representa las 24 horas en un reloj de 24 horas

                                       }



                                       cout << endl << "Tiempo1: " << horas1 << ":" << minutos1 << endl;
                                       cout <<"Tiempo2: " << horas2 << ":" << minutos2 << endl;
                                       cout << endl << "La hora es: " << horast << ":" << minutost << endl;
    }
                 break;

        case 35:
        {
            int n ;
            cout << " Ingrese un numero : " ;
            cin >> n ;
            for (int j = 0; j < n ; ++j) {
                for (int i = 0; i < n-j-1; ++i)
                    cout << " ";
                for (int i = 0; i < 2*j+1; ++i)
                     cout << "*" ;
                cout << endl ;
            }

            for (int j=n-2; j>=0; --j) {
                for (int i=0; i<n-j-1; ++i)
                    cout << " " ;
                for (int i=0; i<2*j+1; ++i)
                    cout << "*" ;
                cout << endl ;
            }

        }
                 break;
        case 36:
                                           {
                                               float num,fact=1,result=1,x=1;

                                               cout<<"Ingrese el numero de elementos: ";cin>>num;

                                               for(int i=1;i<num;i++){   //for que controla la cantidad de elementos de la serie
                                                   while(x<=i){         //este ciclo saca el factorial
                                                       fact=fact*x;
                                                       x++;
                                                       result=result+(1/fact);
                                                   }


                                               }

                                              cout<<"e Es aproximadamente: "<<result<<endl;
        }
                 break;

        case 37:
        {
          unsigned long long aux = 1, fib = 0, lim, init;

          cout << "Ingrese un numero para la sucesion de fibonacci: ";
          cin >> lim;
          if(lim > 0) {
            for(init = 1; init <= lim; init++) {
              cout << "[" << fib << "] ";
              aux += fib; /* lo mismo que aux = aux + fib; */
              fib = aux - fib;
            }
          } else {
            cout << "El numero debe ser mayor a cero!!" << endl;
          }
          cout << "\n";

        }

                 break;

        case 39:
                                                  {
                                                      int num,aux,div=0,result=0;

                                                      cout<<"Ingrese un numero: "; cin>>num;
                                                      aux=num;

                                                      if(num==0){
                                                         cout<<"La suma de todos los digitos elevados asi mismos del numero "<<aux<<" es: "<<"1";
                                                      }
                                                      else{
                                                          while(num>0){
                                                              div=num%10;
                                                              result=result + (pow(div,div));
                                                              num=num/10;

                                                          }

                                                          cout<<"La suma de todos los digitos elevados asi mismos del numero "<<aux<<" es: "<<result<<'\n';

                                                      }
    }

                 break;
        case 42:
                                             {
                                                          int numero=0 , factorp=0 , numeroI=0 , factorPM=0;


                                                          cout << "Ingrese un número: ";cin >> numero;
                                                          numeroI=numero;

                                                          if (numero>0){                                                       //Condicional que se ejecuta si numero es mayor que 0

                                                          for(factorp=2 ; numeroI > 1 ; factorp++){                           //Ciclo que se ejecuta mientras numeroI sea mayor que 1 y a factorp se le va sumando 1, finaliza cuando el numero ingresado ya no se pueda dividir y a su vez va incrementando factorp en 1 que es el que lo divide

                                                              while (numeroI%factorp==0){                                     //Ciclo que se ejecuta mientras numeroI%factorp==0 , se ejecuta mientras el numero ingresedo sea divisible enteramentre entre factorp
                                                                  numeroI/=factorp;                                           //A la variable numeroI se le lleva el resultado de la división entera entre numeroI entre factorp
                                                                  factorPM=factorp;                                           //A la variable factorPM se le lleva los valores que va tomando factorp para que está no se vea afectada por el ciclo for

                                                              }

                                                          }

                                                          cout << "El mayor factor primo de " << numero << " es: " << factorPM << endl;

                                                          }

                                                          else if (numero==0)                                               //Condicional que se ejecuta si numero es igual a 0
                                                              cout << "El número cero posee infinitos factores primos" << endl;

                                                          else if (numero<0)                                                //Condicional que se ejecuta si numero es menor que 0
                                                              cout << "El número es negativo , no es válido" << endl ;

    }
                 break;
        case 43:
                                                          {
                                                              int numero,sum=0;
                                                              cout<<"Ingrese numero: ";cin>>numero;

                                                              while(numero<0){                                                             //Transforma el numero en un postivo
                                                                  cout<<"El numero debe ser positivo, intente otra vez: ";cin>>numero;
                                                              }

                                                              while(numero>1){
                                                                  if(numero%2!=0 && numero%3!=0 && numero%5!=0 && numero%7!=0){         //la condicion de los numeros primos
                                                                      sum=sum+numero;                                                  //suma los numeros primos menores que n
                                                                  }
                                                                  else if(numero==2 || numero==3 || numero==5 || numero==7){         //pregunta por los primeros numeros primos
                                                                      sum=sum+numero;
                                                                  }

                                                                  numero-=1;
                                                                  }
                                                              if(numero<0){sum=sum*-1;}                     //si el valor inicial era negativo, lo convierte nuevamente a negativo

                                                              cout<<"El resultado de la suma es: "<<sum<<endl;
    }
                 break;

        case 46:
                                                              {


                                                                  int numerok=0 , contador=1 , numeroI=0;

                                                                  cout << "Ingrese un número: ";cin >> numerok;
                                                                  cout << endl;
                                                                  numeroI=numerok;

                                                                 cout<<"Para la semilla "<<numerok<<": "<<numerok<<", ";
                                                                 do {                                                 //Instrucciones que se leerán antes del ciclo while


                                                                      if (numerok%2==0){                              //Condicional que se ejecuta si numerok es par
                                                                          numerok= numerok/2;                         //La variable numerok se divide entre 2

                                                                          if (numerok==1){                            //Condicional que se ejecuta si numerok es igual a 1
                                                                              cout << numerok;
                                                                              contador++;                             //La variable contador se incrementa en 1, cuenta los elementos de la secuencia
                                                                              break;}                                 //Termina el programa

                                                                          cout << numerok << ", ";
                                                                          contador++;                                 //La variable contador se incrementa en 1, cuenta los elementos de la secuencia
                                                                      }

                                                                      else {                                          //Condicional que se ejecuta si numerok es impar
                                                                          numerok= (3*numerok)+1;                     //La variable numerok se le multiplica por 3 y se le suma 1
                                                                          cout << numerok << ", ";
                                                                          contador++;                                 //La variable contador se incrementa en 1, cuenta los elementos de la secuencia
                                                                      }
                                                                  }

                                                                  while (numerok!=1);                                 //Ciclo que se ejecutará mientras numerok sea diferente de 1
                                                                  cout << endl << endl;
                                                                  cout << "Esta es la serie más larga con la semilla: "<< numeroI << ", teniendo "<< contador <<" términos." << endl << endl;

    }
                 break;

            default:
                cout << "El ejercicio no existe" << endl;
            break;


        }

    return 0;
}
