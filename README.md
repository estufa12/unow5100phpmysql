# unow5100phpmysql
aprendizado w5100 postando dados em um banco de dados


Retirado de:

https://www.youtube.com/watch?v=hcn083a_hmY


Corrigido. Faltou o HTTP 1.1







RESOLVIDO

Bom tarde pessoal!

Estou tentando fazer com que meu w5100 "chame" o seguinte endereço:

verde .96 .lt /arduino/salvardados.php?sensor1=33.3&sensor2=44.4&sensor3=55.5

Desta forma serão gravados os 3 valores no banco de dados mysql.

Se eu faço isso no navegador, funciona blz, sempre grava os dados, mas não consegui fazer funcionar com o ethernet.

Estou usando como base essa video aula. https://www.youtube.com/watch?v=hcn083a_hmY

Aqui estão os codigos do arduino e do php:

https://github.com/andremroch/unow5100phpmysql

O servido é a Hostinger, tenho uma conta gratuita e um paga.

Segue o codigo do arduino.


if (client.connect(server, 80)) {
Serial.println("connected");

client.println("GET /arduino/salvardados.php?sensor1=11.1&sensor2=22.1&sensor3=33.1");

client.println("Host: VERDEponto96pontoLT");

client.println("Connection: close");

client.println();

} else {

Serial.println("connection failed");
}
CurtirComentarCompartilhar
Comentários
Andre Rocha
Andre Rocha o facebook disse que os links são maliciosos, por isso tiver que escrever por extenso.
Curtir · Responder · 7 h
Pedro Henrique
Pedro Henrique o certo não seria digitar a url completa no get ?
Descurtir · Responder · 1 · 6 h
Ocultar 26 respostas
Andre Rocha
Andre Rocha tipo:

client.println("GET verde,96,lt/arduino/salvardados.php?sensor1=11.1&sensor2=22.1&sensor3=33.1");
Curtir · Responder · 5 h
Andre Rocha
Andre Rocha as virgulas é pq o facebook não ta deixando colocar o link
Curtir · Responder · 5 h
Andre Rocha
Andre Rocha connecting...
connection failed...Ver mais
Curtir · Responder · 5 h
Andre Rocha
Andre Rocha https://github.com/.../unow510.../blob/master/tentativa1.ino
andremroch/unow5100phpmysql
unow5100phpmysql - aprendizado w5100 postando dados em um banco de dados
github.com
Curtir · Responder · Remover visualização · 5 h
Andre Rocha
Andre Rocha este conecta, mas não envia.
Curtir · Responder · 5 h
Andre Rocha
Andre Rocha https://github.com/.../unow510.../blob/master/tentativa2.ino
andremroch/unow5100phpmysql
unow5100phpmysql - aprendizado w5100 postando dados em um banco de dados
github.com
Curtir · Responder · Remover visualização · 5 h
Andre Rocha
Andre Rocha connecting...
connected...Ver mais
Curtir · Responder · 5 h
Pedro Henrique
Pedro Henrique Tira o print ln que tem o "Host"
Descurtir · Responder · 1 · 5 h
Andre Rocha
Andre Rocha connecting...
connected...Ver mais
Curtir · Responder · 5 h
Andre Rocha
Andre Rocha mesma coisa.
Curtir · Responder · 5 h
Andre Rocha
Andre Rocha este é o php que "recebe"
Curtir · Responder · 5 h
Andre Rocha
Andre Rocha <?php

include("conecta.php"); ...Ver mais
Curtir · Responder · 5 h
Andre Rocha
Andre Rocha verde , 96 , lt/arduino/salvardados.php
Curtir · Responder · 5 h
Pedro Henrique
Pedro Henrique já tentou usar o método POST ao invés do GET ? o que faria até mais sentido
Curtir · Responder · 4 h
Pedro Henrique
Pedro Henrique http://stackoverflow.com/.../post-request-on-a-webserveur... - http://forum.arduino.cc/index.php?topic=145277.0
POST request on a webserveur using Arduino Ethernet shield
stackoverflow.com
Curtir · Responder · 4 h
Andre Rocha
Andre Rocha na verdade estou aprendendo como enviar.
estou tentado usar este servidor da hostinger. tenho uma conta paga e outra gratuita.
Curtir · Responder · 4 h
Andre Rocha
Andre Rocha usando o data.sparkfun.com consigo colocar este dht11 online.

agora quero conseguir enviar p meu banco de dados
data.sparkfun.com
We want to bring a dose of reality to the Internet of Things hype. data.sparkfun.com is a free, robust service for use with all of your projects. The underlying engine is open source so if you don't want to use our servers you can install phant on the server of your choice.
data.sparkfun.com
Curtir · Responder · Remover visualização · 4 h
Andre Rocha
Andre Rocha vc por acaso ja usou o servico da hostinger? ou de outra empresa? trm algum p indicar?
Curtir · Responder · 4 h
Andre Rocha
Andre Rocha https://data.sparkfun.com/streams/dZ5mnDWwgVT3AogJN3Za
data.sparkfun.com - Stream dZ5mnDWwgVT3AogJN3Za
data.sparkfun.com
Curtir · Responder · Remover visualização · 4 h
Andre Rocha
Andre Rocha este é um outro ethernet com um dht11 e um ldr, que estão rodando aqui, quero fazer o mesmo, só que usando o meu banco de dados
Curtir · Responder · 4 h
Pedro Henrique
Pedro Henrique já usei o hostinger mas não com essa finalidade, https://github.com/.../compare/master...pedrohs:patch-1
andremroch/unow5100phpmysql
unow5100phpmysql - aprendizado w5100 postando dados em um banco de dados
github.com
Descurtir · Responder · 1 · 4 h
Andre Rocha
Andre Rocha funcionou!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!1
Curtir · Responder · 1 · 4 h
Andre Rocha
Andre Rocha obrigado cara!
Curtir · Responder · 1 · 4 h
Andre Rocha
Andre Rocha Valeu demais a ajuda!!!!!!
Curtir · Responder · 1 · 4 h
Andre Rocha
Andre Rocha connecting...
connected
HTTP/1.1 200 OK...Ver mais
Curtir · Responder · 1 · 4 h
Pedro Henrique
Pedro Henrique e era uma coisa tão simples kkkkkkkkkkk, de boa cara, sucesso


