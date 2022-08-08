

int valorldr = 0;
int pinoLed = 3;
float valorPO = 0;
int temp = 0;
void setup() {   
   pinMode(A0, INPUT); // ENTRADA ANALOGICA LDR
   Serial.begin(9600);
   pinMode(3, OUTPUT); // SAIDA LED DIGITAL
   pinMode(A4, INPUT); // ENTRADA ANALOGICA POTENCIOMETRO 
  }
void loop(){
    valorPO = analogRead(A4); // LE O VALOR DO POTENCIOMETRO
    valorldr = analogRead(A1); // LE O VALOR DO LDR
    valorldr = constrain(valorldr, 0, 200); // DELIMITA OS VALORES DO LDR
    valorPO = constrain(valorPO, 0, 200); // DELIMITA OS VALORES DO POTENCIOMETRO
    valorldr = map(valorldr, 0,200,200,0); // INVERTE OS VALORES DO LDR PARA ACENDER A LED QUANDO ESCURO
    analogWrite(pinoLed, valorldr); // PASSA O VALOR LDR PARA O LED 
    Serial.println(valorPO); // MOSTRA O VALOR DO POTENCIOMETRO
    delay(200);
    temp = valorPO * 30; // VARIAVEL PARA DEFINIR O DELAY CONFORME O VALOR LIDO NO POTENCIOMETRO
    if (valorldr > 150) {
      delay(temp); 
      
      } 
    
    }
  

  
