CREATE SCHEMA projeto;

CREATE TABLE projeto.rota(
	id_rota int primary key,
	nome VARCHAR(100),
	descricao VARCHAR(1000),
	distancia_total int,
	tempo_estimado int
);

CREATE TABLE projeto.onibus(
	id_onibus int primary key,
	placa VARCHAR(10),
	modelo VARCHAR(100),
	capacidade int,
	autonomia VARCHAR(100)
);

CREATE TABLE projeto.evento(
	id_evento int primary key,
	id_rota INT,
	nome VARCHAR(100),
	descricao VARCHAR(1000),
	FOREIGN KEY(id_rota) REFERENCES projeto.rota(id_rota)
);

CREATE TABLE projeto.viagem(
	id_viagem int primary key,
	id_rota int,
	id_onibus int,
	horario_inicio int,
	horario_termino int,
	FOREIGN KEY(id_rota) REFERENCES projeto.rota(id_rota),
	FOREIGN KEY(id_onibus) REFERENCES projeto.onibus(id_onibus)
);

CREATE TABLE projeto.passageiro(
	id_passageiro int primary key,
	nome VARCHAR(100),
	historico_viagens VARCHAR(100),
	preferencia VARCHAR(100)
);

CREATE TABLE projeto.parada(
	id_parada int primary key,
	nome VARCHAR(100),
	infraestrutura VARCHAR(100)
);

CREATE TABLE projeto.pagamento(
	id_pagamento int primary key,
	id_viagem int,
	id_passageiro int,
	valor int,
	metodo VARCHAR(100),
	data_hora TIMESTAMP,
	FOREIGN KEY(id_viagem) REFERENCES projeto.viagem(id_viagem),
	FOREIGN KEY(id_passageiro) REFERENCES projeto.passageiro(id_passageiro)
);

CREATE TABLE projeto.tipo_parada(
	id_tipo int primary key,
	id_parada int,
	descricao VARCHAR(200),
	FOREIGN KEY(id_parada) REFERENCES projeto.parada(id_parada)
);

CREATE TABLE projeto.sensor(
	id_sensor int primary key,
	id_parada int,
	id_onibus int,
	descricao VARCHAR(200),
	FOREIGN KEY(id_parada) REFERENCES projeto.parada(id_parada), 
	FOREIGN KEY(id_onibus) REFERENCES projeto.onibus(id_onibus)
);

CREATE TABLE projeto.status(
	id_status int primary key,
	id_onibus int,
	descricao VARCHAR(200),
	FOREIGN KEY(id_onibus) REFERENCES projeto.onibus(id_onibus)
);

CREATE TABLE projeto.rota_parada(
	id_rota int,
	id_parada int,
    PRIMARY KEY (id_rota, id_parada),
	FOREIGN KEY(id_rota) REFERENCES projeto.rota(id_rota),
	FOREIGN KEY(id_parada) REFERENCES projeto.parada(id_parada)
);

CREATE TABLE projeto.viagem_passageiro(
	id_viagem int,
	id_passageiro int,
    PRIMARY KEY (id_viagem, id_passageiro), 
	FOREIGN KEY(id_viagem) REFERENCES projeto.viagem(id_viagem),
	FOREIGN KEY(id_passageiro) REFERENCES projeto.passageiro(id_passageiro)
);