CC =gcc
LDFLAGS =
CFLAGS =-std=c99
ODIR =./bin
_OBJ_lib =Top_Level_System.o Composite_Systems.o Cla_Operators.o Cla_Discrete.o Cla_PredefinedConstants.o BlockInterfaces.o Cla_Sources.o ACC_SafeDistance_Atomic.o ___SimulationRuntime.o Unittest_Helper.o Unittest_Helper_NonIsolated.o ___BlockMessages.o UnitTestMessages.o
OBJ_lib =$(patsubst %,$(ODIR)/%,$(_OBJ_lib))
all: removeStuffFromLibraries clean lib 
.PHONY: removeStuffFromLibraries all clean
removeStuffFromLibraries: 
	
$(ODIR): 
	mkdir -p $(ODIR) 
$(ODIR)/%.o: %.c $(ODIR)
	$(CC) $(CFLAGS)   -c -o $@ $<  
$(ODIR)/%.o: %.cpp $(ODIR)
	$(CC) $(CFLAGS)   -c -o $@ $<  
debug: CFLAGS +=-g
debug: clean lib
lib: $(OBJ_lib)
	ar rcs  liblib.a $^  
clean: 
	rm -rf $(ODIR) 


