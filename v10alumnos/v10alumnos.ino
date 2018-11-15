//para tiempo = 15:00
//verde de 0 a 10:00 min
//amarillo de 10:01 a 14:00 min
//rojo de 14:01 a  15:00 min

int uni_s=0;
int dec_s=0;
int uni_m=0;
int dec_m=0;
int vel=990;

void setup() 
{
  pinMode (2,OUTPUT); //Controlará foco verde
  pinMode (3,OUTPUT); //Controlará foco Amarillo
  pinMode (4,OUTPUT); //Controlará foco Rojo

  pinMode(23, OUTPUT);  //seg a de las unidades de segundo
  pinMode(25, OUTPUT);  //seg b
  pinMode(27, OUTPUT);  //seg c
  pinMode(29, OUTPUT);  //seg d
  pinMode(31, OUTPUT);  //seg e
  pinMode(33, OUTPUT);  //seg f
  pinMode(35, OUTPUT);  //seg g

  pinMode(22, OUTPUT);  //seg a de las decenas de segundo
  pinMode(24, OUTPUT);  //seg b
  pinMode(26, OUTPUT);  //seg c
  pinMode(28, OUTPUT);  //seg d
  pinMode(30, OUTPUT);  //seg e
  pinMode(32, OUTPUT);  //seg f
  pinMode(34, OUTPUT);  //seg g

  pinMode(37, OUTPUT);  //seg a de las unidades de minuto
  pinMode(39, OUTPUT);  //seg b
  pinMode(41, OUTPUT);  //seg c
  pinMode(43, OUTPUT);  //seg d
  pinMode(45, OUTPUT);  //seg e
  pinMode(47, OUTPUT);  //seg f
  pinMode(49, OUTPUT);  //seg g

  pinMode(36, OUTPUT);  //seg a de las decenas de minuto
  pinMode(38, OUTPUT);  //seg b
  pinMode(40, OUTPUT);  //seg c
  pinMode(42, OUTPUT);  //seg d
  pinMode(44, OUTPUT);  //seg e
  pinMode(46, OUTPUT);  //seg f
  pinMode(48, OUTPUT);  //seg g

  mostrar_us();
  mostrar_ds();
  mostrar_um();
  mostrar_dm();

  digitalWrite (2,LOW);  
  digitalWrite (3,LOW);    //verde, amarillo y rojo apagados          
  digitalWrite (4,LOW);
  delay (1000);  


   for(uni_m=0;uni_m<10;uni_m++)
    {
    for(dec_s=0;dec_s<=5;dec_s++)
        {
          for(uni_s=0;uni_s<=9;uni_s++)
            {
            mostrar_us();
            mostrar_ds();
            mostrar_um();
            mostrar_dm();
            delay (vel);

                digitalWrite (2,HIGH);  //enciendo foco verde
                digitalWrite (3,LOW);    //amarillo y rojo apagados
                digitalWrite (4,LOW);              
              
          }
         }
     }
                digitalWrite (2,LOW);  //enciendo foco amarillo
                digitalWrite (3,HIGH);    //verde y rojo apagados          
                digitalWrite (4,LOW);
     
    dec_m++;//esto pone el valor del reloj a 10:00

for(uni_m=0;uni_m<4;uni_m++)
  {
  for(dec_s=0;dec_s<=5;dec_s++)
        {
          for(uni_s=0;uni_s<=9;uni_s++)
            {
            mostrar_us();
            mostrar_ds();
            mostrar_um();
            mostrar_dm();
            delay (vel);

              if(uni_m<3)
              {
                digitalWrite (2,LOW);  //enciendo foco amarillo
                digitalWrite (3,HIGH);  //verde y rojo apagados            
                digitalWrite (4,LOW);              
              }          
            }
          }
  }    
                digitalWrite (2,LOW);  
                digitalWrite (3,LOW);   //verde y amarillo apagados           
                digitalWrite (4,HIGH); //enciendo foco Rojo
      delay(vel);   
      mostrar_um();
      mostrar_dm();
      
     
      delay(60000);
      
      mostrar_um();
      
                digitalWrite (2,LOW);  
                digitalWrite (3,LOW);   //Apaga todo           
                digitalWrite (4,LOW); 
      
}
void loop()
{
  dec_m=0;
  uni_m=0;
  mostrar_um();
  mostrar_dm();
  delay(1000);
  dec_m="";
  uni_m="";
  mostrar_um();
  mostrar_dm();
    }

    
