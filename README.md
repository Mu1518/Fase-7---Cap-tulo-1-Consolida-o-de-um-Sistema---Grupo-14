# FIAP - Faculdade de Informática e Administração Paulista

<p align="center">
<a href= "https://www.fiap.com.br/"><img src="assets/logo-fiap.png" alt="FIAP - Faculdade de Informática e Admnistração Paulista" border="0" width=40% height=40%></a>
</p>

<br>

# PROJETO FASE 6 – O COMEÇO DA REDE NEURAL

![redeneural](https://github.com/Mu1518/FIAP---Fase-6---Cap-tulo1-Despertar-da-Resdes-Neurais/blob/main/assets/r_neural.jpeg)

## Nome do grupo - Grupo 28

## 👨‍🎓 Integrantes: 
- <a href="https://www.linkedin.com/in/iolanda-helena-fabbrini-manzali-de-oliveira-14ab8ab0">Iolanda Helena Fabbrini Manzali de Oliveira</a>
- <a href="https://www.linkedin.com/company/inova-fusca">Murilo Carone Nasser</a> 
- <a href="https://www.linkedin.com/in/pedro-eduardo-soares-de-sousa-439552309">Pedro Eduardo Soares de Sousa</a> 
- <a href="https://www.linkedin.com/in/jonatasgomes">Jônatas Gomes Alves</a>

## 👩‍🏫 Professores:
### Tutor(a) 
- <a href="https://www.linkedin.com/in/leonardoorabona">Leonardo Ruiz Orabona</a>
### Coordenador(a)
- <a href="https://www.linkedin.com/company/inova-fusca">Andre Godoi Chaviato</a>

## 🗃️ Sobre o Projeto

Este projeto visa explorar a aplicação prática de técnicas de visão computacional para a FarmTech Solutions, inicialmente focando na detecção de objetos personalizados utilizando a arquitetura YOLO. Adicionalmente, o projeto realiza uma análise comparativa com abordagens alternativas, como a YOLO original e uma CNN treinada do zero para classificação de imagens, avaliando seus desempenhos em diferentes aspectos. 

O objetivo é demonstrar o potencial e as nuances de diferentes soluções de visão computacional em cenários práticos.

## 📁 Estrutura de pastas

- **/docs/entrega_1** - Arquivos .txt
- **/src/entrega_1** - Código-fonte (.ipynb, .yaml)
- **/assets/entrega_1** - Imagens de treino e teste, arquivos .csv

 ## 💻 Tecnologias utilizadas
 
[![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)](#)
[![Google Colab](https://img.shields.io/badge/Google%20Colab-%23F9A825.svg?style=for-the-badge&logo=googlecolab&logoColor=white)](#)
![YOLOv5](https://img.shields.io/badge/YOLO-v5-ffcc00?style=for-the-badge)
![YOLOv12](https://img.shields.io/badge/YOLO-v12-90ee90?style=for-the-badge&labelColor=000000)



## ENTREGÁVEL 1

## 📜 Descrição

Esta entrega foca na construção de  criação de um  um modelo funcional  de visão computacional para a FarmTech Solutions utilizando a arquitetura YOLOv5 para a detecção personalizada de objetos de um dataset devidamente rotulados, treinados, validados e testados. 
 
## 🔧 Como executar o Projeto

  1. Acessar o notebook atraves do link [Notebook_yolov12](https://colab.research.google.com/drive/1H_kKbdGa4h-0ZwlKC4BMwtZSMGpK1G5-?usp=sharing)
   
Observação: Link do Google Colab para acesso a leitura do notebook
  
  2. Selecione no campo 'Ambiente de execução" como deseja executar o programa
     
![Ambiente](assets/ambi_execucao.png)
     
  3. Visualize os resultados do treinamento, incluindo amostras de 8 imagens por época com os respectivos recortes e precisão.
     
  4. Analise a performance do modelo por época, comparando as métricas mAP50 e mAP50-95 para identificar a melhor configuração.
     
  5. Realize a análise do código e verifique suas conclusões e comparações.
       
## 🎥 Demonstração

[Link para vídeo demonstrativo no Youtube](colocar o link do videodo entregavel1)    

# ENTREGÁVEL 2

### 📜 Descrição

A Entrega 2 desenvolvimento de dois sistemas de detecção de objetos distintos, ambos fundamentados na base de dados estabelecida na Entrega 1. O primeiro sistema consiste na implementação de um modelo de visão computacional utilizando a arquitetura YOLOv5. Será desenvolvida uma Rede Neural Convolucional (CNN) customizada, treinada igualmente com o conjunto de dados da etapa anterior. Posteriormente análisar detalhadamente os resultados obtidos por ambas as arquiteturas (YOLOv5 e CNN) em relação ao desempenho apresentado na Entrega 1.
 
## 🔧 Como executar o Projeto

### Yolo V5s

  1. Acessar o notebook atraves do link [Notebook_yolov5](https://colab.research.google.com/drive/120g7qoAFt2sa-KCyej0DQ11uGFxjksii?usp=sharing)
   
     Observação: Link do Google Colab para acesso a leitura do notebook
  
  2. Selecione no campo 'Ambiente de execução" como deseja executar o programa, conforme mostrado na seção "como executar o projeto" do entregável 1.
     
  3. Visualize os resultados do treinamento, incluindo amostras de 8 imagens por época com os respectivos recortes e precisão.
     
  4. Analise a performance do modelo por época, comparando as métricas mAP50 e mAP50-95 para identificar a melhor configuração.
     
  5. Realize a análise do código e verifique suas conclusões e comparações.

### CNNs

 * Acessar o notebook através do link [notebook_cnn](https://colab.research.google.com/drive/1tSQYOzSsNazYZnlwf8RVcLsDN0feX3A_?usp=sharing)

 * Selecione no campo “Ambiente de execução” como deseja executar o programa, conforme mostrado na seção “como executar o projeto” do entregável 1.

 * Execute o treinamento da CNN e visualize a acurácia do modelo, época a época, nos dados de treino e de validação.

 * Visualize o desempenho geral do modelo baseado na acurácia e na função de perda (loss)

 * Visualize a predições realizadas pelo modelo em 8 imagens de teste


## 🎥 Demonstração

[Link para vídeo demonstrativo no Youtube](https://youtu.be/Q5CVTFYaELo)    

## 📋 Licença

Este projeto está licenciado sob a licença MIT. Para mais detalhes, consulte o arquivo LICENSE no repositório.


<p align="center">
<strong>Projeto desenvolvido para o curso de Inteligência Artificial da FIAP.</strong>
</p>
