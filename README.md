# FIAP - Faculdade de Informática e Administração Paulista

<p align="center">
<a href= "https://www.fiap.com.br/"><img src="assets/logo-fiap.png" alt="FIAP - Faculdade de Informática e Admnistração Paulista" border="0" width=40% height=40%></a>
</p>

<br>

# Nome do projeto - Despertar das Redes Neurais



## Nome do grupo - Grupo 22

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

# ENTREGA 1

## 📜 Descrição

A Entrega 1 consiste na criação de um sistema de visão computacional usando o yolo que desmontre o pótencial e acurácia.
 
 ## 💻 Tecnologias utilizadas
 
[![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)](#)
[![Google Colab](https://img.shields.io/badge/Google%20Colab-%23F9A825.svg?style=for-the-badge&logo=googlecolab&logoColor=white)](#)


## 📁 Estrutura de pastas

- **/docs/entrega_1** - Documentação do projeto
- **/src/entrega_1** - Código-fonte 
- **/assets/entrega_1** - Prints e arquivos csv

## 🔧 Como executar o Projeto

  1. Acessar o notebook atraves do link [Entrega_1](https://colab.research.google.com/drive/1H_kKbdGa4h-0ZwlKC4BMwtZSMGpK1G5-?usp=sharing)
     Observação: Link do Google Colab com acesso apenas para leitura
  2. Selecione no campo 'Ambiente de execução" como deseja executar o programa
     

  4. Após selecionar o ambiente de excução, podemos visualizar os treinamento e resultados apresentados
  5. Além disso é possivel ver em cada época uma amostra de amostra de 8 imagens e entender qual foi o recorte feito pelo programa e a precisão a presentada
  6. Visando um intendimento claro por parte do usuário fizemos uma análise dos resultados e com base nisso com paramos as épocas, definindo qual é a melhor para esse modelo com base nas métrica mAP50 e mAp50-95
  7. Agora é a sua vez de análisar o código e fazer assuas análises

Passo 2: Identifique o Código Responsável pela "Área de Execução"

"Ambiente de Execução"

Passo 3: Entenda a Visualização de Treinamentos e Resultados (Ponto 3)

Procure por Código de Plotagem: Se os treinamentos e resultados são visualizados graficamente, procure por bibliotecas de plotagem sendo utilizadas no código. Em Python, bibliotecas comuns são Matplotlib, Seaborn e Plotly. Em JavaScript, podem ser Chart.js ou outras.
Analise a Lógica de Exibição: Veja como os dados (métricas de treinamento, perdas, acurácia, etc.) são processados e formatados para serem exibidos. Observe como os dados são carregados e passados para as funções de plotagem.
Passo 4: Investigue a Amostra de Imagens por Época (Ponto 4)

Procure por Código de Manipulação de Imagens: Se o projeto envolve visão computacional e exibe amostras de imagens, procure por bibliotecas de processamento de imagens como Pillow (Python) ou funcionalidades nativas do navegador (JavaScript).
Entenda o Recorte e a Precisão: Analise o código que determina qual parte da imagem é mostrada como "recorte" e como a "precisão apresentada" é calculada e associada a essa amostra. Isso pode envolver a análise de arquivos de log, metadados ou resultados da inferência do modelo.
Passo 5: Compreenda a Análise e Comparação de Épocas (Ponto 5)

Localize o Código de Avaliação: Procure por funções ou scripts que calculam as métricas mAP50 e mAP50-95. Essas métricas são comuns em tarefas de detecção de objetos.
Analise a Lógica de Comparação: Veja como os resultados dessas métricas são armazenados para diferentes épocas e como o código compara esses valores para determinar a "melhor época". Pode haver lógica para identificar picos, tendências ou um valor ótimo com base nessas métricas.
Passo 6: Faça Sua Análise do Código (Ponto 6)

Leia o Código com Atenção: Comece lendo os arquivos que você identificou nos passos anteriores. Tente entender a estrutura geral do código, as funções definidas e como elas interagem.
Procure por Comentários e Documentação: Um bom código geralmente possui comentários que explicam o que diferentes partes fazem. Se houver alguma documentação (arquivos README.md, guias, etc.), leia-os para obter um contexto maior.
Execute o Código Localmente (se possível): Se você tiver permissão e o ambiente configurado, executar o código localmente pode te ajudar a entender o fluxo e ver as funcionalidades em ação. Você pode usar ferramentas de debugging para inspecionar variáveis e o comportamento do programa.
Faça Perguntas Específicas: Se você encontrar partes do código que não entender, anote suas dúvidas. Você pode me perguntar sobre trechos específicos e eu farei o meu melhor para te ajudar a esclarecer.



       
## 🎥 Demonstração

[Link para vídeo demonstrativo no Youtube](https://youtu.be/Q5CVTFYaELo)    


---
# ENTREGA 2

### 📜 Descrição

A Entrega 2 desenvolvimento de dois sistemas de detecção de objetos distintos, ambos fundamentados na base de dados estabelecida na Entrega 1. O primeiro sistema consiste na implementação de um modelo de visão computacional utilizando a arquitetura YOLOv5. Será desenvolvida uma Rede Neural Convolucional (CNN) customizada, treinada igualmente com o conjunto de dados da etapa anterior. Posteriormente análisar detalhadamente os resultados obtidos por ambas as arquiteturas (YOLOv5 e CNN) em relação ao desempenho apresentado na Entrega 1.
 
 ## 💻 Tecnologias utilizadas
 
[![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)](#)
[![Google Colab](https://img.shields.io/badge/Google%20Colab-%23F9A825.svg?style=for-the-badge&logo=googlecolab&logoColor=white)](#)


## 📁 Estrutura de pastas

- **/docs/entrega_1** - Documentação do projeto
- **/src/entrega_1** - Código-fonte 
- **/assets/entrega_1** - Prints e arquivos csv

## 🔧 Como executar o Projeto

  1. Acessar o notebook atraves do link [Entrega_1](https://colab.research.google.com/drive/1mGIY150CzsRO05xwk_pjD1t94CauImdd?usp=sharing)
  2. Selecione no  campo 'Ambiente de execução" o modo para executar o código.

     * Observação: link do notebook com acesso restrito a leitura do código

     
## 🎥 Demonstração

[Link para vídeo demonstrativo no Youtube](https://youtu.be/Q5CVTFYaELo)    

## 📋 Licença

Este projeto está licenciado sob a licença MIT. Para mais detalhes, consulte o arquivo LICENSE no repositório.


<p align="center">
<strong>Projeto desenvolvido para o curso de Inteligência Artificial da FIAP.</strong>
</p>
