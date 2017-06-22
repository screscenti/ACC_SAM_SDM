CC =gcc
LDFLAGS =
CFLAGS =-std=c99
ODIR =./bin
_OBJ_test_ACC =Closed_Loop_Simulation_Models.o ACC_SpeedTracking_SubSys.o Cla_PredefinedConstants.o Composite_Systems.o BlockInterfaces.o Cla_Sources.o Cla_Discrete.o Top_Level_System.o Library.o ACC_SpeedTracking_Atomic.o ACC_SpeedTracking_System.o ACC_SafeDistance_Atomic.o ACC_SafeDistance_System.o ACC_SafeDistance_SubSys.o Amesim_Supercomponents.o Cla_Operators.o ___SimulationRuntime.o Ame_Simulink_Result_Parser.o Unittest_Helper.o Unittest_Helper_NonIsolated.o ___BlockMessages.o UnitTestMessages.o
OBJ_test_ACC =$(patsubst %,$(ODIR)/%,$(_OBJ_test_ACC))
all: removeStuffFromLibraries clean test_ACC 
.PHONY: removeStuffFromLibraries all clean
removeStuffFromLibraries: 
	
$(ODIR): 
	mkdir -p $(ODIR) 
$(ODIR)/%.o: %.c $(ODIR)
	$(CC) $(CFLAGS)   -c -o $@ $<  
$(ODIR)/%.o: %.cpp $(ODIR)
	$(CC) $(CFLAGS)   -c -o $@ $<  
debug: CFLAGS +=-g
debug: clean test_ACC
test_ACC: $(OBJ_test_ACC)
	$(CC) $(CFLAGS) -o $@ $^   $(LDFLAGS) -L-lxml2 -lxml2 
clean: 
	rm -rf $(ODIR) 


