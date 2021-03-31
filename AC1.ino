//variaveis da led

const int vermelho = 5;
const int verde = 6;
const int azul = 7;
// colocando o ponto e virgula


//colocando o segundo botão
const int botao1 = 2;
const int botao2 = 3;
unsigned long lastDebounceTime1 = 0;
unsigned long lastDebounceTime2 = 0;
const int botaoDelay = 100;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
 
  // correção de saida para output
  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  
 Serial.begin(9600);
	
  Serial.println("AC1 - Meu Primeiro Projeto 2021");
  Serial.println("                           V1.0");
  Serial.println("Grupo: ERROR 404          ");
}

void loop()
{
  //toque do botão 1
  if((millis() - lastDebounceTime1) > botaoDelay && digitalRead(botao1)){
  	Serial.println("botao 1 apertado");
    ledVermelho(true);
  	lastDebounceTime1 = millis();
  }  
   
 //toque do botão 2
  if((millis() - lastDebounceTime1) > botaoDelay && digitalRead(botao2)){
  	Serial.println("botao 2 apertado");
    ledVermelho(false);
  	lastDebounceTime1 = millis();
	  
  }
  //mudança de temperatura de 30 para 15
  //if temperatura
  if(getTemperatura() > 15){
    ledAzul(true);//se a temperatura for maior que 15 LED acende
  Serial.println("temperatura alta");//imprime a leitura
  }else{
    ledAzul(false);//se for menor que 15 LED apaga
  Serial.println("temperatura baixa");//imprime a leitura
    // troca de falso para false
  }
//alteração da luminosidade
 if(getLuminosidade() > 5){
   ledVerde(true); //led liga quando a luminosidade for maior que 5
 Serial.println("luminosidade alta"); //imprime a leitura
 }else{
    ledVerde(false); //led desliga quando a luminosidade é abaixo de 5
 Serial.println("luminosidade ideal"); //imprimi a leitura 
}
  delay(10);
}

void ledVermelho(bool estado){
	digitalWrite(vermelho,estado);
}
void ledVerde(bool estado){ // add o valor true ou false na varialvel 
        digitalWrite(verde,estado);//ativa o valor true ou false
}
void ledAzul(bool estado){ //add o valor true ou false na variavel
	digitalWrite(azul,estado);//ativa o valor true ou false
}
//medição de temperatura em celsius
int getTemperatura(){
  	int temperaturaC;
	temperaturaC = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125);
	//leitura da entrada do censor e conversão para graus celsius
  	return temperaturaC;
} 

int getLuminosidade(){
  	int luminosidade;
	luminosidade = map(analogRead(A1), 6, 619, -3, 10);
  	return luminosidade;
}
