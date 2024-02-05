# My Custom Keyboard ⌨️

Sumário:
- [1 - Introdução](#1---introdução)
- [2 - Motivação e Construção do Projeto](#2---motivação-e-construção-do-projeto)
- [3 - Hardware](#3---hardware)
- [4 - Software](#4---software)

## 1 - Introdução

Este é um projeto de software e hardware, onde eu transformei um Redragon Mitra K551 em um teclado split, 100% customizável, com layers e por fim com direito à um componenete especial q é um mouse de analógicos q fiz para usar em conjunto com o teclado.

![image](https://github.com/PauloIVM/my-custom-keyboard/assets/59659732/e9e20eb4-6c2c-4bad-bd4b-35b1f91c0921)

## 2 - Motivação e Construção do Projeto

Há alguns meses eu comecei a me interessar bastante em masterizar minhas habilidades de digitação, uso de atalhos e etc. Contudo, a inércia de recorrer sempre ao mouse era (e ainda é rsrs) muito grande. Então, inicialmente eu montei apenas o mouse de analógicos, com a ideia de ter um mouse próximo das mãos q estão no teclado e que me incentivasse a não querer usá-lo em detrimento dos atalhos do teclado (se há alguma dúvida, a usabilidade desse mouse é bem inferior à de um mouse comum).

![image](https://github.com/PauloIVM/my-custom-keyboard/assets/59659732/aee006d4-4c1e-4a40-a4d0-c1c7c63bddaf)

Apenas esse dispositivo, contudo, não teve o efeito q eu gostaria. Ele era muito grande, ficava desconfortável e atrapalhava a digitar no teclado. Por alguns meses eu meio q abandonei o projeto; mas por fim me pareceu q esse mouse se encaixaria melhor em um teclado split.

Eu comecei a pesquisar mais sobre essa categoria de teclados, e a primeira coisa q me assustou foram os preços (na casa dos 1000 reais). Então por fim pensei: "O que me impede de jogar a eletrônica desse meu Redragon fora e reconstruir um teclado split a partir da carcaça dele? De custos eu teria os arduinos, diodos e fios, algo na casa dos 200 reais, e o resto dos materiais eu tiraria do próprio teclado".

E assim se foi. Conforme as imagens a seguir, eu removi a placa do meu teclado, parti a carcaça dele em dois, e por fim soldei os switches manualmente num arduino

![5](https://github.com/PauloIVM/my-custom-keyboard/assets/59659732/0fd848ed-57b7-4765-a498-79e50013f8d8)

![9](https://github.com/PauloIVM/my-custom-keyboard/assets/59659732/9fd293bc-f831-409d-8edb-e9a7e9b35a38)

![12](https://github.com/PauloIVM/my-custom-keyboard/assets/59659732/8dfde9fe-4ff4-49ca-bdb3-31ee560ed2f3)

![20](https://github.com/PauloIVM/my-custom-keyboard/assets/59659732/c3cea75e-0690-45f5-bbdb-cb2691cca659)

## 3 - Hardware

Segue-se abaixo o material que eu precisei para a montagem do hardware.

Ferramental utilizado para confecção e prototipagem:
- Estação de solda;
- Micro-retífica;

Peças compradas:
- 100 diodos 1n4148;
- Rolo de fio wire wrap 30awg;
- 3 arduinos Pro Micro - Atmega32u4;

Peças reutilizadas:
- Base metálica do Redragon Mitra K551;
- Keycaps do Redragon Mitra K551;
- Switches blues do Redragon Mitra K551;
- Joystics (removidos de uma manete de PS2 antiga);
- Estrutura de plástico do Redragon Mitra K551;

Alguns cuidados importantes com o hardware:
- Cuidado ao gravar o código fonte no Atmega32u4; devido à funcionalidade nativa de USB HID, gravar um código quebrado pode fazer com que o dispositivo não seja mais reconhecido pela IDE do arduino. Caso isso ocorra, não se desespere, há solução; o arduino assim que plugado fica cerca de 8 segundos aguardando até rodar o código fonte, você precisará gravar seu código nesse curto intervalo.

### 3.1 - Mouse

Como já mencionei, esse componente funciona como um mouse. Eu o configurei para que o analógico esquerdo realize scrolls horizontal e vertical; o analógico direito movimenta o cursor do mouse; dos três botões, um é o clique esquerdo do mouse, outro o direito, e por fim o terceiro ajusta a sensibilidade do mouse (como se fosse o ajuste de DPI de mouses tradicionais).

Cada um dos componentes de hardware possui um pdf com o circuito esquemático. O circuito esquemático do mouse [segue aqui](https://github.com/PauloIVM/my-custom-keyboard/blob/master/components/mouse/schematic.pdf).

![image](https://github.com/PauloIVM/my-custom-keyboard/assets/59659732/32c7e92b-7c6c-4cf5-81fb-abe280bd29d5)

A construção do esquemático acima se deu com muitas gambiarras rsrs. Construí um pequeno suporte de madeira para comportar os botões e os joystics. Soldei os fios no arduino e colei tudo com cola quente e cola super bonder + bicarbonato. Além disso, com o plástico de outras partes do teclado que seriam descartadas, eu fiz um "case" para comportar todo o componente e esconder os fios.

Um ponto a se destacar é que me ajudou muito ter uma microretífica, tanto para contruir a estrutura de madeira quanto a de plástico.

![image](https://github.com/PauloIVM/my-custom-keyboard/assets/59659732/ba36725c-196f-4b5b-ae77-f2a70d3f7711)

![image](https://github.com/PauloIVM/my-custom-keyboard/assets/59659732/8ea4626b-1666-4587-9f3c-a52034dbadba)

![image](https://github.com/PauloIVM/my-custom-keyboard/assets/59659732/0f9629cb-4dca-4c3a-8606-24b883370142)

### 3.2 - Teclado Esquerdo

![image](https://github.com/PauloIVM/my-custom-keyboard/assets/59659732/c116f7cd-754f-46b1-9c5a-7c60562bea03)

### 3.3 - Teclado Direito

![image](https://github.com/PauloIVM/my-custom-keyboard/assets/59659732/4b28bf3e-3866-454b-8ad3-f744b0947da3)
