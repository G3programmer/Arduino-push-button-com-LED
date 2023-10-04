#define Pino_botao 10
#define Pino_LED 8

bool Estado = LOW;

int Estado_Botao = 0;

void setup () {
  
  pinMode(Pino_LED, OUTPUT);
  
pinMode(Pino_botao, INPUT_PULLUP);
  
  }
  
  void loop() {
    Estado_Botao = digitalRead(Pino_botao);
    
    if (Estado_Botao == LOW) {
      
      Estado = !Estado;
      
      digitalWrite(Pino_LED, Estado);
      
      while (digitalRead(Pino_botao) == LOW);
      delay(10);
    }
    
  }
