
/ *
Desarrollador: Ing. Mecatronico Moises Humberto Olguin Martinez
Controlador de motor de pasos con 3 botones del PC
d = adelante
r = reversa
x = activar 1 paso
* /

int dir = 7 ; 
int stp = 8 ;
String letra;

void setup() {
  //comunicacion serial bluetooth
  Serial.begin(9600);
  //ativar un paso
  pinMode(stp, OUTPUT); 
  //seleccionar la dirección
  pinMode(dir, OUTPUT); 
  
}

void loop() {

  while(Serial.available()){
    //guarda datos
  letra = char(Serial.read());
  Serial.println(letra);

  
  //direccion
  if(letra == "r"){
        digitalWrite(dir, HIGH);
        delayMicroseconds(20);
  }

    
  if(letra == "d"){
        digitalWrite(dir, LOW);
        delayMicroseconds(20);
  }


  //paso
  if(letra == "x"){
      for(int i=0 ; i<100 ; i++){
        digitalWrite(stp, HIGH);
        delayMicroseconds(3000);
        digitalWrite(stp, LOW);
  }
  }


  
}

  
}
