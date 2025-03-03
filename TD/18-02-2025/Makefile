#############################################################################
# file_input Makefile 
# Makefile that compiles both C and C++ files
# Author: Vasileios Filippos Skarleas - All rights reserved.
############################################################################# 
# utilisation des variables internes $@ $< $^ $*
# $@ : correspond au nom de la cible
# $< : correspond au nom de la premiere dependance
# $^ : correspond � toutes les d�pendances
# $* : correspond au nom du file_input sans extension 
#       (dans les regles generiques uniquement)
#############################################################################
# information sur la regle executee avec la commande @echo
# (une commande commancant par @ n'est pas affichee a l'ecran)

# C compilers
CC = gcc # clang can be used as well to compile C files
CCplus = g++

# chemin d'acces aux librairies (interfaces)
DIR = .

# chemin d'acces aux librairies (binaires)
LIBS = .

# options pour l'�dition des liens
OPTIONS = -L$(LIBS) -lm

# options pour la recherche des file_inputs .o et .h ou .hpp
OPTS = -I$(DIR)

# options de compilation
COMPILOPTSplus = -g -Wall -std=c++17 $(OPTS)
COMPILOPTS = -g -Wall $(OPTS)

GTKplus = `pkg-config --libs --cflags gtk+-3.0`

# liste des executables
EXECUTABLES = inventaire_magasin main

#############################################################################
# definition des regles
#############################################################################

########################################################
# By default, executables creation
all : $(EXECUTABLES)

########################################################
# General rule (as a reminder) in C and C++

%.o : %.cpp
	@echo ""
	@echo "---------------------------------------------"
	@echo "Compilation du module "$*
	@echo "---------------------------------------------"
	$(CCplus) -c $(COMPILOPTSplus) $<


main : main.o crtp.o
	@echo ""
	@echo "---------------------------------------------"
	@echo "Creation de l'executable "$@
	@echo "---------------------------------------------"
	$(CCplus) $^ $(OPTIONS) -o $@

#Cleaning repository rule
clean:
	rm -fR $(EXECUTABLES) *.o 
