waitUntil {!isNull player && player == player};
if(player diarySubjectExists "rules")exitwith{};

player createDiarySubject ["credits","Credits"];
player createDiarySubject ["farms","Preço dos farms"];
player createDiarySubject ["serverrules","Regras"];
player createDiarySubject ["recruitments","Recrutamentos"];
//player createDiarySubject ["rescues","Preço dos resgates"];
//player createDiarySubject ["civrules","Civilian Rules"];
//player createDiarySubject ["illegalitems","Illegal Activity"];
//player createDiarySubject ["gangrules","Gang Rules"];
//player createDiarySubject ["terrorrules","Terrorism Rules"];
player createDiarySubject ["controles","Controles"];

/*  Example
	player createDiaryRecord ["", //Container
		[
			"", //Subsection
				"
					TEXT HERE<br/><br/>
				"
		]
	];
*/

	player createDiaryRecord ["credits",
		[
			"ArmaLife",
				"
					ArmaLife is a GitHub project which aims to update and keep adding new features to the original 'Altis Life RPG' by Tonic.<br/><br/>
				"
		]
	];
	
	player createDiaryRecord ["farms",
		[
			"Preço dos Farms",
			
				"
				Farms Legais<br/><br/>
				1. Maça: 150<br/>
				2. Pêssego: 170<br/>
				3. Ferro: 1.900<br/>
				4. Cobre: 2.000<br/>
				5. Pedra: 2.550<br/>
				6. Sal: 3.000<br/>
				7. Petróleo: 3.150<br/>
				8. Areia: 3.200<br/><br/>
			
				Farms Ilegais<br/><br/>
				1.Heroina: 5.000<br/>
				2.Maconha: 5.000<br/>
				3.Cocaina: 5.400<br/>
				4.Diamante: 5.800<br/><br/>
				A barra de ouro só é adquirida em assalto à reserva.<br/><br/>
				Barra de Ouro: 95000<br/><br/>
				"
		]
	];
	
	player createDiaryRecord ["serverrules",
		[
			"Regras Gerais",
				"
				
				1. Safezones: São consideradas Safezones todas as areas demarcadas com um circulo.<br/>
				2. RDM: É considerado RDM matar sem motivo qualquer player que não tenha chance de se defender ou não souber a razão do dano. O player que relatar tal ato deverá apresentar printscreens.<br/>
				3. Bullying e assédio não são aceitaveis em nosso servidor.<br/>
				4. Printscreens: Éimportante tirar printscreens (F12) para provar que esta cumprindo as regras, caso contrário, não haverá como reportar.<br/>
				5. Ressarcimentos: Todo e qualquer tipo de ressarcimento só será dado a players no ts.<br/>
				6. Prejuízos causados por ataques DDos: Nosso servidor possui proteção anti DDos, mas em caso de quedas relacionadas a isso todo e qualquer prejuízo será ressarcido, desde que comprovado.<br/>
				7. O Objetivo da Polícia: Antes de mais nada, o objetivo da polícia é prender players, apreender veículos, mas em muitos casos haverá necessidade de ser utilizada força letal, fique esperto<br/><br/>
				"
		]
	];
	
	player createDiaryRecord ["serverrules",
		[
			"Resgates",
				"
				1. O rebelde que esteja praticando algum ato ilegal poderá ter seu veículo apreendido pela policia.<br/>
				2. Após realizada a apreensão e o veículo estiver em uma área segura, poderá ser solicitado o resgate deste.<br/>
				3. No caso de negativa do pagamento por parte do proprietário, o veículo será destruido.<br/>
				4. O cop que tiver seu veículo roubado por um rebelde ou civil, deverá sempre realizar o pagamento do resgate.<br/>
				5. Tabela de valores:<br/><br/>
				==============CARROS==============<br/>
				Quadriciclo: 4.200<br/>
				Hatchback: 16.000<br/>
				Hatchback Sport: 36.000<br/>
				Offroad: 7.800<br/>
				SUV: 21.000<br/>
				Caminhão Baú: 60.000<br/><br/>
				==============CAMINHÕES==============<br/>
				Transportador Zamak Aberto: 90.000<br/>
				Transportador Zamak Coberto: 120.000<br/>
				Transportador Tempest Aberto: 150.000<br/>
				Transportador Tempest Coberto: 168.000<br/>
				Transportador HEMTT Aberto: 165.000<br/>
				HEMTT Box: 285.000<br/>
				Strider: Sem Negociação.<br/><br/>
				==============HELICÓPTEROS==============<br/>
				M-H9 (HummingBird): 1.200.000<br/>
				M-H9 (HummingBird Striped): 720.000<br/><br/>
				==============VEÍCULOS DA COP===========<br/>
				Terrestre (diversos): 40.000<br/>
				Strider: 200.000<br/>
				Helicóptero: 200.000.<br/><br/>
				"
		]
	];
	
	player createDiaryRecord["serverrules",
		[
			"Regras Especificas",
				"
				
				1. Policiais e civis podem trocar tiros se houver razão para tal. Como alguém ter cometido algum crime.<br/>
				2. Se você morrer em um fogo cruzado, isso não é considerado RDM.<br/>
				3. Matar alguém para se proteger ou proteger terceiros sob clara ameaça não é RDM.<br/>
				4. Não existe vingança após a morte, MORREU E FOI RESSUSCITADO é NOVA VIDA.<br/>
				5. Denunciar players que sejam suspeitos de hack/dupe/glichts.<br/>
				6. Denunciar a presença de players já banidos anteriormente do servidor.<br/>
				7. Cada Policial deve usar as Armas de sua Patente, precisam ficar satisfeitos com o que tem e saber jogar com seus devidos equipamentos.<br/>
				===================================================================<br/>
				CIVIL<br/><br/>
				1. O civil que morrer e for ressuscitado e que estiver em farm, processador ou vendedor de farms legais será ressuscitado e terá o direito de escolher se quer ou não ser levado ao hospital.<br/>
				2. Obrigatório logar no TS (TeamSpeak) do server durante o jogo ts3: *****.<br/>
				3. Todos os civis devem portar suas armas dentro da mochila quando estiverem em uma safezone.<br/>
				4. Os civis pegos portando arma fora da mochila estarão sujeito à multa e/ou prisão.<br/>
				===================================================================<br/>
				REBELDE<br/><br/>
				1. REBELDE tem o direito de agir como achar melhor em relação a abordagem policial ou a outros rebeldes, mas atente-se ao tratar com civis, respeite as regras.<br/>
				2. O REBELDE que for ressuscitado terá que obrigatoriamente, guardar as armas e acompanhar o médico até o hospital, onde iniciará sua nova vida.<br/>
				3. O REBELDE que for visto pela polícia e estiver em cidades principais (safezones), poderá ser TEZADO pela polícia sem aviso prévio.<br/>
				4. O CIVIL que estiver TRAJANDO roupa REBELDE, mesmo sem licença rebelde e portando equipamento rebelde será considerado PERIGOSO, não importando o local onde esteja, será algemado e averiguado, caso resista o policial está autorizado a utilizar força letal, sempre objetivando realizar a prisão.<br/>
				5. O REBELDE que for abordado e não cooperar, ou for desrespeitoso, ou estiver em alguma área considerada civil, será abordado, algemado e obrigado a entregar seus itens rebeldes, roupa rebelde, colete rebelde e armas rebeldes ALÉM DE SER MULTADO em R$ 50,000 (Cinquenta Mil), e liberado caso não tenha nenhuma pendência com a polícia (não esteja na lista de procurados), CASO SE RECUSE A PAGAR A MULTA, SERÁ ENCAMINHADO A PRISÃO.<br/>
				6. O REBELDE a ser abordado em qualquer local e fugir durante a perseguição para qualquer local com SAFEZONE poderá ser preso dentro da mesma.<br/>
				7. Atente-se, MERCADO NEGRO É LOCAL DE TRÁFICO.<br/>
				===================================================================<br/>
				POLICIAL/SAMU<br/><br/>
				1. Nenhum cop está autorizado a logar como civil, salvo autorizado pelos ADMs.<br/>
				2. Respeitar todos os players, agir cordialmente e educadamente respeitando as abordagens conforme orientado por seu superiores.<br/>
				3. Após a morte em confronto de PvP contra rebeldes  o policial somente poderá voltar após 15 MINUTOS.<br/>
				4. Os Blindados e Offroad armada .50, poderá somente ser utilizado durante assalto a reserva federal e sob comando de oficial superior com patente mínima de Tenente.<br/>
				5. Apenas 2 aeronaves policiais no ar é permitido. 1 Helicóptero já é o suficiente, subir outro apenas com autorização do superior.<br/>
				6. Cada Policial pode carregar no máximo 4 granadas de luz (Flashbang) e usa-las sempre que for realmente necessário.<br/>
				7. Ao capturar um criminoso, o policial deverá leva-lo imediatamente sem demora para a HQ - Delegacia mais próxima onde será explicado tudo e ao indivíduo preso, para evitar emboscadas e resgate do mesmo no local onde foi capturado, principalmente quando faz parte de uma Gangue.<br/>
				8. Em casos de PvP, tiroteio onde os Policiais ficam sozinhos com risco de vida sem possibilidades de levar alguém preso, eles podem matar qualquer um que estiverem perto se não obedecerem a Ordem de se retirar<br/>
				9. Em caso de ausência, o policial pode ficar no máximo 2 semanas fora (com aviso da ausência e motivo ), caso contrário, poderá ser demitido e/ou trocado por outro, porém, no próximo recrutamento estará sendo o número 1 na lista para entrar na polícia novamente e deverá voltar na mesma patente que era para seus esforços não terem ido em vão. Isto vale apenas para patentes inferiores a Tenente<br/>
				10. SAMU somente poderá transportar players ressuscitados no trajeto do local do salvamento e o hospital.<br/>
				11. SAMU não poderá transportar nenhum item em seu helicóptero.<br/>
				12. Enquanto não houverem chamados O SAMU deverá permanecer nos hospitais.<br/>
				13. SAMU não está autorizada a reviver ninguém nas imediações da reserva federal durante PVP de roubo a reserva.<br/>
				14. A SAMU, ao reviver alguém em uma situação de risco, a prioridade de reviver é da policia.<br/>
				15. A SAMU poderá ser desautorizada pela polícia a ressuscitar players durante PVP, bem como permanecer sobrevoando a área.<br/>
				16. O POLICIAL que for ressuscitado após morrer em acidente terá o direito de escolher se quer ou não ser levado ao hospital.<br/>
				17. É proibido aos policiais ficar camperando em farms e processadores ilegais, bem como nos respectivos vendedores.<br/>
				18. Camperar significa permanecer mais de dois minutos em um mesmo local sem uma ocorRência.<br/><br/>
				"
		]
	];


	player createDiaryRecord ["serverrules",
		[
			"Prisões e Multas",
				"
				PRISÕES<br/><br/>
				1. A prisão deve ser realizada para criminosos que são considerados um perigo para si ou outrem.<br/>
				2. Você não pode prender alguém se já lhe aplicou uma multa e esta foi paga.<br/>
				3. Você deve falar para o suspeito o motivo dele estar sendo preso, antes de prendê-lo.<br/>
				4. Se um civil é procurado você deve prendê-lo. Não pode matá-lo, a menos que a situação necessite o uso de força letal.<br/>
				===================================================================<br/>
				MULTAS<br/><br/>
				1. A multa é considerada um aviso para o civil. Se ele quebra uma lei, mas não representa uma ameaça para ninguém, você pode multá-lo.<br/>
				2. Multas devem ter um preço razoável.<br/>
				3. A recusa do pagamento de uma multa, é um motivo legítimo para a prisão.<br/>
				4. Multar um civil em um valor que fere o bom senso (100k por excesso de velocidade) não é permitido e resultará em sanção e possibilita a remoção do agente da polícia.<br/>
				===================================================================<br/>
				EXEMPLO DE MULTAS:<br/><br/>
				1. Perturbação da ordem pública: 20000<br/>
				2. Desacato: 15000<br/>
				3. Fuga da Polícia (sem argumento): 20000<br/>
				4. Porte de Arma Ilegal: 30000<br/>
				5. Porte de Item Ilegal: 25000<br/>
				6. Demais situações serão analisadas caso a caso.<br/><br/>
				"
		]
	];

	player createDiaryRecord ["serverrules",
		[
			"Banimentos",
				"
				1. Atirar em um jogador sem dar um tempo razoável para ele seguir suas ordens é considerado Anti roleplay - AntiRP - Banimento por 1 dia.<br/>
				2. Atropelamento Proposital COM PRINT DO DENUNCIANTE - RDM - BANIMENTOS 1 dia/ 3 dias/ 7 dias/ permanente.<br/>
				3. Hack/Dup/Bugs/Glich/Exploits - /3dias e reset /permanente.<br/>
				4. Deslogar/Desconectar Algemado, Rendido, durante o pvp; - 200k multa /BANIMENTO DE 3 HORAS /BANIMENTO 2 DIAS.<br/>
				5. Matar em SAFEZONE ou RESPAWN - 1 dia/ 3 dias/ 7 dias/ permanente.<br/>
				6. Desrespeito (Com o servidor ou com Players) - BANIMENTO 5 HORAS.<br/>
				7. SPAM em CHAT/CELULAR - 1 dia/ 3 dias/ 7 dias/ permanente.<br/>
				8. Utilizar veículo armado sem ser no assalto a reserva federal ARMADO/BLINDADO - BANIMENTO 1 DIA.<br/>
				9. Iniciar o Assalto a player a mais de 30 mts sem digitar no SIDE CHANNEL (CANAL AZUL) - BANIMENTO DE 5 HORAS.<br/>
				10. Concluir o Assalto a player a mais de 30 mts sem estar no chão, mesmo anunciando - BANIMENTO DE 5 HORAS.<br/>
				11. Falar/colocar músicas/gritar, etc no SIDE CHANNEL - BANIMENTO 2 DIAS.<br/>
				12. Matar SAMU propositalmente sendo denunciado pelo comandante da SAMU - BANIMENTO 2 DIAS.<br/>
				13. Retornar ao local de sua morte antes de 15 minutos - BANIMENTO 5 HORAS.<br/>
				14. Aproximar-se a menos de 300mt do local de sua morte durante 15 minutos, -BANIMENTO 5 HORAS.<br/>
				15. Matar player algemado sendo levado pela polícia para não ser preso, mesmo por acidente - BANIMENTO 1 DIAS.<br/>
				16. Matar Players em qualquer hospital após ser ressuscitado - BANIMENTO 1 DIAS.<br/>
				17. Matar Players por vingança em nova vida- BANIMENTO 1 DIA.<br/>
				18. Matar cops ou samu dentro de HQ's ou hospitais, por qualquer razão - BANIMENTO 2 DIAS.<br/>
				19. Ao morrer pressionar ALT+F4, retirar o cabo da internet, etc. e -500k na conta. - BANIMENTO 2 DIAS.<br/>
				20. Ficar na cancela de qualquer local fechando ou abrindo cancelas para estragar veículos é considerado antiRP - BANIMENTO 1 DIA.<br/>
				21. Em toda a situação que ficar comprovado ou decidido pelo conselho do servidor que o player realizou RDM o mesmo será BANIDO por 5 dias do Servidor<br/><br/>
				"
		]
	];

	player createDiaryRecord ["serverrules",
		[
			"Relações Entre Players",
				"
				PLAYERS VIPS/GANGUE VIPS<br/><br/>

				1. PLAYER/GANGUE VIP será abordado conforme item 4 de REBELDES (Regras Específicas), e o procedimento de abordagem se dará conforme itens 2.2.4 ou 2.2.5, dependendo da postura do PLAYER/GANGUE VIP.<br/>
				2. PLAYERS/GANGUE VIP deverão RESPEITAR todos os outros players, ACIMA DE TUDO os médicos e policiais do servidor, OFENDER, DENEGRIR, HUMILHAR, XINGAR cops ou samu, será motivo de banimento do servidor e do teamspeak sem aviso prévio e sem devolução do valor doado ao servidor, mesmo sendo vip, então saiba que isso não será tolerado ou admitido.<br/>
				===================================================================<br/>
				RELAÇÕES REBELDES X CIVIS<br/><br/>
				
				1. Durante um assalto, o player rebelde deverá seguir as regras descritas.<br/>
				2. O Civil, deverá estar ciente de que poderá ser assaltado por REBELDES ou outro CIVIL seguindo os itens citados acima.<br/>
				===================================================================<br/>
				RELAÇÕES REBELDES X REBELDES<br/><br/>
				1. Um Player REBELDE pode abordar, ASSALTAR, ALGEMAR, SEQUESTRAR qualquer player REBELDE, desde que esteja seguindo as REGRAS.<br/>
				2. Rebeldes estão sujeitos a serem mortos por outros rebeldes sem a necessidade de aviso prévio.<br/>
				===================================================================<br/>
				MERCADO NEGRO E POSTO AVANÇADO REBELDE<br/><br/>
				1. A zona do mercado negro e o posto avançado rebelde são considerados zona sem lei, ou seja, poderá ser morto sem aviso previo. esteja pronto para qualquer coisa.<br/><br/>
				"
		]
	];

	player createDiaryRecord ["recruitments",
		[
			"Recrutamento COP",
				"
				1. O player interessado em ser policial deve ter no mínimo 15 anos de idade, possuir conhecimentos práticos de pilotagem de helicóptero, ter conhecimentos básicos de hierarquia militar, respeitar a hierarquia.<br/>
				2. É vetada a participação em qualquer recrutamento de players que já sejam policiais em outros servidores ou já tenha sido policias expulsos da polícia em outros servidores.<br/>
				3. Ninguém tem autorização para realizar recrutamentos para policiais, exceto com a presença do Comandante Geral da Polícia ou do Administrador Geral do Servidor.<br/><br/>
				"
		]
	];

	player createDiaryRecord ["recruitments",
		[
			"Recrutamento SAMU",
				"
				1. Todo player que quiser ser médico no servidor deverá primeiro jogar como civil no servidor por no mínimo 1 semana, não poderá ter apresentado nenhum comportamento antirp, não pode ter recebido nenhuma advertência como player, não pode ter tido nenhuma denuncia confirmada que tenha lhe ocasionado banimento temporário algum.<br/>
				2. O player precisa ter conhecimentos práticos em pilotagem de helicópteros, ter respeito à hierarquia das patentes médicas, deve logar todos os dias por no mínimo 1 hora.<br/>
				3. O player será inserido como ENFERMEIRO, onde permanecerá durante no mínimo 1 semana e após este prazo poderá subir de patente mediante indicação e consenso de todos os comandantes médicos atuais do servidor.<br/>
				4. Para ser médico o player deve ter idade mínima de 15 anos, logar por no mínimo 1 hora diariamente, respeitar as regras de médicos, respeitar os players, realizar o roleplay.<br/>
				5. É vetada a participação no recrutamento de médicos de qualquer civil que tenha sido advertido formalmente no servidor como civil.<br/>
				6. É vetada a participação em qualquer recrutamento de players que já sejam médicos em outros servidores ou já tenha sido médicos expulsos da polícia em outros servidores.<br/><br/>
				"
		]
	];

// Controls Section
	player createDiaryRecord ["Controles",
		[
			"Controles",
				"
				Y: Abre o menu do jogador<br/>
				U: Trancar e destrancar veículos e casas<br/>
				F: Sirene policial (Se policial)<br/>
				T: Inventário do veículo<br/>
				TAB: Render-se<br/>
				Shift esquerdo + R: Algemar<br/>
				Shift esquerdo + G: Coronhada / Atordoar (Utilizado para civis roubarem)<br/>
				Windows esquerdo: Tecla principal de interação. Usada para interagir com veículos/casas (reparar, etc) e para policiais interagir com civis.<br/>
				Windows esquerdo + T: Utilizado para pegar itens/dinheiro e apanhar.<br/>
				Shift esquerdo + L: Ativa as luzes de sirene da polícia e socorrista<br/>
				Shift esquerdo + H: Guarda sua arma<br/>
				Ctrl esquerdo + H: Retira sua arma<br/>
				"
		]
	];
  		[
 	TODAS AS REGRAS PODERÃO SER ALTERADAS SEM AVISOS PRÉVIOS !!!
 	];
