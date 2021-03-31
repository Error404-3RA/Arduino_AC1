# Error 404 - AC1 

## PROJETO
Fomos contratados por uma farmacêutica responsável por produzir doses de vacinas para realizarmos a automoção de seu chão de fábrica.
Aqui você encontrará a documentação do projeto e short bio dos integrantes!

![](https://github.com/Error404-3RA/Arduino_AC1/blob/main/Ac1-esquema.png)

Montagem por: Lourenne Vieira

## INTEGRANTES
**Jennifer Abigail Margiotta Lamonica Crespo**

![](https://github.com/Error404-3RA/Arduino_AC1/blob/main/WhatsApp%20Image%202021-03-28%20at%2014.54.28.jpeg)

Oie eu sou a Jennifer, tenho 16 anos entrei no Módulo no primeiro ano do Ensino Médio e eu serei responsável pela parte da codificação da leitura do sensor de luminosidade, o seu teste e a parte dos comentários que será feita ao decorrer do projeto.

**Lourenne Vieira Flavio**

![](https://github.com/Error404-3RA/Arduino_AC1/blob/main/Lourenne.jfif)

Oie eu sou a Lourenne, tenho 16 anos entrei no Módulo no primeiro ano do Fundamental I e eu serei responsável pela parte do circuito no TinkerCad, a codificação do segundo botão e de parte dos comentários que serão feitos ao decorrer do projeto.

**Rafael Zerbini Palos**

![](https://github.com/Error404-3RA/Arduino_AC1/blob/main/WhatsApp%20Image%202021-03-28%20at%2014.57.48.jpeg)

Oie eu sou o Rafael, tenho 16 anos entrei no Módulo no terceiro ano do Fundamental I e eu serei responsável pela correção de erros do código, a leitura do sensor de temperatura, seu teste e de parte dos comentários que serão feitos ao decorrer do projeto.


## DOCUMENTAÇÃO DO PROJETO
- Ajuste dos erros no código principal.
- Documentação do projeto do github no README.md abordando todos os pontos necessários.
- No README.md adicionando nome do grupo fotos e short bio de cada integrante.
- Todos os pontos do código devem estar comentados corretamente informando o que se passa ali.
- Usar do Serial o max possível, sempre informando os estados da produção e demais itens.
- Implementação das funcionalidades faltantes.

## COMPONENTES DO CIRCUITO 
- 1	Arduino Uno R3
- 1	Vermelho LED
- 6	1 kΩ Resistor
- 1	Verde LED
- 1	Azul LED
- 2	Botão
- 1	Fotorresistor
- 1	Sensor de temperatura [TMP36]

## FUNCIONALIDADES DO PROJETO
1. Um botão para ligar e outro para desligar a produção indicados pelo led vermelho.
- como fizemos: acrescentamos um botão e ligamos os dois ao LED vermelho, aplicamos a função para que ao apertar um botão o LED ligue e ao apertar outro o LED apague.
2. Leitura do sensor de temperatura e teste, ao atingir 15℃ o led azul deve acender, deve ser informado via serial e somente apagar o led quando a temperatura for mais baixa que isso.
