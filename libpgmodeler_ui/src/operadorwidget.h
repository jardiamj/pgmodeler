/*
# Projeto: Modelador de Banco de Dados PostgreSQL (pgModeler)
# Sub-projeto: Biblioteca libpgsqldbm_ui
# Classe: OperadorWidget
# Descrição: Definição da classe que implementa o formulário de
#            edição dos atributos de operadores.
#
# Copyright 2006-2012 - Raphael Araújo e Silva <rkhaotix@gmail.com>
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation version 3.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# The complete text of GPLv3 is at LICENSE file on source code root directory.
# Also, you can get the complete GNU General Public License at <http://www.gnu.org/licenses/>
*/
#ifndef OPERADOR_WIDGET_H
#define OPERADOR_WIDGET_H

#include "objetobasewidget.h"
#include "tipopgsqlwidget.h"
#include "ui_operadorwidget.h"

class OperadorWidget: public ObjetoBaseWidget, public Ui::OperadorWidget {
 Q_OBJECT

 private:
   TipoPgSQLWidget *tipo_args[2];
   SeletorObjetoWidget *sel_funcoes[3],
                       *sel_operadores[6];

 public:
   OperadorWidget(QWidget * parent = 0);
   void definirAtributos(ModeloBD *modelo, ListaOperacoes *lista_op, Operador *operador);

 private slots:
  void hideEvent(QHideEvent *);

 public slots:
   void aplicarConfiguracao(void);
};

#endif