void mostrar_us ()
{
  switch (uni_s) {
    case 1:                 //escribe en el 7seg el numero 1
      digitalWrite(23, 0);
      digitalWrite(25, 1);
      digitalWrite(27, 1);
      digitalWrite(29, 0);
      digitalWrite(31, 0);
      digitalWrite(33, 0);
      digitalWrite(35, 0);
     break;
    case 2:                //escribe en el 7seg el numero 2
      digitalWrite(23, 1);
      digitalWrite(25, 1);
      digitalWrite(27, 0);
      digitalWrite(29, 1);
      digitalWrite(31, 1);
      digitalWrite(33, 0);
      digitalWrite(35, 1);
     break;      
    case 3:               //escribe en el 7seg el numero 3
      digitalWrite(23, 1);
      digitalWrite(25, 1);
      digitalWrite(27, 1);
      digitalWrite(29, 1);
      digitalWrite(31, 0);
      digitalWrite(33, 0);
      digitalWrite(35, 1);
      break;
    case 4:               //escribe en el 7seg el numero 4
      digitalWrite(23, 0);
      digitalWrite(25, 1);
      digitalWrite(27, 1);
      digitalWrite(29, 0);
      digitalWrite(31, 0);
      digitalWrite(33, 1);
      digitalWrite(35, 1);
     break;
    case 5:               //escribe en el 7seg el numero 5
      digitalWrite(23, 1);
      digitalWrite(25, 0);
      digitalWrite(27, 1);
      digitalWrite(29, 1);
      digitalWrite(31, 0);
      digitalWrite(33, 1);
      digitalWrite(35, 1);
     break;
    case 6:               //escribe en el 7seg el numero 6
      digitalWrite(23, 1);
      digitalWrite(25, 0);
      digitalWrite(27, 1);
      digitalWrite(29, 1);
      digitalWrite(31, 1);
      digitalWrite(33, 1);
      digitalWrite(35, 1);
     break;
    case 7:              //escribe en el 7seg el numero 7
      digitalWrite(23, 1);
      digitalWrite(25, 1);
      digitalWrite(27, 1);
      digitalWrite(29, 0);
      digitalWrite(31, 0);
      digitalWrite(33, 0);
      digitalWrite(35, 0);
     break;
    case 8:              //escribe en el 7seg el numero 8
      digitalWrite(23, 1);
      digitalWrite(25, 1);
      digitalWrite(27, 1);
      digitalWrite(29, 1);
      digitalWrite(31, 1);
      digitalWrite(33, 1);
      digitalWrite(35, 1);
      break;
    case 9:               //escribe en el 7seg el numero 9
      digitalWrite(23, 1);
      digitalWrite(25, 1);
      digitalWrite(27, 1);
      digitalWrite(29, 1);
      digitalWrite(31, 0);
      digitalWrite(33, 1);
      digitalWrite(35, 1);
     break;
    case 0:                //escribe en el 7seg el numero 0
      digitalWrite(23, 1);
      digitalWrite(25, 1);
      digitalWrite(27, 1);
      digitalWrite(29, 1);
      digitalWrite(31, 1);
      digitalWrite(33, 1);
      digitalWrite(35, 0);
      break;
    default: 

      digitalWrite(23, 0);
      digitalWrite(25, 0);
      digitalWrite(27, 0);
      digitalWrite(29, 0);
      digitalWrite(31, 0);
      digitalWrite(33, 0);
      digitalWrite(35, 0);   
  }
}

