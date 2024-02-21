//declaração de variáveis de entrada
int N1;
int N2;
int N3;

//declaração da variável de saída
int S;

void setup() {
  // Configuração inicial do sistema
  //Será executada apenas no início

  //Iniciando a comunicação com o monitor serial
  Serial.begin(9600);

  N1 = 1;
  N2 = 2;
  N3 = 3;
  S = 0;

  //Processamento das entradas
  S = N1 + N2 + N3;
}

void loop() {
  //Código que será executado repetidamente
  Serial.print("Hoje é o último dia do mês de janeiro !!!"); //Mostra o calor da conta 
  delay(1000);//Espera um segundo antes de seguir o loop 
}
