
TRABALHO PR�TICO - ETAPA 2

. Esta etapa tem como objetivo implementar algoritmos de acesso a registros de 
um arquivo por meio de �ndices armazenados em disco. 

. Implementar �ndices baseados em �rvores B+ ou Hash Din�mico. 

. SEJA UM ARQUIVO COM REGISTROS DE TAMANHO FIXO NO SEGUINTE FORMATO: 
	
	REGISTRO(50)  
	. NSEQ   INT(4)   
	. TEXT   CHAR(46) 

	Considere dois �ndices: 
	1) Chave do �ndice: NSEQ
           Chave prim�ria 
           Alternativa 1 (Entrada de dados no �ndice �: o pr�prio Registro)

	2) Chave do �ndice: TEXT
	   Chave duplicada
	   Alternativa 3 (Entrada de dados no �ndice �: chave + lista de RID)

. PEDE-SE
	ESCOLHA UMA ESTRUTURA DE DADOS (�RVORE B+ OU HASH DIN�MICO) E IMPLEMENTE
	AS OPERA��ES DE BUSCA, INSER��O E REMO��O DE REGISTROS TENDO COMO 
	ENTRADA UMA CHAVE

. OBS: OS FORMATOS DE REGISTROS E P�GINAS DOS ARQUIVOS DE DADOS E �NDICES 
DEVEM SEGUIR A DESCRI��O NO LIVRO-TEXTO OU DOS SLIDES APRESENTADOS EM 
SALA DE AULA. 

-------
O QUE ENTREGAR E O VALOR DE CADA ITEM ENTREGUE

I) Um aluno do grupo deve entregar, pelo MS Teams, o c�digo fonte [Valor 2 pontos]

II) Um aluno do grupo deve entregar, pelo MS Teams, um exemplo de cada 
    arquivo de �ndice e de dados contendo, no m�ximo, 100KB em cada arquivo [Valor 2 pontos].
   Este aluno deve indicar os componentes do grupo.

III) Todos os alunos do grupo devem entregar, de forma individual, uma descri��o das 
    estrutura de dados implementadas, ou seja, um documento descrevendo o formato da p�gina
    e dos registros armazenados em disco para todas as estruturas de dados e �ndices. 
    No relat�rio o aluno deve indicar a refer�ncias aos formatos utilizados (slide do professor
    ou se��o do livro texto em que se baseou para definir os formatos) [Valor 3]. 

IV) a crit�rio do professor poder� ser solicitada uma apresenta��o de execu��o do c�digo para
    auxiliar as avalia��es dos itens acima.

------
---