void mostrar_ds ()
{
  switch (dec_s) {
    case 0:                //escribe en el 7seg el numero 0
      digitalWrite(22, 1);
      digitalWrite(24, 1);
      digitalWrite(26, 1);
      digitalWrite(28, 1);
      digitalWrite(30, 1);
      digitalWrite(32, 1);
      digitalWrite(34, 0);
      break;
    case 1:                 //escribe en el 7seg el numero 1
      digitalWrite(22, 0);
      digitalWrite(24, 1);
      digitalWrite(26, 1);
      digitalWrite(28, 0);
      digitalWrite(30, 0);
      digitalWrite(32, 0);
      digitalWrite(34, 0);
     break;
    case 2:                //escribe en el 7seg el numero 2
      digitalWrite(22, 1);
      digitalWrite(24, 1);
      digitalWrite(26, 0);
      digitalWrite(28, 1);
      digitalWrite(30, 1);
      digitalWrite(32, 0);
      digitalWrite(34, 1);
     break;      
    case 3:               //escribe en el 7seg el numero 3
      digitalWrite(22, 1);
      digitalWrite(24, 1);
      digitalWrite(26, 1);
      digitalWrite(28, 1);
      digitalWrite(30, 0);
      digitalWrite(32, 0);
      digitalWrite(34, 1);
      break;
    case 4:               //escribe en el 7seg el numero 4
      digitalWrite(22, 0);
      digitalWrite(24, 1);
      digitalWrite(26, 1);
      digitalWrite(28, 0);
      digitalWrite(30, 0);
      digitalWrite(32, 1);
      digitalWrite(34, 1);
     break;
    case 5:               //escribe en el 7seg el numero 5
      digitalWrite(22, 1);
      digitalWrite(24, 0);
      digitalWrite(26, 1);
      digitalWrite(28, 1);
      digitalWrite(30, 0);
      digitalWrite(32, 1);
      digitalWrite(34, 1);
     break;
    case 6:               //escribe en el 7seg el numero 6
      digitalWrite(22, 1);
      digitalWrite(24, 0);
      digitalWrite(26, 1);
      digitalWrite(28, 1);
      digitalWrite(30, 1);
      digitalWrite(32, 1);
      digitalWrite(34, 1);
     break;
    case 7:              //escribe en el 7seg el numero 7
      digitalWrite(22, 1);
      digitalWrite(24, 1);
      digitalWrite(26, 1);
      digitalWrite(28, 0);
      digitalWrite(30, 0);
      digitalWrite(32, 0);
      digitalWrite(34, 0);
     break;
    case 8:              //escribe en el 7seg el numero 8
      digitalWrite(22, 1);
      digitalWrite(24, 1);
      digitalWrite(26, 1);
      digitalWrite(28, 1);
      digitalWrite(30, 1);
      digitalWrite(32, 1);
      digitalWrite(34, 1);
      break;
    case 9:               //escribe en el 7seg el numero 9
      digitalWrite(22, 1);
      digitalWrite(24, 1);
      digitalWrite(26, 1);
      digitalWrite(28, 1);
      digitalWrite(30, 0);
      digitalWrite(32, 1);
      digitalWrite(34, 1);
     break;
               
    default: 

      digitalWrite(22, 0);
      digitalWrite(24, 0);
      digitalWrite(26, 0);
      digitalWrite(28, 0);
      digitalWrite(30, 0);
      digitalWrite(32, 0);
      digitalWrite(34, 0);   
  }
}

void mostrar_um ()
{
  switch (uni_m) {
    case 0:                //escribe en el 7seg el numero 0
      digitalWrite(37, 1);
      digitalWrite(39, 1);
      digitalWrite(41, 1);
      digitalWrite(43, 1);
      digitalWrite(45, 1);
      digitalWrite(47, 1);
      digitalWrite(49, 0);
      break;
    case 1:                 //escribe en el 7seg el numero 1
      digitalWrite(37, 0);
      digitalWrite(39, 1);
      digitalWrite(41, 1);
      digitalWrite(43, 0);
      digitalWrite(45, 0);
      digitalWrite(47, 0);
      digitalWrite(49, 0);
     break;
    case 2:                //escribe en el 7seg el numero 2
      digitalWrite(37, 1);
      digitalWrite(39, 1);
      digitalWrite(41, 0);
      digitalWrite(43, 1);
      digitalWrite(45, 1);
      digitalWrite(47, 0);
      digitalWrite(49, 1);
     break;      
    case 3:               //escribe en el 7seg el numero 3
      digitalWrite(37, 1);
      digitalWrite(39, 1);
      digitalWrite(41, 1);
      digitalWrite(43, 1);
      digitalWrite(45, 0);
      digitalWrite(47, 0);
      digitalWrite(49, 1);
      break;
    case 4:               //escribe en el 7seg el numero 4
      digitalWrite(37, 0);
      digitalWrite(39, 1);
      digitalWrite(41, 1);
      digitalWrite(43, 0);
      digitalWrite(45, 0);
      digitalWrite(47, 1);
      digitalWrite(49, 1);
     break;
    case 5:               //escribe en el 7seg el numero 5
      digitalWrite(37, 1);
      digitalWrite(39, 0);
      digitalWrite(41, 1);
      digitalWrite(43, 1);
      digitalWrite(45, 0);
      digitalWrite(47, 1);
      digitalWrite(49, 1);
     break;
    case 6:               //escribe en el 7seg el numero 6
      digitalWrite(37, 1);
      digitalWrite(39, 0);
      digitalWrite(41, 1);
      digitalWrite(43, 1);
      digitalWrite(45, 1);
      digitalWrite(47, 1);
      digitalWrite(49, 1);
     break;
    case 7:              //escribe en el 7seg el numero 7
      digitalWrite(37, 1);
      digitalWrite(39, 1);
      digitalWrite(41, 1);
      digitalWrite(43, 0);
      digitalWrite(45, 0);
      digitalWrite(47, 0);
      digitalWrite(49, 0);
     break;
    case 8:              //escribe en el 7seg el numero 8
      digitalWrite(37, 1);
      digitalWrite(39, 1);
      digitalWrite(41, 1);
      digitalWrite(43, 1);
      digitalWrite(45, 1);
      digitalWrite(47, 1);
      digitalWrite(49, 1);
      break;
    case 9:               //escribe en el 7seg el numero 9
      digitalWrite(37, 1);
      digitalWrite(39, 1);
      digitalWrite(41, 1);
      digitalWrite(43, 1);
      digitalWrite(45, 0);
      digitalWrite(47, 1);
      digitalWrite(49, 1);
     break;
    
    default: 
      digitalWrite(37, 0);
      digitalWrite(39, 0);
      digitalWrite(41, 0);
      digitalWrite(43, 0);
      digitalWrite(45, 0);
      digitalWrite(47, 0);
      digitalWrite(49, 0);   
  }
}

