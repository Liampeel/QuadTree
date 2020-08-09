
EXE_DIR = .
EXE = $(EXE_DIR)/tree
SRC= tree.c quadList.c makeNodes.c printout.c quadListNode.c quadDestroy.c quadChildren.c valueTree.c
CC=      cc
COPT=    -O
CFLAGS=
LIBS = -lm
OBJ= $(SRC:.c=.o)
.c.o:
	$(CC) $(COPT) -c -o $@ $<
$(EXE): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(EXE) $(LIBS)
clean:
	rm -f $(OBJ) $(EXE)

tree.o: tree.c valueTree.h quadList.h printout.h makeNodes.h quadListNode.h
quadChildren:o quadChildren.c makeNodes.h
quadDestroy:o quadDestroy.c makeNodes.h
makeNodes.o: makeNodes.c makeNodes.h
printout.o: printout.c printout.h
quadList.o: quadList.c quadList.h
quadListNode.o: quadListNode.c quadListNode.h
valueTree.o: valueTree.c valueTree.h makeNodes.h
