CC =gcc
LDFLAGS =
CFLAGS =-std=c99
ODIR =./bin
_OBJ_test_architecture =Top_Level_System.o Cla_Discrete.o Composite_Systems.o BlockInterfaces.o Cla_Operators.o Cla_Sources.o Cla_PredefinedConstants.o ___SimulationRuntime.o Unittest_Helper.o Unittest_Helper_NonIsolated.o ___BlockMessages.o UnitTestMessages.o
OBJ_test_architecture =$(patsubst %,$(ODIR)/%,$(_OBJ_test_architecture))
all: removeStuffFromLibraries clean test_architecture 
.PHONY: removeStuffFromLibraries all clean
removeStuffFromLibraries: 
	
$(ODIR): 
	mkdir -p $(ODIR) 
$(ODIR)/%.o: %.c $(ODIR)
	$(CC) $(CFLAGS)   -c -o $@ $<  
$(ODIR)/%.o: %.cpp $(ODIR)
	$(CC) $(CFLAGS)   -c -o $@ $<  
debug: CFLAGS +=-g
debug: clean test_architecture
test_architecture: $(OBJ_test_architecture)
	ar rcs  libtest_architecture.a $^  
clean: 
	rm -rf $(ODIR) 


