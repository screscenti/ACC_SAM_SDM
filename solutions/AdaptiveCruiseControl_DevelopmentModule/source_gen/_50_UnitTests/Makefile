CC =gcc
LDFLAGS =
CFLAGS =-std=c99
ODIR =./bin
_OBJ_unit_test_ACC =UnitTesting.o ACC_SafeDistance_Atomic.o Cla_Sources.o Cla_Discrete.o Cla_Operators.o BlockInterfaces.o Cla_PredefinedConstants.o Composite_Systems.o Top_Level_System.o ___SimulationRuntime.o Unittest_Helper.o Unittest_Helper_NonIsolated.o ___BlockMessages.o UnitTestMessages.o
OBJ_unit_test_ACC =$(patsubst %,$(ODIR)/%,$(_OBJ_unit_test_ACC))
all: removeStuffFromLibraries clean unit_test_ACC 
.PHONY: removeStuffFromLibraries all clean
removeStuffFromLibraries: 
	
$(ODIR): 
	mkdir -p $(ODIR) 
$(ODIR)/%.o: %.c $(ODIR)
	$(CC) $(CFLAGS)   -c -o $@ $<  
$(ODIR)/%.o: %.cpp $(ODIR)
	$(CC) $(CFLAGS)   -c -o $@ $<  
debug: CFLAGS +=-g
debug: clean unit_test_ACC
unit_test_ACC: $(OBJ_unit_test_ACC)
	$(CC) $(CFLAGS) -o $@ $^   $(LDFLAGS) 
test: unit_test_ACC
	./unit_test_ACC.exe
	 
clean: 
	rm -rf $(ODIR) 