void mostrar_dm ()
{
  switch (dec_m) {
    case 0:                //escribe en el 7seg el numero 0
      digitalWrite(36, 1);
      digitalWrite(38, 1);
      digitalWrite(40, 1);
      digitalWrite(42, 1);
      digitalWrite(44, 1);
      digitalWrite(46, 1);
      digitalWrite(48, 0);
      break;
    case 1:                 //escribe en el 7seg el numero 1
      digitalWrite(36, 0);
      digitalWrite(38, 1);
      digitalWrite(40, 1);
      digitalWrite(42, 0);
      digitalWrite(44, 0);
      digitalWrite(46, 0);
      digitalWrite(48, 0);
     break;
    case 2:                //escribe en el 7seg el numero 2
      digitalWrite(36, 1);
      digitalWrite(38, 1);
      digitalWrite(40, 0);
      digitalWrite(42, 1);
      digitalWrite(44, 1);
      digitalWrite(46, 0);
      digitalWrite(48, 1);
     break;      
    case 3:               //escribe en el 7seg el numero 3
      digitalWrite(36, 1);
      digitalWrite(38, 1);
      digitalWrite(40, 1);
      digitalWrite(42, 1);
      digitalWrite(44, 0);
      digitalWrite(46, 0);
      digitalWrite(48, 1);
      break;
    case 4:               //escribe en el 7seg el numero 4
      digitalWrite(36, 0);
      digitalWrite(38, 1);
      digitalWrite(40, 1);
      digitalWrite(42, 0);
      digitalWrite(44, 0);
      digitalWrite(46, 1);
      digitalWrite(48, 1);
     break;
    case 5:               //escribe en el 7seg el numero 5
      digitalWrite(36, 1);
      digitalWrite(38, 0);
      digitalWrite(40, 1);
      digitalWrite(42, 1);
      digitalWrite(44, 0);
      digitalWrite(46, 1);
      digitalWrite(48, 1);
     break;
    case 6:               //escribe en el 7seg el numero 6
      digitalWrite(36, 1);
      digitalWrite(38, 0);
      digitalWrite(40, 1);
      digitalWrite(42, 1);
      digitalWrite(44, 1);
      digitalWrite(46, 1);
      digitalWrite(48, 1);
     break;
    case 7:              //escribe en el 7seg el numero 7
      digitalWrite(36, 1);
      digitalWrite(38, 1);
      digitalWrite(40, 1);
      digitalWrite(42, 0);
      digitalWrite(44, 0);
      digitalWrite(46, 0);
      digitalWrite(48, 0);
     break;
    case 8:              //escribe en el 7seg el numero 8
      digitalWrite(36, 1);
      digitalWrite(38, 1);
      digitalWrite(40, 1);
      digitalWrite(42, 1);
      digitalWrite(44, 1);
      digitalWrite(46, 1);
      digitalWrite(48, 1);
      break;
    case 9:               //escribe en el 7seg el numero 9
      digitalWrite(36, 1);
      digitalWrite(38, 1);
      digitalWrite(40, 1);
      digitalWrite(42, 1);
      digitalWrite(44, 0);
      digitalWrite(46, 1);
      digitalWrite(48, 1);
     break;
               
    default: 
      digitalWrite(36, 0);
      digitalWrite(38, 0);
      digitalWrite(40, 0);
      digitalWrite(42, 0);
      digitalWrite(44, 0);
      digitalWrite(46, 0);
      digitalWrite(48, 0);   
  }
}
